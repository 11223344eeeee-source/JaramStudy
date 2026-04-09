#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, y;
    char c;
    scanf("%d %c %d", &x, &c, &y);
    switch (c) {
    case '+':
        printf("%d\n", x + y);
        break;
    case '-':
        printf("%d\n", x - y);
        break;
    case '*':
        printf("%d\n", x * y);
        break;
    case '/':
        y == 0 ? printf("0으로 나눌 수 없습니다.") : printf("%d\n", x / y);
        break;
    default:
        printf("올바르지 않은 연산자입니다\n");
    }
    return 0;
}