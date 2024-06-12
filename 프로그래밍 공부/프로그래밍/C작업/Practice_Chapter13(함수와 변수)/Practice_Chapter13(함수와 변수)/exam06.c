//함수와 변수(실습-6)
//동적변수와 정적변수의 대한 실습
//동적변수(지역변수, auto변수, 자동변수) : 지역변수를 동적변수라고 하는 이유는 지역변수는 선언한 위치에서 함수가 호출되면 데이터 타입의
//바이트만큼 메모리(스택)에 할당을 받고 함수 수행을 하고 함수가 종료가 되면 자동으로 소멸되는 이유로 동적변수(auto변수, 자동변수)라고 하는 것이다.
//동적변수를 선언할려면 auto키워드를 붙이면 된다.지금까지 지역변수를 사용하면서 단 한 차례도 auto를 붙이지 않았다.
//그래도 자동으로 소멸이 이루어졌다. 그 이유는 바로 컴파일러가 지역변수로 선언하면 기본적으로 동적변수로 적용을 시켜주기 때문에 그랬다.

//#include <stdio.h>
////사용자 정의 함수 선언
//void func(int hap, int cnt);
//
//int main(void) {
//
//	auto int hap = 0;	//동적변수 선언 및 초기화
//	int cnt = 10;		//지역변수 선언 및 초기화
//	printf("[main()함수 영역]\n");
//
//	func(hap, cnt);
//
//	printf("[main()함수 영역]\n");
//	printf("auto int hap의 값 : %d\n", hap);
//	printf("int cnt의 값 : %d\n\n", cnt);
//
//	return 0;
//}
//
//void func(int hap, int cnt)
//{
//	//매개변수로 넘어온 두 개의 지역변수는 함수 종료와 함께 소멸된다는 것을 알 수가 있다.
//	printf("[func()함수 영역]\n");
//	printf("auto int hap의 값 : %d\n", hap);
//	printf("int cnt의 값 : %d\n", cnt);
//	hap++;
//	cnt++;
//	return;
//}