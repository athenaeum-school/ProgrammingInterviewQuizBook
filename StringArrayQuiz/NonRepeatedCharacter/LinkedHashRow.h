//
//  LinkedHashRow.h
//  FirstNonRepeatedCharacters
//
//  Created by athenaeum on 2015/02/21.
//  Copyright (c) 2015年 Matsumura Soyu KK. All rights reserved.
//

#ifndef __FirstNonRepeatedCharacters__LinkedHashRow__
#define __FirstNonRepeatedCharacters__LinkedHashRow__

#include <iostream>

class LinkedHashRow {
public:
    LinkedHashRow(int key, int value) {
        this->key = key;
        this->value = value;
        this->next = NULL;
    }
    
    int getKey() {
        return this->key;
    }
    
    int getValue() {
        return this->value;
    }
    
    void setValue(int value) {
        this->value = value;
    }
    
    void setNext(LinkedHashRow* next) {
        this->next = next;
    }
    
    LinkedHashRow* getNext() {
        return next;
    }
private:
    int key;
    int value;
    LinkedHashRow* next;
};

#endif /* defined(__FirstNonRepeatedCharacters__LinkedHashRow__) */
