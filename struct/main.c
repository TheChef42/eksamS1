#include <stdio.h>

struct plane {
    char type[20];
    int leangth;
    int passangers;
    char colour[20];
}typedef plane;

int main() {
    int scan;
    plane planes[20];

    printf("How many planes do you want to save?\n");
    scanf(" %d", &scan);

    for (int i = 0; i < scan; i++) {
        printf("What is the type of plane\n");
        scanf(" %s", planes[i].type);
        printf("What is the leanght of the plane\n");
        scanf(" %d", &planes[i].leangth);
        printf("How many passangers can a %s carry\n",planes[i].type);
        scanf(" %d", &planes[i].passangers);
        printf("What colour is the plane?\n");
        scanf(" %s", planes[i].colour);
    }
    for (int i = 0; i < scan; i++) {
        printf("Plane number %d has the folowwing info: \n", i+1);
        printf("Type: %s",planes[i].type);
        printf("Length: %d",planes[i].leangth);
        printf("Passangers: %d",planes[i].passangers);
        printf("Colour: %s",planes[i].colour);
    }
    return 0;
}
