#include <stdio.h>

int main() {
    int donuts;
    printf(" How may donuts? \n");
    scanf(" %d", &donuts);

    if(donuts <= 0)
        printf("You are on healthy individual");

    else if (3 > donuts > 0){
        printf("That is managable\n");
    }
    return 0;
}