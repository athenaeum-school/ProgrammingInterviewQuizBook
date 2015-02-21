//
//  HashRow.h
//  FirstNonRepeatedCharacters
//
//  Created by athenaeum on 2015/02/20.
//  Copyright (c) 2015年 Matsumura Soyu KK. All rights reserved.
//

#ifndef __FirstNonRepeatedCharacters__HashRow__
#define __FirstNonRepeatedCharacters__HashRow__

#include <iostream>

class HashRow {
public:
    HashRow(int key, int value) {
        this->key = key;
        this->value = value;
    }
    int getKey() {
        return this->key;
    }
    int getValue() {
        return this->value;
    }
private:
    int key;
    int value;
};

#endif /* defined(__FirstNonRepeatedCharacters__HashRow__) */
