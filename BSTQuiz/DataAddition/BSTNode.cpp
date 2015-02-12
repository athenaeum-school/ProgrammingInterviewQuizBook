//
//  BSTNode.cpp
//  ProgrammingInterview
//
//  Created by ATHENAEUM SOCIETY on 2015/02/12.
//  Copyright (c) 2015年 ATHENAEUM SOCIETY. All rights reserved.
//

#include "BSTNode.h"

bool BST::add(int value) {
    if(root == NULL) {
        root = new Node(value);
        return true;
    } else {
        return root->add(value);
    }
}

bool Node::add(int value) {
    if(value == this->value)
        return false;
    else if (value < this->value) {
        if(left == NULL) {
            left = new Node(value);
            return true;
        } else {
            return left->add(value);
        }
    } else if (value > this->value) {
        if(right == NULL) {
            right = new Node(value);
            return true;
        } else {
            return right->add(value);
        }
    }
    
    return false;
}