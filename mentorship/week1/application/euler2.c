//
//  euler2.c
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 08/12/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#include <stdio.h>

int main(){
    int prev_1 = 1;
    int prev_2 = 2;
    int buffer;
    int sum = prev_2;
    while(prev_2<4000000){
        buffer = prev_1;
        prev_1 = prev_2;
        prev_2 += buffer;
        if(prev_2%2==0){
            sum+=prev_2;
        }
    }
    printf("The sum is %d\n", sum);
    return 0;
}
