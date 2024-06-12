//변수의 연결 실습-1
//변수의 연결(linkage) : 다른 함수 또는 다른 파일에서 main()함수가 있는 파일에 선언되어진 함수나 전역변수를 서로 연결하면서 사용하는 기능을 의미한다.
//외부연결 : 지역변수는 연결을 못한다. 외부연결을 하기 위해서는 전역변수를 선언하고 다른 파일에서 그 전역변수를 사용하기 위하여
//extern키워드를 사용해서 연결하여 사용할 수가 있다.
//내부연결 : 하나의 소스파일 안에서만 변수를 사용할 수 있도록 연결하는 것을 의미한다. 전역변수의 내부 연결을 수행하려면
//전역변수 앞에 static키워드를 붙이면 된다.
//전역변수를 외부에서 연결하려면 extern을 붙이고 내부에서만 사용하기 위해서는 static을 붙이도록 한다.

//#include <stdio.h>
//
//int global_num;					//전역변수 선언
//static int inner_num;			//정적 전역변수 선언
////extern static int inner_num	//extern static키워드 2개는 동시에 붙일 수 없다.
//
//void in_fun(void);				//정적 전역변수를 사용한 사용자 정의 함수 선언
//extern void out_fun(void);		//외부 파일 사용자 정의 함수 선언
//
//int main(void) {
//
//	printf("전역변수로 외부 연결 함수 호출\n");
//	printf("extern 키워드 사용함\n");
//
//	out_fun();	//test2.c 파일에 구현되어 있는 외부 함수 호출
//	printf("1. 외부 연결 함수에서 global_num의 값 출력 : %d\n\n", global_num);
//
//	printf("static 키워드 사용함\n");
//
//	in_fun();	//test1.c 파일에 구현되어 있는 내부 함수 호출
//	printf("2. 내부 연결 함수에서 inner_num값 출력 : %d\n\n", inner_num);
//
//
//	return 0;
//}
//
//
//void in_fun(void)
//{
//	inner_num = 20;
//	printf("\n[내부 in_fun()함수 영역]\n");
//	return;
//}