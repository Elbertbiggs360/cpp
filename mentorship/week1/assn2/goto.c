//
//  goto.c
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 20/11/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#include <stdio.h>

int main(){
    int i = 5;
    printf("Welcome here");
    test:
    printf("\t or there\n");
    i = i-1;
    if(i>1){
        goto test;
    }
    return 0;
}
