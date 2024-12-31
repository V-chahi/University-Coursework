import matplotlib.pyplot as plt

#Read data from execution_times.txt
threads = []
execution_times = []

with open('execution_times.txt', 'r') as file:
   #Skip header
    next(file)
    for line in file:
        t, time = line.split()
        threads.append(int(t))
        execution_times.append(float(time))

 #Plotting
plt.figure(figsize=(10, 6))
plt.plot(threads, execution_times, marker='o')
plt.title('Impact of Threading on Execution Time')
plt.xlabel('Number of Threads')
plt.ylabel('Execution Time (seconds)')
plt.grid(True)
plt.xticks(threads)
plt.show()
