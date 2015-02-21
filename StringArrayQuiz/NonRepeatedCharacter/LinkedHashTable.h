//
//  LinkedHashTable.h
//  FirstNonRepeatedCharacters
//
//  Created by athenaeum on 2015/02/21.
//  Copyright (c) 2015年 Matsumura Soyu KK. All rights reserved.
//

#ifndef __FirstNonRepeatedCharacters__LinkedHashTable__
#define __FirstNonRepeatedCharacters__LinkedHashTable__

#include <iostream>
#include "LinkedHashRow.h"

const int TSIZE = 13;

class LinkedHashTable {
public:
    LinkedHashTable() {
        table = new LinkedHashRow*[TSIZE];
        for(int i = 0; i < TSIZE; i++) {
            table[i] = NULL;
        }
    }
    
    int get(int key) {
        int hash = (key % TSIZE);
        if(table[hash] == NULL) {
            return -1;
        }
        else {
            LinkedHashRow* row = table[hash];
            while(row != NULL && row->getKey() != key){
                row = row->getNext();
            }
            if(row == NULL) {
                return -1;
            } else {
                return row->getValue();
            }
        }
    }
    
    void put(int key, int value) {
        int hash = (key % TSIZE);
        if(table[hash] == NULL) {
            table[hash] = new LinkedHashRow(key, value);
        } else {
            LinkedHashRow* row = table[hash];
            while(row->getNext() != NULL) {
                row = row->getNext();
            }
            if(row->getKey() == key) {
                row->setValue(value);
            } else {
                row->setNext(new LinkedHashRow(key,value));
            }
        }
    }
    
private:
    LinkedHashRow** table;
};

#endif /* defined(__FirstNonRepeatedCharacters__LinkedHashTable__) */
