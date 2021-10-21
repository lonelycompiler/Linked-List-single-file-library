#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <stdbool.h>

struct Node
{
    char* value;
    int index;
};

void
add();

void
addFirst();

void
addLast();

void
clear();

void
getFirst();

void
getLast();

struct Node
peak();

bool
removeFirst();

bool
removeLast();

struct Node*
toArray();

void
freeNode(struct Node *node);

void


#endif