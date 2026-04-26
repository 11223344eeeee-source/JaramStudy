#include <stdio.h>


// ----- EX 3-1 -----
/*int main()
{
	int myAge, yourAge; // 선언만 하고 초기화해서 둘 다 쓰레기값을 가지고 있음

	printf("%d \n", myAge); // 지역변수를 초기화해주지 않아서 에러가 뜸(쓰레기 값). 지역변수는(함수 안에 변수를 만들면)
	                        // 항상 초기화 한 후 사용해야 함

	return 1;
} */

/*int main()
{
	int myAge, yourAge; // 변수 선언
	int herAge = 20; // 변수 선언 + 값 대입 ==> 초기화
	
	myAge = herAge + 1; // -> myAge = 21; -> 21; 내부적으로는 이렇게 됨
	printf("My age is %d \n", myAge);
	
	yourAge = 30;
	myAge = yourAge + 1;
	printf("My age is %d \n", myAge);

	printf("%d \n", myAge = 300);

	return 1;

} */


// ----- EX 3-2 -----
/*int main()
{
	int salary, bonus, total;

	salary = 400;
	bonus = 20;

	salary + bonus; // 결과는 나오는데 우리가 사용하지 않음

	total = salary + bonus; // 대입하고 최종적으로 이 자리에 420이 떨궈져 있음
							// 대입 연산자의 우선순위가 가장 낮음
	printf("%d \n", total);

	bonus = salary = 600; // 같은 우선순위 안에서는 결합 방향을 따짐. 대입 연산자의 결합 방향은 오른쪽 -> 오른쪽 연산자 먼저
	printf("%d, %d \n", bonus, salary);
	
	return 1;
} */


// ----- EX 3-4 -----
/*int main()
{
	int a = 10, b = 3;
	double p = 10.0, q = 3.0;

	printf("10 + 3 = %d \n", a + b);
	printf("10 - 3 = %d \n", a - b);
	printf("10 * 3 = %d \n", a * b);
	printf("10 / 3 = %d \n", a / b); // 정수끼리 나누면 결과도 정수
	printf("10 %% 3 = %d \n", a % b); // 모듈 연산. %%는 두개를 써야지 문자열에 그대로 출력됨

	//printf("10.0 / 3 = %f \n", 10.0 / 3); // double(실수) / 4바이트 정수 -> double 타입으로 확장 ==> 3.33333...
										  // 정수 / 정수 -> 정수 타입 그대로 ==> 3

	printf("10.0 + 3.0 = %f \n", p + q);
	printf("10.0 - 3.0 = %f \n", p - q);
	printf("10.0 * 3.0 = %f \n", p * q);
	printf("10.0 / 3.0 = %f \n", p / q);
	// 실수에 대해서는 나머지 연산 하지 않음


	return 1;
} */


// ----- EX 3-5 -----
/*int main()
{
	short a = 32768; // 32768 ==> 0x 00 00 80 00

	short b = a / 2; // b ==> 0x C0 00


	float c = 1E45; // 숫자 사이에 E가 들어와있으므로 컴파일러는 실수로 해석
	float d = c / 2.0; // 2.0은 double로 컴파일러가 해석. 왜냐하면 실수는 기본적으로는 double로 해석
					   // 총 형변환이 두 번 일어남. c의 확장과 연산 & d때문에 float로 축소

	printf("%d, %d, %f, %f \n", a, b, c, d); // -32768, -16384, inf, inf로 프린트
	return 1;
} */


// ----- EX 3-6 -----
/*int main()
{
	int a, b;

	a = 8;

	// a = a + 2;
	a += 2;
	printf("%d \n", a);

	b = 2;
	a /= b;
	printf("%d \n", a);


	return 1;
} */


// ----- EX 3-7 -----
/*int main()
{
	int a, b;
	a = 0;
	a++;
	//++a; // 전위형이든 후위형이든 다른 연산자와 함께 쓰이지 않으면 별 다른 차이점이 없다!
	printf("%d \n", a);

	b = a++; // 후위형이라 한 번 사용되고 나서 증가시킬 것임! 1. = 대입 연산자 먼저 실행 -> 2. 사용됐으므로 a가 1증가
	printf("a = %d, b = %d \n", a, b); // a = 2, b = 1로 프린트


	a = 0;
	++a;
	printf("%d \n", a);

	b = ++a; // 전위형이라 대입 연산자 사용되기 전에 a가 먼저 1 증가. 그러고나서 b에 2가 된 a 대입
	printf("a = %d, b = %d \n", a, b); // a = 2, b = 2로 프린트

	a = b = 0;
	printf("value : %d, b = %d \n", (1 + a++) + 2, ++b);

	printf("%d \n", a);


	return 1;
} */



// ----- EX 3-8 -----
/*int main()
{
	printf("%d \n", 3 > 1); // 1로 출력
	printf("%d \n", 3 < 1); // 0으로 출력

	int a = 10, b = 5;
	double p = 10.0, q = 5.0;
	double r = 10.00000000000000001;
	
	printf("%d \n", a > b);
	printf("%d \n", a >= b);
	printf("%d \n", a == b);
	printf("%d \n", a != b);

	printf("%d \n", p > q);
	printf("%d \n", p == r); // 유효 숫자때문에 같다고 출력. 그래서 같다 다르다는 정수끼리 비교할 때 사용하는 게 안전

	
	return 1;
} */



// ----- EX 3-9 -----
/*int main()
{	
	int a = 4, b = 3, c = 2, d = 1;

	printf("%d \n", (a > b) && (c > d));
	printf("%d \n", (a < b) && (d = 300));
	printf("d = %d \n", d); // short circuit(단락회로)라서 d = 300 실행하지 않았음

	printf("%d \n", (a < b) || (c > d));
	printf("%d \n", (a < b) || (c = 300));
	printf("c = %d \n", c); // 앞이 false이므로 뒤의 c = 300 이 실행됨

	printf("%d \n", (a > b) || (c = 500)); // 앞이 true이므로 뒤의 c = 500 실행되지 않음
	printf("c = %d \n", c); // short circuit

	printf("%d \n", !(a));
	
	
	return 1;
} */




// ----- EX 3-10 -----
/*int main()
{
	int a = 10;
	printf("%d , %d \n", a, ~a + 1);

	a = 105; // 105 ==> 0x 00 00 00 69 (16진수로 쓰는 이유는 쉽게 2진수로 바꿀 수 있기 때문에) ==> 0110 1001
	int b = 85; // 85 ==> 0x 00 00 00 55 ==> 0101 0101
	printf("0x %x \n", a & b); // %x는 16진수로 출력하는 양식, b에서 bit가 1인 자리는 그대로 유지, 0은 bit clear(0으로 바꿈).
							   // 16진수 41로 출력
	printf("0x %x \n", a | b); // b에서 bit가 1인 자리는 bit set(1으로 바꿈), 0은 그대로 유지.
							   // 16진수 7D로 출력
	printf("0x %x \n", a ^ b); // b에서 bit가 1인 자리는 bit 반전, 0은 그대로 유지.
					           // 16진수 3C로 출력
	printf("0x %x \n", ~a); // a를 반전
							// 16진수 ffffff96으로 출력(앞에 있던 0들이 1로 같이 반전돼서 f로 보임)


	return 1;
} */



// ----- EX 3-11 ----- 
// 2의 거듭제곱에 해당하는 숫자로 나눴을 때의 나머지를 찾는 것을 %말고 비트 연산자로도 할 수 있다!
// 내가 필요한 자리수까지 가져오고 나머지 윗자리는 & 사용해서 bit clear해주면 됨
// 2의 제곱수로 나눌 때만 가능!
/*int main()
{
	int a = 105;
	int mask = 0x1f;

	printf("%d \n", a % 32);
	printf("%d \n", a & mask);

	return 1;
} */


// ----- EX 3-12  -----
// <<k 하면 비트가 왼쪽으로 k칸 이동. 2의 k제곱 만큼 곱해준 것과 같다.
// 밖으로 나간 비트는 버림. 자릿수 올라가서 빈 자리는 0으로 채운다.
// >>k 하면 비트가 오른쪽으로 k칸 이동. 2의 k제곱 으로 나눈 것과 같다.
// 밖으로 나간 비트는 버림. 오른쪽으로 이동할 때 빈자리를 채우는 것은 signed와 unsigned 인지에 따라 다르다
// signed면 원래 데이터의 제일 앞자리와 같은 비트로(첫번째 비트로/최상위 비트로) 빈 자리를 채운다.
int main()
{
	unsigned int a = 25;
	unsigned int left, right;

	left = a << 2; // 25 * 2^2 == 25 * 4 == 100
	printf("%d \n", left);

	right = a >> 2; // 25를 4로 나눈 몫
	printf("%d \n", right); // unsigned라 빈 비트를 무조건 0으로 채웠음




	return 1;
}