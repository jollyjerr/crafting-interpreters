#include "greet.h"
#include "linked_list.h"
#include <stdio.h>

int main() {
  greet();

  Node *list = NULL;

  insert(&list, NULL, "first");
  insert(&list, NULL, "third");

  printf("should be third, first\n");
  print_list(list);

  insert(&list, find(list, "first"), "second");
  insert(&list, find(list, "third"), "fourth");

  printf("should be third, fourth, first, second\n");
  print_list(list);

  delete (&list, find(list, "third"));
  delete (&list, find(list, "fourth"));
  insert(&list, find(list, "second"), "third");
  insert(&list, find(list, "third"), "fourth");

  printf("should be first, second, third, fourth\n");
  print_list(list);

  delete (&list, find(list, "first"));
  delete (&list, find(list, "second"));
  delete (&list, find(list, "third"));
  delete (&list, find(list, "fourth"));

  printf("should be nothing\n");
  print_list(list);

  return 0;
}
