//
//  BSTNode.h
//  ProgrammingInterview
//
//  Created by ATHENAEUM SOCIETY on 2015/02/12.
//  Copyright (c) 2015年 ATHENAEUM SOCIETY. All rights reserved.
//

#ifndef __ProgrammingInterview__BSTNode__
#define __ProgrammingInterview__BSTNode__

#include <iostream>

class Node {
private:
    int value;
    Node* left;
    Node* right;
public:
    Node(int value) {
        this->value = value;
        left = NULL;
        right = NULL;
    }
    bool add(int value);
};

class BST {
private:
    Node* root;
public:
    BST() {
        root = NULL;
    }
    bool add(int value);
};

#endif /* defined(__ProgrammingInterview__BSTNode__) */
