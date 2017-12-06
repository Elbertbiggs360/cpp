//
//  texquote.c
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 06/12/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define len(x) (sizeof(x)/sizeof(x[0]))

int main(){
    printf("Tex Quotes\n------------\n");
    printf("A program to convert the stylized quotes to tex quotes\n");
    printf("Input text: \t");

    char* text = (char*)malloc(200*sizeof(char));
    
    scanf ("%[^\n]%*c", text);
    if(text == NULL){
        printf("Failed to allocate memory");
        return 1;
    }
    int close_quote = 0;
    for(int i=0;i<len(text);i++){
        char quote = text[i];
        if(quote=='"'){
            if(close_quote){
                printf("%c", quote);
            }
        }
        
    }
    printf("\n%s\n", text);
    
    free(text);
    return 0;
}
