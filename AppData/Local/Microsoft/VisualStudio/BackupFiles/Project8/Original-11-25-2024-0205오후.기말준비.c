#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int hair;
	printf("교수님 대머리\n");
	printf("교수님은 머리카락이 있나요?(0/1)");
	scanf("%d",&hair);
	if (hair)
		printf("저런... 다 뽑아버려야겠군요!\n");
	else
		printf("머리카락도 없는 주제에 뭘 가르친다는 거죠???????\n");

	printf("아개피곤하다,,,\n");
	return 0;
}
