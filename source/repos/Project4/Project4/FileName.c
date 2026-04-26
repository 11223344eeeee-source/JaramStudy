#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int ch;
	for (;;) {
		ch = getchar();
		if (ch == EOF)
			break;
		else
			putchar(ch);
	}
	return 0;
}