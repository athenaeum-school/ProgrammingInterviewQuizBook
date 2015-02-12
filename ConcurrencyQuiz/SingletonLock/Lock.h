//
//  Lock.h
//  Sample Concurrency Programs
//
//  Created by athenaeum on 2015/02/07.
//  Copyright (c) 2015年 Athenaeum Society. All rights reserved.
//

#ifndef __Sample_Concurrency_Programs__Lock__
#define __Sample_Concurrency_Programs__Lock__

class Lock
{
public:
    Lock();
    ~Lock();
    void AcquireLock();
    void ReleaseLock();
};

#endif /* defined(__Sample_Concurrency_Programs__Lock__) */
