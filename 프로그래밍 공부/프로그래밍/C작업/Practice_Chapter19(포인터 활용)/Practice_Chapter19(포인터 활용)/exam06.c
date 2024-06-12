//포인터 활용에 대한 실습-6

//함수 포인터도 변수이기 때문에 A, B, C, D 등 함수가 있다면 함수의 주소를 번갈아 가면서 저장을 얼마든지 할 수 있다.

//#include <stdio.h>
//
//int hap(int x, int y);
//int minus(int x, int y);
//
//int main(void)
//{
//	int result = 0;
//	int (*fp)(int, int) = NULL;
//
//	printf("100과 200의 덧셈 연산과 뺄셈 연산\n");
//	fp = hap;		//함수 포인터에 hap()함수의 주소를 저장
//	result = fp(100, 200);		//함수 포인터를 이용하여 함수를 호출
//	printf("덧셈 연산 결과 : %d\n", result);
//
//	//함수명도 포인터 상수값에 해당한다.
//	printf("--------------------------------------------------------\n");
//
//	//함수 포인터도 역시 변수이기 때문에 다른 함수의 주소를 얼마든지 저장할 수가 있다.
//	fp = minus;		//함수 포인터에 minus()함수의 주소를 저장
//	result = fp(100, 200);		//함수 포인터를 이용하여 minus()함수를 호출
//	printf("뺄셈 연산 결과 : %d\n", result);
//
//	return 0;
//}
//
////사용자 정의 함수 구현
//int hap(int x, int y)
//{
//	printf("\nhap()함수 영역\n");
//	return x + y;
//}
//int minus(int x, int y)
//{
//	printf("\nminus()함수 영역\n");
//	return x - y;
//}