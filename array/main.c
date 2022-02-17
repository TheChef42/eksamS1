#include <stdio.h>

int main() {
    int array[20], x;

    scanf(" %d", &x);

    for (int i = 0; i < x; i++) {
        scanf(" %d", &array[i]);
    }
    for (int i = x-1; i >= 0; i--) {
        printf("Bagwerds: %d \n",array[i]);
    }
    return 0;
}
