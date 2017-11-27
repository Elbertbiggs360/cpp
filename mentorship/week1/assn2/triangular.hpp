//
//  triangular.h
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 17/11/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#ifndef triangular_h
#define triangular_h

#include <stdio.h>
#include <iostream>

#endif /* triangular_h */

void triangulate(int triArray[], int number);


void triangulate(int triArray[], int number) {
    int next_no = 0;
    for(int i=0;i<number; i++){
        next_no = (i*(i+1))/2;
        triArray[i] = next_no;
    }
}
