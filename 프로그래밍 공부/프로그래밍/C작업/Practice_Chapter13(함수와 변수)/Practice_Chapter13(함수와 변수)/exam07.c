//함수와 변수(실습-7)
//동적변수(automatic variable)와 정적변수(static variable)의 대한 실습
//정적변수 : 전역변수와 마찬가지로 프로그램의 실행과 동시에 메모리(데이터 영역)에 데이터 타입의 크기만큼
//할당을 받고 초기화를 하지 않아도 자동으로 데이터 타입의 맞게 자동 초기화가 이루어진다.
//생명주기가 프로그램의 실행과 종료에 의해서 같이 할당되고 소멸이 이루어진다. 정적변수가 동적변수와 차이점이라면
//정적변수가 선언된 함수 또는 코드 블록 구간을 벗어나도 정적변수의 값은 유지가 된다.
//정적변수를 선언하기 위해서는 변수명 앞에 static키워드를 붙여주면 된다.

//1. 정적변수의 자동 초기화 실습
//#include <stdio.h>
////static double num1;	//전역 정적변수 선언(초기화 하지 않음)
//static int num1;
//
//int main(void) {
//
//	//static double num2;	//지역 정적변수 선언(초기화 하지 않음)
//	static int num2;
//
//	printf("전역 정적(static)변수 num1의 초기값 : %d\n", num1);
//	printf("지역 정적(static)변수 num2의 초기값 : %d\n", num2);
//
//	//printf("전역 정적(static)변수 num1의 초기값 : %lf\n", num1);
//	//printf("지역 정적(static)변수 num2의 초기값 : %lf\n", num2);
//
//
//	return 0;
//}

//2. 정적(static)변수를 선언하고 지역변수의 증감 값의 차이를 보는 실습
//#include <stdio.h>
//void start();	//사용자 정의 함수 선언
//
//int main(void) {
//
//	printf("start()함수 3회 호출 결과\n");
//	start();
//	start();
//	start();
//
//	return 0;
//}
//
//void start()
//{
//	//정적변수는 함수가 종료되더라도, 값을 유지할 때 사용한다.
//	//하지만 동적변수는 함수가 종료되면 할당된 공간이 소멸되기 때문에 아래와 같은 결과가 출력이 된다.
//	static int static_count = 0;	//지역 정적변수의 선언과 초기화
//	auto auto_count = 0;			//지역 동적변수의 선언과 초기화
//
//	printf("지역 정적변수 = %d\t 지역 동적변수 = %d\n", static_count, auto_count);
//	static_count++;
//	auto_count++;
//	return;
//}

//3. 정적변수를 활용하여 입출금 내역 출력하는 예제
//#include <stdio.h>
//void credit(int cash);
//
//int main(void) {
//
//	int cnt = 0, cash = 0;
//
//	for (cnt = 1; cnt <= 4; cnt++)
//	{
//		printf("<%d회 실행> \n", cnt);
//		printf("현금 : ");
//		scanf_s("%d", &cash);
//
//		printf("입금\t\t출금\t\t잔액\n");
//		credit(cash);		//함수 호출
//	}
//	return 0;
//}
//
//void credit(int cash)
//{
//	//정적변수 선언과 초기화(잔액은 유지가 되어야 하기 때문에 정적변수로 선언하였다.)
//	static int balance = 0;		
//
//	if (cash > 0)
//	{
//		printf("%d\t\t\t\t", cash);		//입금
//	}
//	else
//	{
//		printf("\t\t%d\t\t", -cash);	//출금
//	}
//	//잔액 계산
//	balance += cash;
//	printf("%d\n", balance);
//
//	return;
//}