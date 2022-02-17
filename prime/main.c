#include <stdio.h>

#include "functions.h"

int main(){
    int start, end;
    FILE *fp = fopen("prime.txt", "r");
    fscanf(fp," %d %d", &start, &end);
    prime(start,end);
}