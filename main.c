#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv){
  struct linkedList* link = NULL;
  link = init();
  addBeforeLast(link,1);
  addBeforeLast(link,2);
  addBeforeLast(link,3);
  print_list(link);
}
