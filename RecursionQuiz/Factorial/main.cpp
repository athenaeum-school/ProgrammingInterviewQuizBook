//
//  main.cpp
//  Factorial
//
//  Created by athenaeum on 2015/02/16.
//  Copyright (c) 2015年 Athenaeum Society. All rights reserved.
//

#include <iostream>

long Factorial(long n) {
    if(n > 1) {
        return Factorial(n-1) * n;
    } else {
        return 1;
    }
}

int DoAllFactorials(int n, int * results, int level) {
    if (n > 1) {
        results[level] = n * DoAllFactorials(n-1, results, level + 1);
        return results[level];
    }
    else {
        results[level] = 1;
        return 1;
    }
}

int * AllFactorials(int n) {
    int* results;
    int length = (n == 0 ? 1 : n);
    results = (int *) malloc(sizeof(int) * length);
    if(!results) {
        return NULL;
    }
    DoAllFactorials(n, results, 0);
    return results;
}

int main(int argc, const char * argv[])
{
    std::cout << Factorial(4) << std::endl;
    return 0;
}
