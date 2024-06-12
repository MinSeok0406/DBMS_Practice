//배열에 대한 실습-4
//배열과 반복문 중에서 for문하고 아주 궁합이 잘 맞다.

//배열을 사용하여 3개의 과목의 점수를 사용자로부터 입력받은 뒤 총점과 평균을 구하는 프로그램

//#include <stdio.h>
//#define LENGTH 3		//매크로 상수 선언 및 초기화
//
//int main(void) {
//
//	int score[LENGTH] = { 0 };		//정수형 배열 선언 및 초기화
//	int count = 0, sum = 0;
//	double avg = 0.0;
//
//	//사용자로부터 3개의 과목 점수 반복해서 입력을 받는 코드
//	for (count = 0; count < LENGTH; count++)
//	{
//		printf("과목%d 점수 : ", count + 1);
//		//score[count]는 변수와 동일하기 때문에 주소참조 연산자 &를 사용한 것이다.
//		//score는 배열명이기 때문에 주소를 가지고 있다.
//		scanf_s("%d", &score[count]);	
//	}
//	//입력받은 3개의 과목의 총점을 구하는 코드
//	for (count = 0; count < LENGTH; count++)
//	{
//		sum += score[count];		//과목별 누계
//	}
//	//평균을 구하는 코드
//	avg = (double)sum / LENGTH;
//
//	//총점과 합계를 출력하는 코드
//	printf("총점 : %d\n", sum);
//	printf("평균 : %.lf\n", avg);
//
//
//	return 0;
//}