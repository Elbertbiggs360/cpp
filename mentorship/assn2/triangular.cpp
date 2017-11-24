//
//  triangular.c
//  mentorship
//
//  Created by Bruce Elbert Bigirwenkya on 17/11/2017.
//  Copyright © 2017 Bruce Elbert Bigirwenkya. All rights reserved.
//

#include "triangular.hpp"
#include <iostream>

int main(){
    int number = 10;
    int tri[10];
    triangulate(tri, number);
    for(int i=0;i<number;i++){
        std::cout << " " << tri[i] << "\n";
    }
    return 0;
}
