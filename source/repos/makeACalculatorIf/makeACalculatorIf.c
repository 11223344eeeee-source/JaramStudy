#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, y;
    char c;
    scanf("%d %c %d", &x, &c, &y);
    if (c == '+')
        printf("%d\n", x + y);
    else if (c == '-')
        printf("%d\n", x - y);
    else if (c == '*')
        printf("%d\n", x * y);
    else if (c == '/')
        printf("%d\n", x / y);
    else
        printf("올바르지 않은 연산자입니다\n");
    return 0;
}