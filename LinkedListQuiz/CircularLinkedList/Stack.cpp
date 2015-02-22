//
//  Stack.cpp
//  CircularLinkedList
//
//  Created by athenaeum on 2015/02/22.
//  Copyright (c) 2015年 Athenaeum Society. All rights reserved.
//

#include "Stack.h"

Stack::Node* Stack::getHead() {
    return head;
}

Stack::Stack() {
    head = NULL;
}

Stack::~Stack() {
    Node* next;
    while(head) {
        next = head->next;
        delete head;
        head = next;
    }
    return;
}

void Stack::Push(void * data) {
    Node* node = new Node;
    node->data = data;
    node->next = head;
    head = node;
}

void* Stack::Pop() {
    Node* tmp = head;
    void* data;
    
    if(head == NULL) {
    }
    
    data = head->data;
    head = head->next;
    delete tmp;
    return data;
    
}