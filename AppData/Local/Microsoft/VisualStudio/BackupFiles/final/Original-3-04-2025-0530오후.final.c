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
	int n, max,min;
	int a[1000000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	printf("%d %d",min,max);
	return 0;
}