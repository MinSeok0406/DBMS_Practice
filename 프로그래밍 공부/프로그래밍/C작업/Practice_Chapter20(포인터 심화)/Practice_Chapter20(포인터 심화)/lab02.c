//문제2
//아래와 같이 int형 포인터 변수와 크기가 5인 배열을 선언하고 초기화 하도록 하자
//int* maxPtr = NULL;
//int* minPtr = NULL;
//int arr[LENGTH] = { 0 };

//함수를 아래와 같이 선언하고 구현을 해서 실행결과와 동일하게 출력할 수 있도록 프로그램을 작성
//하시오.
//함수의 선언부
//void maxAndmin(int* arr, int size, int** mxPtr, int** mnPtr);

//실행결과
//정수를 입력하세요 : 5000
//정수를 입력하세요 : 1
//정수를 입력하세요 : -5
//정수를 입력하세요 : 200
//정수를 입력하세요 : 6000
//최대값 : 6000, 최소값 : -5
//----------------------------------------------------------

//#include <stdio.h>
//#define LENGTH 5
//
//void maxAndmin(int* arr, int size, int** maxPtr, int** minPtr);
//
//int main(void)
//{
//	int* maxPtr = NULL;
//	int* minPtr = NULL;
//	int arr[LENGTH] = { 0 };
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("정수를 입력하세요 : ");
//		scanf_s("%d", &arr[i]);
//	}
//
//	maxAndmin(arr, LENGTH, &maxPtr, &minPtr);
//
//	printf("최댓값 : %d, 최솟값 : %d\n", *maxPtr, *minPtr);
//
//	return 0;
//}
//
//void maxAndmin(int* arr, int size, int** maxPtr, int** minPtr)
//{
//	int* Max = NULL;
//	int* Min = NULL;
//
//	Max = &arr[0];
//	Min = &arr[0];
//
//	for (int i = 1; i < size; i++)
//	{
//		if (*Max < arr[i])
//		{
//			Max = &arr[i];
//		}
//		else if (*Min > arr[i])
//		{
//			Min = &arr[i];
//		}
//	}
//
//	*maxPtr = Max;
//	*minPtr = Min;
//
//	return;
//}