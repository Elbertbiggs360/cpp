//
//  exercise2.h
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 20/11/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#ifndef exercise2_h
#define exercise2_h

#include <stdio.h>

#endif /* exercise2_h */

int factorial (int n);

int factorial (int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1;
    }
    return i;
}
