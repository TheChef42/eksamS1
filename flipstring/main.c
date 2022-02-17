#include <stdio.h>

int main() {
    char name[20];
    char fliped[20];
    int legnth;

    scanf(" %s", name);

    for (int i = 0; name[i] != '\0' ; i++) {
        legnth = i;
    }
    int j = legnth;
    printf(" %d", legnth);
    for (int i = 0; i <= legnth; i++) {
        fliped[i] = name[j];
        printf(" %c", fliped[i]);
        j--;
    }
    printf(" %s", fliped);
    return 0;
}
