//
//  Stack.h
//  CircularLinkedList
//
//  Created by athenaeum on 2015/02/22.
//  Copyright (c) 2015年 Athenaeum Society. All rights reserved.
//

#ifndef __CircularLinkedList__Stack__
#define __CircularLinkedList__Stack__

#include <iostream>

class Stack {
protected:
    typedef struct NodeT {
        struct NodeT* next;
        void * data;
    } Node;
    Node* head;
public:
    Stack();
    ~Stack();
    void Push(void *data);
    void* Pop();
    Node* getHead();
};

#endif /* defined(__CircularLinkedList__Stack__) */
