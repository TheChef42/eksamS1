#include "functions.h"

int main() {
    int length;
    scanf(" %d", &length);
    int array[length];

    for (int i = 0; i < length; i++) {
        scanf(" %d", &array[i]);
    }
    print_reverse(array,length);
    return 0;
}


