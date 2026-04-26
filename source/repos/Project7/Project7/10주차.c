#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//----------ex----------
//int main() {
//	const int x = 30;
//	//x=50 에러
//	int y = 50;
//	const int* p;
//	p = &y;
//	int z = *p; //참조해서 읽는 것은 가능
//	//*p = 5000; //쓰는 것은 불가능
//	int* const ptr = &y;
//	z = *ptr;
//	*ptr = 5000;
//	//ptr = &z; //error
//	const int* const pptr = &y;
//	return 0;
//}
//----------ex----------
//int main() {
//	int arr[] = {5,10,15,20,25};
//	int* p = arr;
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr);
//	//printf("%p\n", &arr+1);
//	//printf("%p\n", arr+1);
//	printf("%d\n", arr[0]); // arr[0]==*arr
//	printf("%d\n", *(arr + 0));
//	printf("%d\n", *arr);
//	p = arr;
//	for (int i = 0; i < 5; i++)
//		//printf("%d\n", p[i]);
//		printf("%d\n", *(p + i));
//	p = arr;
//	for (int i = 0; i < 5; i++)
//		printf("%d\n", (*p)++);
//	
//	return 0;
//}
//----------ex----------
//#define MAX 5
//int main() {
//	int sum,*p, arr[MAX] = { 5,10,15,20,25 };
//	sum = 0;
//	for (p = arr; p < &arr[MAX]; p++)
//		sum += *p;
//	printf("%d\n", sum);
//	sum = 0; p = arr;
//	return 0;
//}
//----------ex----------
//#include<stdlib.h>
//#include<time.h>
//int main() {
//	srand(time(NULL));
//	for (int i = 0; i < 4; i++)
//		printf("%d ", rand()%45+1);
//	printf("\n");
//
//	return 0;
//}
//----------ex----------
//int main() {
//	int num = 10;
//	int y = 40;
//	int* ptr = &num;
//	int** dptr = &ptr;
//	printf("%d\n", num);
//	printf("%d\n", *ptr);
//	printf("%d\n", **dptr);
//
//	//ptr = &y;
//	*dptr = &y;
//	printf("%d\n", num);
//	printf("%d\n", *ptr);
//	printf("%d\n", **dptr);
//	return 0;
//}
//----------ex----------
//void swap(int**p,int**q) {
//	int* temp = *p;
//	*p = *q;
//	*q = temp;
//}
//int main() {
//	int first = 20;
//	int second = 30;
//	int* fp = &first;
//	int* sp = &second;
//
//	printf("%d %d\n", *fp, *sp);
//	swap(&fp, &sp);
//	printf("%d %d\n", *fp, *sp);
//	return 0;
//}
//----------ex----------
//int add(int x, int y) {
//	return(x + y);
//}
//int sub(int x, int y) {
//	return(x - y);
//}
//int main() {
//	int(* fptr)(int,int) = add;
//	printf("%d\n", add(2, 3));
//	printf("%d\n", fptr(2, 3));
//
//	fptr = sub;
//	printf("%d\n", fptr(2, 3));
//	return 0;
//}
//----------ex----------
//#include <stdlib.h>
//int main() {
//	int* ptr = (int*)malloc(sizeof(int));
//	if (ptr == NULL)
//		return 0;
//	*ptr = 30;
//	printf("%d\n", *ptr);
//	free(ptr);
//	return 0;
//}
//----------ex----------
//#include <stdlib.h>
//int* get_number() {
//	int* ptr = (int*)malloc(sizeof(int));
//	if (ptr == NULL)
//		return NULL;
//	else {
//		*ptr = 20;
//		return ptr;
//	}
//}
//int main() {
//	int* p = get_number();
//	printf("%d ", *p);
//	free(p);
//	return 0;
//}
//----------ex----------
//#include <stdlib.h>
//#define MAX 4
//int* square_array() {
//	int* p = (int*)malloc(MAX * sizeof(int));
//	if (p == NULL)
//		return NULL;
//	for (int i = 0; i < MAX; i++)
//		p[i] = i * i;
//	return p;
//
//}
//int main() {
//	int* arr = square_array();
//	for (int i = 0; i < MAX; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	free(arr);
//	arr = NULL;
//	return 0;
//}
//----------ex----------
//#include <stdlib.h>
//int main() {
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	printf("%d\n", arr[1][2]);
//	int(*ptr)[3] = arr;
//	printf("%d\n", ptr[1][2]);
//	//int* p = arr;
//
//	printf("%p\n", arr); 
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", *arr); //*arr==> 1차원 배열, 원소는 int
//	printf("%p\n", *arr + 1);
//
//	printf("%d\n", arr[1][2]);
//	return 0;
//}
#include <stdlib.h>
void initial(int(*p)[3]) {
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			p[i][j] = i + j;
}
void print_2d(int(*p)[3]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d ", p[i][j]);
		printf("\n");
	}
}
int main() {
	int(*arr)[3] = (int(*)[3])malloc(2 * 3 * sizeof(int));
	if (arr == NULL)
		return 0;
	initial(arr);
	print_2d(arr);
	return 0;
}