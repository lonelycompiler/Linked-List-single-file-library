#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <stdbool.h>

struct Node
{
    char* value;
    int index;
    struct Node *next;
    struct Node *prev;
};

int size = 0;
struct Node *head;
struct Node *tail;

int getSize();

void addFirst(struct Node *newnode);

void addLast (struct Node *newnode);

void clear();

void getFirst();

void getLast();

struct Node peak();

bool removeFirst();

bool removeLast();

struct Node* toArray();

void freeNode(struct Node *node);


void
addFirst(struct Node *newnode)
{
    // if nothing in list, create first node
    if (getSize() == 0)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        struct Node *temp;
        temp = head;
        // newnode <- head
        (head->next)->prev = newnode;
    }
}

void
addLast (struct Node *newnode)
{
    // 
    if (getSize() == 0)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

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


int
getSize()
{
    return size;
}


#endif