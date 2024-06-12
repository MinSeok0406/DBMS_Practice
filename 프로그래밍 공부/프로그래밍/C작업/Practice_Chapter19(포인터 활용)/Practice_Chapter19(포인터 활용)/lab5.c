//문제5
//원의 넓이를 구하는 함수를 만들고 함수 포인터를 이용하여 호출해 보자. 사용자에게 반지름을 입력받고 함수 포인터를 통하여
//원의 넓이를 구해서 아래와 같이 실행결과를 나타내는 프로그램을 작성해보자.
//함수의 선언부 : double circleArea(double x, double, y)

//실행결과
//반지름을 입력하세요 : 10
//원의 넓이는 314.00
//-------------------------------------------------

//#include <stdio.h>
//
//double circleArea(double x, double y);
//
//int main(void)
//{
//	double r = 0.0, result = 0.0;
//	double (*fpr)(double, double) = NULL;
//	fpr = circleArea;
//	
//	printf("반지름을 입력하세요 : ");
//	scanf_s("%lf", &r);
//
//	result = fpr(r, r);
//
//	printf("원의 넓이는 %.2lf\n", result);
//
//	return 0;
//}
//
//double circleArea(double x, double y)
//{
//	double result = 0.0;
//	result = 3.14 * x * y;
//	return result;
//}