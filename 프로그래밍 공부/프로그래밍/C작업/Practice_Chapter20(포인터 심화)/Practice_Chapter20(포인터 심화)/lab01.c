//문제1
//포인터 배열을 아래와 같이 선언하고 초기화를 하도록 한다.
//char* cities[LENGTH] = {"서울", "대전", "대구", "광주", "인천", "제주", "부산" };
//아래와 같이 실행결과처럼 나오도록 프로그램을 작성하시오.

//함수 선언
//void reverse_print(char** ppc, int size); -> 초기화 되어진 문자열을 역순으로 출력하는 기능

//기호상수를 LENGTH를 선언하여 사용하도록 한다.

//실행결과
//문자열 배열 출력 : [서울 대전 대구 광주 인천 제주 부산]

//----------------------------------------------------------

//역순으로 출력 : [부산 제주 인천 광주 대구 대전 서울]

//-------------------------------------------------------------------------

//#include <stdio.h>
//#define LENGTH 7
//
//void reverse_print(char** ppc, int size);
//
//int main(void)
//{
//	char* cities[LENGTH] = {"서울", "대전", "대구", "광주", "인천", "제주", "부산"};
//
//	printf("문자열 배열 출력 : [  ");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("%s  ", cities[i]);
//	}
//	printf("]\n");
//
//	printf("\n----------------------------------------------------------\n\n");
//
//	reverse_print(cities, LENGTH);
//
//	return 0;
//}
//
//void reverse_print(char** ppc, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		ppc++;
//	}
//
//	printf("역순으로 출력 : [  ");
//	for (int i = 1; i <= size; i++)
//	{
//		//배열의 인덱스를 가지고 역순으로 출력하는 방법
//		//printf("%s  ", ppc[(size - 1) - i]);
//		//이중포인터 주소값을 감소시키면서 배열값을 역순으로 출력
//		printf("%s  ", *(ppc - i));
//	}
//	printf("]\n");
//
//	return;
//}