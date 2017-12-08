//
//  euler1.c
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 07/12/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#include <stdio.h>

int main(){
    int number = 10;
    int sum = 0;
    scanf("%d", &number);
    for(int i=0;i<number;i++){
        if(i%3==0||i%5==0){
            sum+=i;
        }
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
