#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//----------ex ----------
//int main() {
	//int x = 1;
	//switch (x)
	//{
	//case 1:
		//printf("one\n");
		//break;
	//case 2:
		//printf("two\n");
		//break;
	//default:
		//printf("int \n");
		//break;
		// return 0;
	//}
//----------ex ----------
//int main() {
	//int score = 93;
	//int grade = score / 10;
	//switch (grade) {
	//case 10:
		//printf("A\n");
		//break;
	//case 9:
		//printf("A\n");
		//break;
	//case 8:
		//printf("B\n");
		//break;
	//case 7:
		//printf("C\n");
		//break;
	//default:
		//printf("F\n");
		//break;
	//}
	//return 0;
//}
//----------ex ----------
//int main() {
	//int sum = 0;
	//int i=20;
	//for (int i = 1; i <= 10; i++) {
		//sum += i;
	//}
	//printf("sum is %d\n", sum);
	// printf("i is %d\n,i);
	//return 0;
//}
//----------ex ----------
//int main() {
	//int num = 10;
	//for (int i = 1; i <= num; i++) {
		//if (num % i == 0)
			//printf("%d\n", i);
	//}
	//return 0;
//}
//----------ex ----------
//int main() {
	//int i = 0;
	//for (i = 1; i < 4; i++) {
		//printf("%d\n", i);
		//break;
		//continue;
		//printf("%d\n", i + 1);
	//}
	//printf("End \n");
	//return 0;
//}
//----------ex ----------
//int main() {
	//int i;
	//int sum = 0;
	//for (i = 1; i < 11; i++) {
		//if (i % 2 == 1)
			//continue;
		//sum += i;

	//}
	//printf("%d\n", sum);
	//return 0;
//}
//---------ex ----------
//int main() {
	//int i = 1;
	//int sum = 0;

	//while (i <= 10) {
		//if (i % 2 == 0) {
			//sum += i;
		//}
		//i++;
	//}
	//printf("%d\n", sum);
	//return 0;
//}
//----------ex ----------
/*int main() {
	int i = 1;
	do {
		printf("%d\n", i);
		i++;
	} while (i < 4);
	return 0;
}*/
//----------ex ----------
/*int main() {
	int i = 1;
	while (1) {
		if (i > 10)
			break;
		printf("%d\n", i);
		i++;
	}
	return 0;
}*/
//----------ex ----------
/*int main() {
	int ch;
	ch = getchar();
	putchar(ch);
	printf("%d\n", sizeof(getchar()));
	putchar(ch);
	printf("%d\n", sizeof(getchar()));
	return 0;
}*/
//----------ex ----------
int main() {
	int ch=0;
	printf("enter a character: \n");
	scanf("%c", &ch);
	if (ch == 'y')
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}