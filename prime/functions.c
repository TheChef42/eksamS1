//
// Created by Vitagliano on 07/01/2022.
//
#include "functions.h"
void prime(int x, int y) {
    int start = x, end = y, status;
    for (int i = start; i <= end; i++) {
        status = 0;
        for (int j = i - 1; j > 1; j--) {
            if ((i % j) == 0) {
                status = 1;
                break;
            }
        }
        if (status == 1) {
            printf(" %d is not at prime\n", i);
        } else {
            printf(" %d is a prime\n", i);
        }
    }
}