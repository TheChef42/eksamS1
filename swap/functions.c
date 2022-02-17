//
// Created by Vitagliano on 09/01/2022.
//

#include "functions.h"

void print_reverse(int array[], int length){
    for (int i = length-1; i >= 0; i--) {
        printf(" %d", array[i]);
    }
}
