#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//기말 시험 12/12 목요일 오후 1시
//105호, 104호 (일단 5호로 오기)
//범위 : 전범위 (14장 파일처리 동영상 강의 포함)
//그래도 새로 배운 내용을 더 많이 출제하실 예정이니까 뒷부분을 집중적으로 보기
//시험 유형 : 중간고사와 동일


/*//===== EX =====
#define MAX 10
#define FRIENDS 3

int main () {
	char name[MAX];
	char list[FRIENDS][MAX];

	for (int i = 0; i < FRIENDS; i++) {
		printf("Enter your friend's name \n");
		gets(name);
		strcpy(list[i], name);  //strcpy(dest, src)
	}

	for (int i = 0; i < FRIENDS; i++)
		puts(list[i]);

	return 1;
}*/


/*//===== EX =====        
int main () {
	char conti[3][5] = { "Kim", "Lee", "Park" };
	char temp[5];

	char* ragged[3] = { "Kim", "Lee", "Park" };
	char* ptr;


	strcpy(temp, conti[0]);
	strcpy(conti[0], conti[2]);
	strcpy(conti[2], temp);

	for (int i = 0; i < 3; i++)
		puts(conti[i]);


	ptr = ragged[0];
	ragged[0] = ragged[2];
	ragged[2] = ptr;

	for (int i = 0; i < 3; i++)
		puts(ragged[i]);


	return 1;
}*/


/*//===== EX =====
#define MAX 10
int main () {
	char* wish_list[MAX];
	char temp[100];

	int i = 0, j;
	while (1) {
		printf("Enter your wishes. \n");
		gets(temp);

		if (strcmp(temp, "quit") == 0)  // 반복 종료 조건
			break;

		wish_list[i] = (char*) malloc(sizeof(char) * (strlen(temp) + 1));

		if (wish_list[i] == NULL)
			return 0;

		strcpy(wish_list[i], temp);
		i++;
	}

	for (j = 0; j < i; j++)
		puts(wish_list[j]);

	for (j = 0; j < i; j++) {
		free(wish_list[j]);
		wish_list[j] == NULL;
	}

	return 1;
}*/


/*//===== EX 13-1 =====
#include "car.h"

int main () {
	struct car mycar = { "pony", 1975, 300000 };
	printf("%s \n", mycar.name);
	printf("%d  \n", mycar.year);
	printf("%d  \n", mycar.mileage);

	struct car hiscar;
	// hiscar.name = "sonata" 처음부터 초기화할때 문자열 대입하는 거 아니면 이런식으로 하면 오류남. strcpy 이용
	strcpy(hiscar.name, "sonata");
	hiscar.year = 2000;
	hiscar.mileage = 200000;

	printf("%s \n", hiscar.name);
	printf("%d  \n", hiscar.year);
	printf("%d  \n", hiscar.mileage);


	return 1;
}*/


/*//===== EX =====
//struct car {
//	char name[9];
//	int year;
//	int mileage;
//};

typedef struct {
	char name[9];
	int year;
	int mileage;
} car;

int main () {
	//struct car mycar;  코드 쉐어링할 때는 이렇게 하는 게 구조체라는 걸 바로 알 수 있어서 편리함
	car hiscar = { "sonata", 1940, 340 };

	printf("%d \n", hiscar.year);

	return 1;
}*/


/*//===== EX =====
struct point {
	int x;
	int y;
};

int main () {
	struct point p = { 3, 4 };

	struct point* ptr = &p;
	
	printf("%d, %d \n", (*ptr).x, (*ptr).y);

	(*ptr).x = 30;
	(*ptr).y = 40;  // 이거랑 똑같은 코드가 ptr -> y = 40;

	printf("%d, %d \n", (*ptr).x, (*ptr).y);
	printf("%d, %d \n", ptr -> x, ptr -> y);

	return 1;
}*/


/*//===== EX 13-2 =====
struct point {
	int x;
	int y;
};

struct rectangle {
	struct point tl;
	struct point br;
};

int main () {
	struct rectangle* p;
	int x_diff, y_diff;

	p = (struct point*) malloc(sizeof(struct rectangle));

	if (p == NULL)
		return 0;

	(p->tl).x = 2;
	(p->tl).y = 10;
	(p->br).x = 5;
	(p->br).y = 3;

	x_diff = abs((p->tl).x - (p->br).x);
	y_diff = abs((p->tl).y - (p->br).y);

	printf("%d, %d \n", x_diff, y_diff);

	return 1;
}*/


/*//===== EX =====
struct employee {
	char* name;
	int resident_no;
};

int main () {
	struct employee seller, * p;

	p = &seller;
	p->name = "Yeseul Ko";

	puts(p->name);

	p-> name = (char*) malloc(sizeof(char) * 40);

	if (p == NULL)
		return 0;

	strcpy(p->name, "Min Kim");
	puts(p->name);
	free(p->name);

	return 1;
}*/


/*//===== EX =====
struct point {
	int x;
	int y;
};

struct point increment(struct point s) {
	s.x += 1;
	s.y += 1;
	return s;
}

int main () {
	struct point a = { 1,1 }, b, c;

	b = a;
	printf("%d %d \n", b.x, b.y);

	c = increment(a);
	printf("%d %d \n", c.x, c.y);

	return 1;
}*/


//===== EX 13-10 =====
struct employee {
	int entry;
	char name[20];
	char phone[20];
};

int main () {
	struct employee arr[3] = { {1,"Kim", "010-1234-4567"},{2, "Lee", "010-3193-4286"},{3, "Park", "010-9999-9999"}};

	for (int i = 0; i < 3; i++)
		printf("%s \n", arr[i].phone);

	return 1;
}