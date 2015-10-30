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
int binary_search(struct linkedList* lnkList,int low, int high, TYPE value){
  // want to see if the list contains val, return position of val.
  int i, mid;
  i =0;
  if(low<=high){
    mid =(low +((high-low)/2)); //divide by 2, will dividing integers be a problem?
  }
  struct Dlink * current = lnkList->firstLink->next;
  while(current!=lnkList->lastLink){
    if(mid == i){
      if (current->val == value){
        return mid;
      }
      else if(current->val < value){
        return binary_search(lnkList,mid+1, high, value);
      }
      else if(current->val > value){
        return binary_search(lnkList,low, mid -1, value);
      }
      else return 404; //if not found
    }
    ++i;
    current = current->next;
  }
}
