//
//  HashTable.h
//  FirstNonRepeatedCharacters
//
//  Created by athenaeum on 2015/02/20.
//  Copyright (c) 2015年 Matsumura Soyu KK. All rights reserved.
//

#ifndef __FirstNonRepeatedCharacters__HashTable__
#define __FirstNonRepeatedCharacters__HashTable__

#include <iostream>
#include "HashRow.h"

const int TSIZE = 13;

class HashTable {
public:
    ~HashTable() {
        for(int i = 0; i < TSIZE; i++) {
            if(table[i] != NULL) {
                delete table[i];
            }
        }
        delete[] table;
    }
    HashTable() {
        table = new HashRow*[TSIZE];
        for(int i = 0; i < TSIZE; i++)
            table[i] = NULL;
    }
    int get(int key) {
        int hash = (key % TSIZE);
        while(table[hash] != NULL && table[hash]->getKey() != key) {
            hash = (hash + 1) % TSIZE;
        }
        if(table[hash] == NULL) {
            return -1;
        } else {
            return table[hash]->getValue();
        }
    }
    void put(int key, int value) {
        int hash = (key % TSIZE);
        while(table[hash] != NULL && table[hash]->getKey() != key) {
            hash = (hash + 1) % TSIZE;
        }
        if(table[hash] == NULL) {
            delete table[hash];
        }
        table[hash] = new HashRow(key, value);
    }
private:
    HashRow** table;
    
};

#endif /* defined(__FirstNonRepeatedCharacters__HashTable__) */
