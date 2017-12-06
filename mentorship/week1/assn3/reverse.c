//
//  reverse.c
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 24/11/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define elem(x) (sizeof(x)/sizeof(x[0]))

void copier(char str[], int targetlen, char oldArray[]){
    for(int i=0;i<targetlen;i++){
        str[i] = oldArray[i];
    }
}

int main() {
    char * target;
    char * str;
    int * targetlen;
    
    target = (char*) malloc (elem("hakuna matata!")*sizeof(char));
    target = "hakuna matata!";
    
    str = (char*) malloc (elem(target)*sizeof(char));
    targetlen = (int*)malloc(sizeof(int));
    targetlen = strlen(target);
    
    printf("%d\n", targetlen);
    if(target == NULL || str == NULL){
        printf("Failed to allocate memory");
        return 1;
    }
    copier(str, targetlen, target); // this line should copy "hakuna matata!"
    printf("%s\n", str);
    free(target);
    free(str);
    free(targetlen);
    return 0;
}

// TODO:
// Fix pointer memory allocation issues
