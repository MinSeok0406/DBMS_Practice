//배열과 함수에 대한 실습-1
//배열명을 인수로 하여 사용자 정의 함수를 호출한다는 것은 배열명이 주소값이므로 주소 자체를 넘기는 것이다.
//호출하는 쪽에서 함수명(배열명);호출하면 되고, 사용자 정의 함수에서는 함수명이 hap이라고 가정을 한다면
//선언할 때는 반환값 함수명(데이터 타입 배열명[]); 으로 해야 한다.
//call by reference의 개념과 동일하다.

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define LENGTH 5	//매크로 상수(기호상수) 선언 및 초기화
//
////함수의 선언
//int hap(int score[], int size);
//int point_hap(int* score, int size);
//
//
//int main(void) {
//	//배열의 선언과 동시에 초기화
//	int score[LENGTH] = { 100, 50,30,20,90 };
//	int sum = 0;
//	float avg = 0.0f;
//
//	printf("상수> #define LENGTH 5\n");
//	printf("배열> score[LENGTH] = { 100, 50,30,20,90 } \n");
//
//	sum = hap(score, LENGTH);
//	//평균 구하기
//	avg = (float)sum / LENGTH;		//실수로 타입 캐스팅
//
//	printf("반환> 배열에 저장되어 있는 5과목의 총점 : %d\n", sum);
//	printf("산출> 배열에 저장되어 있는 5과목의 평균 : %.2f\n", avg);
//
//	return 0;
//}
//
////사용자 정의 함수 구현(배열의 총점을 구하는 기능)
//int hap(int score[], int size)
//{
//	int i = 0, total = 0;
//	printf("\n사용자 정의 함수 hap을 통하여 총점 계산 후 반환\n");
//	//총점 계산 코드
//	for (i = 0; i < size; i++)
//	{
//		total += score[i];		//배열의 값 누적
//	}
//
//	return total;
//}
//
////사용자 정의 함수 구현(배열의 총점을 구하는 기능)
//int point_hap(int* score, int size)
//{
//	//포인터 변수에 배열의 주소값(포인터 상수)이 저장
//	int i = 0, total = 0;
//	printf("\n사용자 정의 함수 point_hap을 통하여 포인터를 활용하여 총점 계산 후 반환\n");
//	//총점 계산 코드
//	for (i = 0; i < size; i++)
//	{
//		total += *score;		//*score는 실제 값을 의미(간접 참조), score는 주소
//		score++;				//포인터의 위치를 이동을 시킨다.(int이니까 4바이트씩 움직인다.)
//	}
//	return total;
//}