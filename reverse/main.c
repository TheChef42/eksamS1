#include <stdio.h>

int main() {
    int x, reverse = 0, rev, y;
    scanf(" %d", &x);
    y = x;
    while (x != 0){
        rev = x % 10;
        reverse = (reverse*10) + rev;
        x /= 10;
    }
    if(y == reverse) {
        printf("Palindrom!");
    } else {
        printf("Not");
    }
}
