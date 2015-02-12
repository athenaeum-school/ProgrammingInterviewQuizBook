//
//  main.cpp
//  Sample Concurrency Programs
//
//  Created by athenaeum on 2015/02/07.
//  Copyright (c) 2015年 Athenaeum Society. All rights reserved.
//

#include <iostream>
#include <thread>
#include "Singleton.h"
#include "Foo.h"

int main(int argc, const char * argv[])
{
    Foo* instance = Singleton<Foo>::Instance();
    std::cout << instance << std::endl;
    return 0;
}

/*
void hello(int i)
{
    std::cout << i;
    std::cout << "Hello World\n";
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    std::thread t(hello,1);
    std::thread t1(hello,2);
    std::thread t2(hello,3);
    t2.join();
    t1.join();
    t.join();
    return 0;
}
 */

