//문제3
//int num1 = 10, int num2 = 15, total = 0; 선언 및 초기화를 하고 double avg = 0.0으로 선언 및 초기화를 진행을 하시오.
//포인터 변수를 이용하여 두 정수의 값과, 합계, 평균까지 출력을 해보는 프로그램을 작성하시오.

//실행결과
//두 정수의 값 : 10, 15
//두 정수의 합 : 25
//두 정수의 평균 : 12.5
//--------------------------------------------------

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 15, total = 0;
//	double avg = 0.0;
//	int* pnum1 = NULL;
//	int* pnum2 = NULL;
//
//	pnum1 = &num1;
//	pnum2 = &num2;
//
//	total = *pnum1 + *pnum2;
//	avg = (double)total / 2;
//
//	printf("두 정수의 값 : %d, %d\n", *pnum1, *pnum2);
//	printf("두 정수의 합 : %d\n", total);
//	printf("두 정수의 평균 : %.1lf\n", avg);
//
//	return 0;
//}