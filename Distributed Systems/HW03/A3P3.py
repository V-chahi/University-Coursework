"""
CA-CS-803
A3_P3.py
Amine Chahi
m.chahi@jacobs-university.de
"""

import threading
import time
import random
from collections import defaultdict

class Node:
    def __init__(self, idx, neighbours):
        self.idx = idx
        self.nb = neighbours.copy() 		      # list of neighbours
        self.rec = 0 				     # receive count
        self.tok = 0  				    # determine if <tok> is at current node
        self.father = None  			   # parent node
        self.received_messages = set() 		  # to keep track of received message IDs
        self.lock = threading.Lock()  		 # to handle concurrent access to node state

    def send(self, another, msg_id):
        delay = random.uniform(0.1, 0.5)       # simulate network delay
        print(f"Node {self.idx} sends message {msg_id} to Node {another.idx} with delay {delay:.2f}s")
        threading.Timer(delay, self.deliver, [another, msg_id]).start()

    def deliver(self, another, msg_id):
        if random.random() < 0.1:           # simulate 10% message loss
            print(f"Message {msg_id} from Node {self.idx} to Node {another.idx} lost")
            return
        another.receive(self, msg_id)

    def receive(self, sender, msg_id):
        with self.lock:
            if msg_id in self.received_messages:
                print(f"Node {self.idx} discards duplicate message {msg_id} from Node {sender.idx}")
                return
            self.received_messages.add(msg_id)
            self.rec += 1
            if self.father is None:
                self.father = sender.idx
                print(f"Node {self.idx} sets its father to Node {sender.idx}")
                threading.Thread(target=self.non_init_work).start()
            print(f"Node {self.idx} has rec = {self.rec}")

    def initiator_work(self):
        self.tok = 1                 # Initiator node starts with the token
        for idx in self.nb:
            neighbour = next(node for node in G if node.idx == idx)
            self.send(neighbour, f"{self.idx}->{neighbour.idx}")
        while True:
            with self.lock:
                if self.rec >= len(self.nb):
                    break
            time.sleep(0.1)                           # Avoid busy waiting
        print("Initiator Node decides!")

    def non_init_work(self):
        for idx in self.nb:
            if idx != self.father:
                neighbour = next(node for node in G if node.idx == idx)
                self.send(neighbour, f"{self.idx}->{neighbour.idx}")
        while True:
            with self.lock:
                if self.rec >= len(self.nb) - 1:
                    break
            time.sleep(0.1)                         # Avoid busy waiting
        print(f"Node {self.idx} decides!")

   						# Initialize the graph
G = [
    Node(1, [2, 6, 7]),
    Node(2, [1, 3, 4]),
    Node(3, [2, 4]),
    Node(4, [2, 3, 5]),
    Node(5, [4, 6, 7]),
    Node(6, [1, 5, 7]),
    Node(7, [1, 5, 6])
]

					# Start the wave(Echo) algorithm from the initiator node
threading.Thread(target=G[0].initiator_work).start()
