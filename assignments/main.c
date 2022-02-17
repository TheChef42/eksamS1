#include <stdio.h>

void scan(int array[], int length);
void flip(int array[], int length);


int main() {
    int length;
    scanf(" %d", &length);
    int array[length];
    scan(array, length);

    flip(array, length);
}
void scan(int array[], int length){
    for (int i = 0; i < length; i++) {
        printf("Input the %d number", i+1);
        scanf(" %d", &array[i]);
    }
}
void flip(int array[], int length){
    for (int i = 1; i <= length; i++) {
        printf(" %d", array[length-i]);
    }
}


