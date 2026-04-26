#define _CRT_SECURE_NO_WARNINGS //이거 맨 앞에 쓰기. 뒤에 쓰면 오류가 나서 scanf사용이 안됨ㅠㅠ
#include <stdio.h>
#define PI 3.14
#define HEL "Hello"

//오늘 EX 2-4부터 시작

//=============== EX 2-4 ====================
//int main() {
//   float area;
//   double total;
//   area = 0.1234567; //8bit 실수를 4bit실수로 저장할 때 4bit 실수로 자동으로 형을 변환한다 = 자동 형 변환 = 암시적 형 변환
//   //축소형 형변환
//
//   printf("area is %f \n", area); //0.123457
//
//   total = 0.1234567;
//
//   printf("total is %lf \n", total); //0.123457 /%f = 4bit, /%lf = 8bit
//
//   total = 0.1234567f; //f = 4bit로 변환해서 저장하라는 뜻 //4bit를 8bit로 자동으로 형을 변환한다
//   //확장형 형변환
//   printf("total is %lf \n", total);
//
//
//   return 0;
//}


//=============== EX 2 - 5 ====================
//int main() {
//   short width, num1, num2, sum;
//   int height, length;
//   float area;
//   double total;
//
//   width = (short)10;
//   area = 100.0F;
//   height = 5;
//
//   total = area + width * height;
//
//   printf("total is %lf \n", total);
//
//   length = 3.14; 
//   printf("lenght is %d \n", length); //3
//
//   length = (int)3.14;
//   printf("lenght is %d \n", length); //3
//
//   num1 = (short)10; num2 = (short)20;
//   printf("sizeof( num1 + num2 ) = %d \n", sizeof(num1 + num2)); //4
//
//   sum = num1 + num2;
//   printf("sizeof( sum ) = %d \n", sizeof(sum)); //2
//
//   return 0;
//}


//=============== EX 2-6 ====================
//int main() {
//
//   char ch; //1바이트
//   ch = 'a'; //'a' == 97
//
//   printf("ch is %d \n", ch); //97
//   printf("ch is %c \n", ch); //a
//
//   ch = ch + 1;
//   printf("ch is %d \n", ch); //98
//   printf("ch is %c \n", ch); //b
//
//   ch = ch - 32;
//   printf("ch is %d \n", ch); //66
//   printf("ch is %c \n", ch); //B
//
//   return 0;
//}






// ======= EX 2-7 =======
/*int main()
{
	int num; // int는 자동으로 signed로 처리
	char ch; 
	unsigned char uch; // unsigned의 가장 큰 특징은 - 부호를 쓸 수 없다는 것

	num = 128;
	ch = num;

	printf("num = %d, ch = %d \n", num, ch);
	// %d 는 짝이되는 변수, 상수를 4byte int 타입으로 출력
	// ch는 1byte이기에 4byte로 늘려야 함. 늘릴 때 제일 첫번째 비트를 가지고 나머지 바이트를 채움. 그래서 11111... 하고 채워짐
	// char은 signed이므로 ch가 1로 시작하기에 음수로 표현됨.

	uch = num;
	printf("num = %d, ch = %d, uch = %d \n", num, ch, uch);
	// 4바이트로 출력을 해야 하기에 아까와 똑같은 과정을 거침 그러나 나머지 바이트를 0으로 채우므로 맨 앞 비트가 0이어서 양수
	// signed와 unsigned에 따라 출력되는 방식이 다름

} */

// ======= EX 2-8 =======
/*int main()
{
	double area;

	area = PI * 3.0 * 3.0;
	
	printf("area = %lf \n", area);

	printf(HEL); // 이처럼 문자열도 매크로 상수 가능. 
	// printf("Hello"); 와 동일한 표현
	// #define은 정수, 상수, 실수 다 가능
} */

/*main 함수
int main() <- Windows에서 실행. 우리가 어쩔 수 있는 게 아님.
{ <- Stack 프레임에 main() 생성하는 역할
	double area; <- SF에 area 공간 생성
	area = 3.14; <- area 공간에 3.14 대입
	
	printf(); <- main위에 printf SF 생김. printf와 main은 서로 완전히 독립적. 서로 있는지 없는지 사라지는지 뭔지 모름.
	값 같은 경우에는 copy해서 넘겨줌

} <- SF 삭제/제거
메인 메모리에 아무것도 없으니 프로그램 끝
이해를 돕기위한 설명이지 실제로 이렇게 중괄호가 동작하는 것은 아님!!
*/

// ======= EX 2-9 =======
/*int main()
{
	// ctrl + F5 ==> execution without debugging
	// F5 ==> starting debugging
	// shift + F5 ==> ending debugging
	// F9 ==> break point setting / unsetting

	//after F5, debug -> windows -> memory -> 1, 2, 3, 4 window selection
	//in window for adress, type &variable and enter

	// F10 ==> function unit execution
	// F11 ==> line unit execution

	float f = 2.5f; // 2.5f ==> 10.1(2) ==> 0x 40 20 00 00
					// ==> memory(little endial) = 00 00 20 40

	printf("address of f is %p \n", &f); // 메모리 값을 보는 것을 메모리 덤핑. 이걸 보려면 디버깅을 해야함
	return 0;
	// 주소연산자 & -> 주소값을 리턴해줌
} */

/*int main()
{
	int num1 = 10;

	{
		int num2 = 20;

		printf("num1 = %d, num2 = %d \n", num1, num2);
	}

		// printf("num1 = %d, num2 = %d \n", num1, num2); // 컴파일 에러가 남! 실행되는 과정에서 num2가 사라짐
		printf("num1 = %d, \n", num1);
	return 0;
} */
 

// ======= EX 2-11 =======



// ======= EX 2-12 =======
/*int main()
{
	int i = 365;
	
	printf("i = %d \n", i);
	printf("i = |%8d| \n", i);
	printf("i = |%8.4d| \n", i); //정수일 때 ㅇㅇ.ㅁㅁ의 ㅁㅁ은 유효 숫자의 개수
	printf("i = |%-8.4d| \n", i); //왼쪽 정렬
	printf("i = |%+-8.4d| \n", i); //양수여도 +를 표시해라

	int x = printf("Hello \n");

	printf("x is %d \n", x);
	//printf()는 자기가 가진 문자열의 길이를 리턴함


	float f; double d;
	f = 0.123456789123456789f;
	d = 0.123456789123456789;

	printf("float f = %f \n", f); // %f와 %lf는 아무런 표시없으면 소수점 6자리까지 반올림해서 표현
	printf("double d = %lf \n", d);
	
	printf("float f .20f = |%.20f| \n", f);
	printf("double d .20lf = |%.20f| \n", d); // .20은 소수점 밑에 20자리까지 표현하라는 뜻
	// 실제로 출력된 결과를 보면 어느정도의 유효숫자를 보장되는 지를 알 수 있음
	// 그래서 실수를 쓸 때는 웬만하면 double을 쓰자.
	// 물론 임베디드 때는 고민해야 하는데, 데스크탑 레벨에서는 int, double만 사용해도 지장 없음

	printf("float f 15.4f = |%15.4f| \n", f);
	printf("double d .15.4lf = |%15.4f| \n", d); //15.4는 전체 15자리에서 소수점 4자리까지 표현하라는 뜻

	printf("double d .15.4lf = |%-15.4f| \n", d); // -는 왼쪽 정렬하라는 뜻. -가 없으면 오른쪽 정렬
	printf("double d .15.4lf = |%+-15.4f| \n", d); // + 양수일 때도 + 표시를 해라

	//+-ㅇㅇ.ㅁㅁlf
	//ㅇㅇ: 전체 표시되는 자리수, ㅁㅁ: 소수점 몇째자리까지 표현할지

} */

/*int main()
{
	int num, num2;

	scanf("%d", &num); //%d는 숫자와 문자만 care 아닌 건 다 버림. 
	                   //enter는 buffer에서 입력이 끝났어! 라는 의미.scanf가 값을 읽으러 감
					   //buffer는 scanf가 값을 가져가면 그 값이 사라짐
	

	printf("num is %d \n", num); //그냥 컴파일 하면 옆에 있는 변수까지 넘어갈 수 있기에 위험해서 안쓴다고 에러남
								 //오류 중에 _CRT_SECURE_NO_WARNINGS 따와서 디파인 하면 그냥 scanf() 사용 가능

	scanf("%d", &num2); // ___123___456 enter하면 buffer가 비어있지 않으니 다시 가져옴
						// ___123___ enter하면 buffer에 ___enter만 남아있으니 실제 문자를 가져 올게 없어서 문자를 기다림
						//scanf()는 buffer에 필요한 게 올때까지 기다린다. 이미 있으면 그거 그냥 가져온다.
							
	printf("num2 is %d \n", num2);

	//%d 대신 %lf도 적용 가능. %lf는 다른 걸 care
	//white space: enter, space, tab, esc
	//%d, %f, %lf는 white space 를 알아서 지움
	


} */

int main()
{
	char ch1, ch2;
	scanf("%c", &ch1);
	printf("ch1 is %c \n", ch1);

	scanf("%c", &ch2);
	printf("ch2 is %c \n", ch2); //ch2에는 enter문자가 출력됨. 그래서 보이기에는 아무것도 없어보이는데 실제로는 enter가 있음
	
	//white space 제거하라는 옵션은 " %c"로 사용하면 됨. %c 앞에 space 한 번 써주면 되는 거임! 오타가 아니다.
	//buffer를 비우는 코드도 있는데 그건 반복문에서 설명해주실 예정

}

