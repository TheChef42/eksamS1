#include <stdio.h>
//TODO: implement and figure out if palindrom

int factor ( int a);

int main() {
    int a;
    int factorial = 1;

    scanf(" %d", &a);

    printf(" %d", factor(a));

    return 0;
}
int factor(int a){
    if(a <= 1){
        return 1;
    }
    return a * factor(a - 1);
}
