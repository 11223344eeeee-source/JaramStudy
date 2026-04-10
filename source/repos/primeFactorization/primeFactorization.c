#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i = 2;
    printf("%d = ",n);
    while (n >= i * i) {
        if (n % i == 0) {
            n = n / i;
            printf("* %d", i);
        }
        else
            i++;

    }
    if (n > 1)
        printf("* %d", n);
    return 0;
}