//
//  main.cpp
//  FirstNonRepeatedCharacters
//
//  Created by athenaeum on 2015/02/16.
//  Copyright (c) 2015年 Matsumura Soyu KK. All rights reserved.
//

#include <iostream>
#include "HashTable.h"
#include <stdlib.h>

int length(const char* characters) {
    int pos;
    while(characters[pos] != 0) {
        pos++;
    }
    return pos;
}

char FirstNonRepeatedString(const char* str) {
    
    HashTable* strHash = new HashTable();
    
    const char* characters = str;
    
    for(int i = 0; i < length(str); i++) {
        int isRepeated = strHash->get(characters[i]);
        char value = characters[i];
        if(isRepeated == -1) {
            strHash->put(value, (int)isRepeated + 1);
        } else {
            strHash->put(value, 1);
        }
    }
    
    for(int i = 0; i < length(str); i++) {
        char value = characters[i];
        if(strHash->get(value) == 1) {
            return (char) characters[i];
        }
    }
    
    return NULL;
}

/*
void PrintNonRepeatingCharacters() {
    int isRepeated[100];
    for(int i = 0; i < 100; i++) {
        isRepeated[i] = 0;
    }
    char characters[200];
    std::cout << "Enter a string \n";
    std::cin.getline(characters, 200);
    int index = 0;
    while(characters[index] != NULL) {
        
    }
}
*/

int main(int argc, const char * argv[])
{
    const char str[] = "abcdeeettyeerteop";

    char result = FirstNonRepeatedString(str);
    
    std::cout << result << "\n";
    
    return 0;
}
