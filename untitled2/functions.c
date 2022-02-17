//
// Created by Vitagliano on 09/01/2022.
//

#include "functions.h"

int prime (int x, int y){
    int state;
    for (int i = x; i < y; i++) {
        for (int j = i-1; j > 1; j--) {
            if(i % j == 0){
                state = 1;
                break;
            }
            state = 0;
        }
        if(state == 1){
            printf(" %d is not a prime number\n", i);
        } else{
            printf(" %d is a prime number\n", i);
        }
    }
}
