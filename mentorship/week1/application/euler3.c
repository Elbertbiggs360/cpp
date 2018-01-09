//
//  euler3.c
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 11/12/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#include <stdio.h>

int main(){
    int n = 0;
    int p = 2;
    scanf("%d", &n);
    while (p*p <=n){
        if(n%p == 0){
            n = n/p;
        } else {
            if(n%p>2){
                p = p+2;
            } else {
                p=p+1;
            }
        }
    }
    printf("%d", n);
    return 0;
}
