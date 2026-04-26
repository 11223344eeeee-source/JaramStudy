#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define SOS(a,b) a*b

void try(int a, int b) {
	printf("%p,%p\n", &a, &b);
	printf("%d,%d\n", a, b);
	a++; b++;
	printf("%d,%d\n", a, b);
}

int main() {
	int max = 0;
	int a[9];
	int n;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
		if (a[i] > max)
			max = a[i];
	}
	for (int i = 0; i < 9; i++)
		if (max == a[i])
			n = i + 1;
	printf("%d\n", max);
	printf("%d\n", n);
	
	return 0;
}