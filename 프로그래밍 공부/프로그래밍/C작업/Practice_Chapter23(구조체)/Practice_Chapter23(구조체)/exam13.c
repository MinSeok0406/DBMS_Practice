//공용체와 열거형의 실습-2

//열거형(enumeration) : 한정된 데이터들을 변수에 대입할 수 있는 값을 나타내는 상수를 모아 놓은 자료형
//열거형의 키워드 enum을 적는다.

//#include <stdio.h>
//
////열거형 선언 및 초기화
//enum season
//{
//	SP,
//	SM,
//	FA,
//	WI
//};
////포인터 배열선언 및 초기화
//char* sname[] = { "spring", "summer", "fall", "winter"};
//
//int main(void)
//{
//	//열거형 변수는 NULL초기화가 되지 않는다. 선언만 하도록 하자.
//	//열거형은 상수로 구성되어지고 아울러 각각의 상수들에게는 0 ~ n의 숫자만 가져올 수 있다.
//	enum season s;
//	//열거형 상수 중에서 SP를 저장을 하는데 SP의 위치값(인덱스와 유사)을 저장하는 것이다.
//	s = SP;		
//	printf("s의 바이트 크기값 : %d\n", sizeof(s));
//	printf("s의 주소값 : %p\n", &s);
//
//	printf("%d번째 계절은 %s입니다.\n", s + 1, sname[s]);
//
//	return 0;
//}