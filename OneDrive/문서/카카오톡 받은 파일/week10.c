#include <stdio.h>

//===== EX =====
/*int main() {
	int x = 50;

	int *ptr;
	ptr = &x;
	*ptr = 5000;

	printf("%d \n", x);
	printf("%p \n", ptr);  // 메모리 주소를 출력하겠다고 %p 사용
	printf("%p \n", &x);
	printf("%p \n", &ptr);
	printf("%d \n", *ptr);

	printf("%d \n", sizeof(ptr));  // 주소가 8byte -> 64bit 프로그래밍

	return 1;
} */


/*//===== EX =====
int main() {
	double dbl = 3.4;

	double *ptr;
	ptr = &dbl;

	dbl = *ptr + 10.0;

	printf("%f \n", dbl);
	printf("%f \n", *ptr);
	printf("%p \n", ptr);
	printf("%p \n", &ptr);

	//ptr = 20000;  //포인터에는 상수값 넣지 않기. 운영체제가 실행하는 코드가 있는 메모리면 큰일이 나요

	return 1;
} */


/*//===== EX =====
void times(int* ptra, int* ptrb) {  // 그 주소로 가면 정수가 있다는 뜻
									// call by pointer

	*ptra = *ptra * 10;
	*ptrb = *ptrb * 20;

} 

int main() {
	int a = 10, b = 20;

	times(&a, &b);

	printf("%d %d \n", a, b);

	return 1;
} */


/*//===== EX =====
void min_max(int a, int b, int *min, int *max) {  // 포인터 상수를 저장해야 하므로 포인터 변수를 매개변수로 사용. 
												  // int가 저장되어 있으므로 int형 포인터 변수로 쓰기
	if (a > b) {
		*max = a;
		*min = b;
	}
	else {
		*max = b;
		*min = a;
	}
}

int main() {
	int a = 10, b = 20;
	int min, max;

	min_max(a, b, &min, &max);  // a, b를 굳이 수정할 필요가 없으므로 그냥 값만 넘겨줌. 포인터가 아니라!

	printf("min = %d, max =  %d \n", min, max);

	return 1;
} */


/*//===== EX ===== 
// main에서 매개변수를 이용하지 않고 다른 함수에서 (포인터를 이용한) swap하기
void swap(int *ptra, int *ptrb) {  // 정수형 포인터로 받아야 함
	int temp;

	// *ptra - main 함수 안에 있는 변수 a와 같다
	// *ptrb - main 함수 안에 있는 변수 b와 같다
	temp = *ptra;
	*ptra = *ptrb;
	*ptrb = temp;
}

int main() {
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a = %d, b = %d \n", a, b);

	return 1;
} */


/*//===== EX =====
int* add(int* pa, int* pb) {
	int ans;
	ans = *pa + *pb;

	return &ans;
}

int main() {
	int a = 10, b = 20;

	int* ptr = add(&a, &b);

	return 1;
} */
// 이거 사기다... add가 끝나면 ans가 속해있는 SF이 사라지므로 주소가 남아있지 않음
// 부도난 수표나 마찬가지


/*//===== EX 10-5 =====
int* large(int* pa, int* pb) {
	if (*pa > *pb)
		return pa;
	else
		return pb;
}

int main() {
	int a = 10, b = 20;

	int* ptr = large(&a, &b);  // int* ptr == &b;
	printf("%d \n", *ptr);

	return 1;
} */
// large는 실행하고 사라져도 &b는 남아있으므로 참조할 수 있음. 출력하면 20이 나옴


/*//===== EX =====
// 배열 속 원소의 단위와 맞춰서 매개변수를 써주면 됨
int max(int* ptr, int length) {
	int m = *(ptr + 1);  // *(ptr + 1) == ptr[1]

	for (int i = 0; i < length; i++) {
		if (m < *(ptr + i))
			m = ptr[i];
	}

	return m;
}

void printArray(int* ptr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d, ", *(ptr + i));  // == printf("%d, ", ptr[i]);
	}
	printf("\n");
}

int main() {
	int arr[4] = { 36, 8, 90, 71 };
	int m; int length = sizeof(arr) / sizeof(int);

	printArray(arr, length);

	printf("%d \n", sizeof(arr));
	printf("%d \n", sizeof(arr) / sizeof(int));  // length를 구하는 방법

	m = max(arr, length);
	printf("%d \n", m);

	return 1;
} */


/*//===== EX =====
int main() {

	return 1;
}*/