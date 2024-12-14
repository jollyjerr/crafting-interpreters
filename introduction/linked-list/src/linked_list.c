#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_list(Node *list) {
  printf("---------------list---------------\n");
  while (list != NULL) {
    printf("%p [prev %p next %p] %s\n", list, list->prev, list->next,
           list->data);
    list = list->next;
  }
}

void insert(Node **list, Node *prev, const char *data) {
  Node *node = malloc(sizeof(Node));

  node->data = malloc(strlen(data));
  strcpy(node->data, data);

  int is_new_head = prev == NULL;
  if (is_new_head) {
    if (*list != NULL) {
      (*list)->prev = node;
    }

    node->prev = NULL;
    node->next = *list;
    *list = node;
  } else {
    node->next = prev->next;
    if (node->next != NULL) {
      node->next->prev = node;
    }

    prev->next = node;
    node->prev = prev;
  }
}

Node *find(Node *list, const char *data) {
  while (list != NULL) {
    int is_found = strcmp(list->data, data) == 0;
    if (is_found) {
      return list;
    }

    list = list->next;
  }

  return NULL;
}

void delete(Node **list, Node *target) {
  if (target->prev != NULL) {
    target->prev->next = target->next;
  }
  if (target->next != NULL) {
    target->next->prev = target->prev;
  }

  if (*list == target) {
    *list = target->next;
  }

  free(target->data);
  free(target);
}
