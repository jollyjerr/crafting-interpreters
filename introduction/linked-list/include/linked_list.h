#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/* A member of a doubly linked list */
typedef struct Node {
  char *data;
  struct Node *next;
  struct Node *prev;
} Node;

/* Prints the list data */
void print_list(Node *list);

/* Creates a new node and adds it after prev on the list. */
void insert(Node **list, Node *prev, const char *data);

/* Returns a pointer to a node with this data */
Node *find(Node *list, const char *data);

/* Remove a node from the list */
void delete(Node **list, Node *target);

#endif
