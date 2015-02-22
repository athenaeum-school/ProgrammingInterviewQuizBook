//
//  main.cpp
//  CircularLinkedList
//
//  Created by athenaeum on 2015/02/22.
//  Copyright (c) 2015年 Athenaeum Society. All rights reserved.
//

#include <iostream>
#include "Stack.h"
int main(int argc, const char * argv[])
{
    char tmp1[] = "abcde";
    char tmp2[] = "fghij";
    char tmp3[] = "nmopq";

    Stack* stack = new Stack();
    stack->Push(tmp1);
    printf("Pushed: %s\n", tmp1);
    
    stack->Push(tmp2);
    printf("Pushed: %s\n", tmp2);
    
    stack->Push(tmp3);
    printf("Pushed: %s\n", tmp3);
    
    char* tmpStr = (char*) stack->getHead()->next->next->data;
    printf("Circular head is: %s\n", tmpStr);
    
    char* tmpStr2 = (char*) stack->Pop();
    printf("Poppped: %s\n", tmpStr2);
    
    char* tmpStr1 = (char*) stack->Pop();
    printf("Poppped: %s\n", tmpStr1);

    return 0;
}

