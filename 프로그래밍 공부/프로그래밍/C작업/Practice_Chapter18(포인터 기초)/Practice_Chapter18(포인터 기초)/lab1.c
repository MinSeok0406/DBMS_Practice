//문제1
//int형 변수, double형 변수, char형 변수를 선언하고, 각 변수의 주소를 출력하는 프로그램을 작성하시오.
//단, 주소를 출력하되 16진수 출력을 하도록 하시오.

//실행결과
//int형 변수의 주소 : 0039F940
//double형 변수의 주소 : 0039F930
//char형 변수의 주소 : 0039F927
//-------------------------------------------------------------

//#include <stdio.h>
//
//int main(void)
//{
//	int p_int = 0;
//	double p_double = 0.0;
//	char p_char = ' ';
//
//	//주소참조연산자 &를 이용하여 변수의 주소값을 출력할 수 있는지를 검증
//	printf("int형 변수의 주소 : %p\n", &p_int);
//	printf("double형 변수의 주소 : %p\n", &p_double);
//	printf("char형 변수의 주소 : %p\n", &p_char);
//
//	return 0;
//}