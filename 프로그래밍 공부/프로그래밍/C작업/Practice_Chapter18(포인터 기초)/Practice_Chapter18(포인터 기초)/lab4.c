//문제4
//함수 void swap(int* x, int* y)라는 함수를 선언하고 main()에서 int형 변수를 2개를 선언 및 초기화를 하여
//아래와 같이 출력이 되도록 한다.
//swap()함수는 값을 서로 바꾸는 기능을 하도록 구현하면 된다.

//실행결과
//swap()호출전 num1 = 10, num2 = 20
//swap()호출후 num1 = 20, num2 = 10

//-----------------------------------------------------------

//#include <stdio.h>
//
//void swap(int* x, int* y);
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;
//
//	printf("swap()호출전 num1 = %d, num2 = %d\n", num1, num2);
//	swap(&num1, &num2);
//	printf("swap()호출후 num1 = %d, num2 = %d\n", num1, num2);
//
//	return 0;
//}
//
//void swap(int* x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//
//	return;
//}