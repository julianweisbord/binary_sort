#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

struct Dlink*init(struct Dlink *new_list){
  new_list = malloc(sizeof(struct Dlink));
  return new_list;
}

void print_list(struct Dlink*lst){
  assert(lst!=NULL);
  struct Dlink *current =lst;
  while(current!=NULL){
    printf("Node Value: %1f", current->val);
    current =current->next;
  }
}
