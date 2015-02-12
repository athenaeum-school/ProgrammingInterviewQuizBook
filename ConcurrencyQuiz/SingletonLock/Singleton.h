//
//  Singleton.h
//  Sample Concurrency Programs
//
//  Created by athenaeum on 2015/02/07.
//  Copyright (c) 2015年 Athenaeum Society. All rights reserved.
//

#ifndef __Sample_Concurrency_Programs__Singleton__
#define __Sample_Concurrency_Programs__Singleton__

#include "Lock.h"

template<class T>
class Singleton
{
private:
    static Lock lock;
    static T* object;
    
protected:

    
public:
    Singleton() {}
    static T* Instance() {
        
        if(object == 0) {
            lock.AcquireLock();
            if(object == 0) {
                object = new T;
            }
            lock.ReleaseLock();
        }
        return object;
    }
    
};

template<typename T>::Lock
Singleton<T>::lock;

template<typename T>
T* Singleton<T>::object;


#endif /* defined(__Sample_Concurrency_Programs__Singleton__) */
