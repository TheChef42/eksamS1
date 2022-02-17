#include <stdio.h>

void flip(int *a, int *b);

int main() {
    int a,b;


    scanf(" %d %d", &a, &b);

    int *pointer1 = &a;
    int *pointer2 = &b;

    flip(pointer1, pointer2);


    printf(" a = %d  b = %d", a, b);

    return 0;
}

void flip(int *a, int *b){
// pointers n1 and n2 points to the address of num1 and num2 respectively
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;

    }

