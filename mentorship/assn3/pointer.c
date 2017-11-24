//
//  pointer.c
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 24/11/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#include <stdio.h>

void square(int *num) {
    *num *= (*num);
}

int main() {
    
    int x = 4;
    int *y = &x;
    square(y);
    printf("%d\n", x);
    return 0;
}

