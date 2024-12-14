#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/* A member of a doubly linked list */
typedef struct Node {
  char *data;
  struct Node *next;
  struct Node *prev;
} Node;

/* Creates a new node and adds it after prev on the list. */
void insert(Node **list, Node *prev, const char *data);

/* Prints the list data */
void print_list(Node *list);

#endif
