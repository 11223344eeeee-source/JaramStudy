#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int** p = (int**)malloc(sizeof(int*) * r);
    for (int i = 0; i < r; i++)
        p[i] = (int*)malloc(sizeof(int) * c);
    for (int i = 0; i < r; i++)
        free(p[i]);
    free(p);
    return 0;
}
