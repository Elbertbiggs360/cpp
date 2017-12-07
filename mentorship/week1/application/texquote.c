//
//  texquote.c
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 06/12/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int len(char* quote);

int main(){
    printf("Tex Quotes\n------------\n");
    printf("A program to convert the stylized quotes to tex quotes\n");
    printf("Input text:\n");

    char* text = (char*)malloc(200*sizeof(char));
    char* texquoted = (char*)malloc(400*sizeof(char));
    
    scanf ("%[^\n]%*c", text);
    if(text == NULL){
        printf("Failed to allocate memory");
        return 1;
    }
    int close_quote = 0;
    int j = 0;
    for(int i=0;i<len(text);i++){
        char quote = text[i];
        if(quote=='"'){
            if(close_quote==1){
                texquoted[j] = '\'';
                texquoted[j+1] = '\'';
                close_quote = 0;
            } else if(close_quote ==0) {
                texquoted[j] = '`';
                texquoted[j+1] = '`';
                close_quote = 1;
            }
            j = j+2;
        } else {
            texquoted[j] = quote;
            j = j+1;
        }
        
    }
    printf("Output text:\n");
    printf("\n%s\n", texquoted);
    
    free(text);
    free(texquoted);
    return 0;
}

int len(char* quote){
    int quote_len = 0;
    while(*(quote++)){
        quote_len++;
    }
    return quote_len;
}
