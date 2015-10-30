#ifndef SORT_H
#define SORT_H
#define TYPE int

struct Dlink{
  struct Dlink * next;
  struct Dlink * prev;
  TYPE val;

};
struct linkedList{
	int size;
	struct Dlink *firstLink;
	struct Dlink *lastLink;
};

#endif
