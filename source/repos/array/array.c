#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int arr[9][9];      
    int m = -1;    
    int a, b;      

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            scanf("%d", &arr[i][j]); 
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
        
            if (m < arr[i][j]) {
                m = arr[i][j];     
                a = i + 1;                 
                b = j + 1;
            }
        }
    }                                       
        printf("%d\n%d %d", m, a, b);    

        return 0;
}