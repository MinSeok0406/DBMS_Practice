//문제1
//정수형 배열요소가 3개인 것을 선언 후, 초기화하도록 한다.
//사용자로부터 배열 요소를 3개를 입력받고 배열에 저장을 한 후, 3개의 배열값 중에서 최대값을 구하는 프로그램을 작성해보자.
//실행결과
//1번째 정수를 입력하시오 : 10
//2번째 정수를 입력하시오 : 6
//3번째 정수를 입력하시오 : 115
//가장 큰 수는 115이다
//------------------------------------------------------------------------------

//#include <stdio.h>
//#define LENGTH 3
//
//int main(void) {
//
//	int Max_Cmp[LENGTH] = { 0 };
//	int Max = 0;
//	int i = 0;
//
//	for (i = 0; i < sizeof(Max_Cmp) / sizeof(int); i++)
//	{
//		printf("%d번째 정수를 입력하시오 : ", i + 1);
//		scanf_s("%d", &Max_Cmp[i]);
//	}
//
//	if ((Max_Cmp[0] > Max_Cmp[1]) && (Max_Cmp[0] > Max_Cmp[2]))
//	{
//		Max = Max_Cmp[0];
//	}
//	else if ((Max_Cmp[1] > Max_Cmp[0]) && (Max_Cmp[1] > Max_Cmp[2]))
//	{
//		Max = Max_Cmp[1];
//	}
//	else if ((Max_Cmp[2] > Max_Cmp[0]) && (Max_Cmp[2] > Max_Cmp[1]))
//	{
//		Max = Max_Cmp[2];
//	}
//
//	printf("가장 큰 수는 %d이다\n", Max);
//
//	return 0;
//}