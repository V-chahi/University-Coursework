
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  char str[20];
  struct node *next;
};

typedef struct node my_list;

my_list *insertBegin(my_list *head, char str_data[]) {

  my_list *newnode = malloc(sizeof(my_list));
  if (!newnode) {
    exit(1);
  }
  if (!head) {
    strcpy(newnode->str, str_data);
    newnode->next=head;
    head = newnode;
    return head;
  }

  strcpy(newnode->str, str_data);
  newnode->next = head;
  head->next=NULL;
  head = newnode;
  return head;
}

void printList(my_list *head) {
     my_list *ptr;

      for(ptr = head; ptr; ptr = ptr->next){
        printf("%s ",ptr->str);
      }

  if (!head) {
    printf("nothing to print");
    return;
  }

  printList(head->next);
{
    printf("%s ", head->str);
    ptr=ptr->next;
  }
}

int main() {

  my_list *newlist = NULL;
  char str[20];
  int n;
  scanf("%d", &n);
  getchar();

  for (int i = 0; i < n; i++)
  {
    getchar();
    fgets(str, 20, stdin);
    str[strlen(str)-1]=
    newlist = insertBegin(newlist, str);
    getchar();
  }

  str[strlen(str)-1]='\0';
  printf("content of list");
  printList(newlist);

  return 0;
}
