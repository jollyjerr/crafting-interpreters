#include "greet.h"
#include "linked_list.h"
#include <stdio.h>

int main() {
  greet();

  Node *list = NULL;

  insert(&list, NULL, "idk how to use c lol");

  print_list(list);

  return 0;
}
