#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

struct linkedList*init(){
  struct linkedList *new_list = malloc(sizeof(struct Dlink));
  new_list->firstLink = malloc(sizeof(struct Dlink));
  new_list->lastLink = malloc(sizeof(struct Dlink));
  new_list->firstLink->next = new_list->lastLink;
  new_list->lastLink->prev = new_list->firstLink;
  new_list->size =0;
  return new_list;
}

void print_list(struct linkedList*lnkList){
  assert(lnkList!=NULL);
  struct Dlink *current =lnkList->firstLink->next;
  while(current!=lnkList->lastLink){
    printf("Node Value: %d\n", current->val);
    current =current->next;
  }
}

void addBeforeLast(struct linkedList *lnkList, TYPE value){
  assert(lnkList!=NULL);
  struct Dlink*newLink = malloc(sizeof(struct Dlink));
  newLink->val = value;
  newLink->next = lnkList->lastLink;
  newLink->prev = lnkList->lastLink->prev;
  lnkList->lastLink->prev->next = newLink;
  lnkList->lastLink->prev = newLink;
  ++lnkList->size;
}

// add binary search
