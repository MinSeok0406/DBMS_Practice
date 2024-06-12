//typedef 키워드 실습

//typedef : C언어에서 제공해주는 데이터 타입 외에 사용자가 따로 데이터 타입을 정의할 때 쓰는 키워드
//typedef는 struct와 흔히 많이 사용된다.

//#include <stdio.h>
//
//typedef struct point
//{
//	int a;
//	int b;
//} PS;		//struct point타입이 PS라는 새로운 자료형으로 만들어진 것이다.
//
//PS blood_check(PS p1, PS p2);
//
//int main(void)
//{
//	//PS에 대한 변수 선언 및 초기화
//	PS ms = { 130, 80 };
//	PS fs = { 148, 95 };
//	PS result;
//
//	result = blood_check(ms, fs);
//
//	printf("수축기 혈압 평균치 : %d\n", result.a);
//	printf("이완기 혈압 평균치 : %d\n\n", result.b);
//
//	return 0;
//}
//
////평균 혈압을 산출하여 PS구조체에 저장해서 리턴하는 기능
//PS blood_check(PS p1, PS p2)
//{
//	PS pulse;
//	pulse.a = (p1.a + p2.a) / 2;
//	pulse.b = (p1.b + p2.b) / 2;
//
//	return pulse;
//}