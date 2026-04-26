#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    int cnt = 0;
    while (*src) {
        src++;
        cnt++;
    }
    src -= cnt;
    while (cnt >= 0) {
        dest[cnt] = src[cnt];
        cnt--;
    }
    
    return dest;
}

int main(){
    char src[] = "hello";
    char dest[10];
    char dest2[10];
    int idx = 0;
    
    strcpy(dest, src);
    ft_strcpy(dest2, src);
    
    while (dest[idx] != 0){
        if (dest[idx] != dest2[idx]){
            printf("오답입니다.\n");
            return 0;
        }
        idx++;
    }
    printf("정답입니다.\n");
    return 0;
}
