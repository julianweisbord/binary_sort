#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv){
  struct linkedList* link = NULL;
  link = init();
  addBeforeLast(link,1);
  addBeforeLast(link,2);
  addBeforeLast(link,3);
  addBeforeLast(link,4);
  addBeforeLast(link,5);
  addBeforeLast(link,10);
  print_list(link);

  int position;
  // see if the list contains 10...
  position = binary_search(link, 0,link->size,10);
  printf("The position is: %d\n", position);
  removeList(link);
}
