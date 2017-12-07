//
//  celebrity_jeopardy.c
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 07/12/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#include <stdio.h>

int main(){
    char func[100];
    printf("Celebrity Jeopardy\n");
    printf("input final answer || -1 to quit\n");
    while(scanf ("%[^\n]%*c", func)){
        if(func[0]=='-' && func[1]=='1'){
            return 1;
        }
        printf("%s\n", func);
    }
    return 0;
}
