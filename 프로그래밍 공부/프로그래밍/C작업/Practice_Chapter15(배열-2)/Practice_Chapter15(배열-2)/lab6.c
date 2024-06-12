//문제6
//정수형 배열 2개를 선언하여 하나는 arr1 = {-10,-10,-10}, 또 다른 하나는 arr2 = {200,200,200}
//초기화를 하고 함수를 호출하는데 함수의 선언부 void swap(int arr1[], int arr2[])를 선언하고
//아래 실행결과와 같이 출력될 수 있도록 프로그램을 작성하시오.
//실행결과
//함수 호출 전의 배열들의 값
//arr1배열의 값
//arr1[0] = -10
//arr1[1] = -10
//arr1[2] = -10
//
//arr2[0] = 200
//arr2[1] = 200
//arr2[2] = 200
//
//swap함수 호출
//swap함수 영역
//
//main()함수 복귀
//
//함수 호출 후의 배열들의 값
//arr1배열의 값
//arr[0] = 200
//arr[1] = 200
//arr[2] = 200
//
//arr2배열의 값
//arr2[0] = -10
//arr2[1] = -10
//arr2[2] = -10
//--------------------------------------------------------

//#include <stdio.h>
//#define LENGTH 3
//
//void swap(int arr1[], int arr2[]);
//
//int main(void) {
//
//	int arr1[LENGTH] = { -10,-10,-10 };
//	int arr2[LENGTH] = { 200,200,200 };
//
//	printf("함수 호출 전의 배열들의 값\n");
//
//	printf("arr1배열의 값\n");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("arr1[%d] = %d\n", i, arr1[i]);
//	}
//	printf("\n");
//
//	printf("arr2배열의 값\n");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("arr2[%d] = %d\n", i, arr2[i]);
//	}
//	printf("\n");
//
//	printf("swap함수 호출\n");
//
//	swap(arr1, arr2);
//
//	printf("main()함수 복귀\n\n");
//	printf("함수 호출 후의 배열들의 값\n");
//
//	printf("arr1배열의 값\n");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("arr1[%d] = %d\n", i, arr1[i]);
//	}
//	printf("\n");
//
//	printf("arr2배열의 값\n");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("arr2[%d] = %d\n", i, arr2[i]);
//	}
//	printf("\n");
//
//
//	return 0;
//}
//
//void swap(int arr1[], int arr2[])
//{
//	int temp[LENGTH] = { 0 };
//	printf("swap함수 영역\n\n");
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		temp[i] = arr1[i];
//	}
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		arr1[i] = arr2[i];
//	}
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		arr2[i] = temp[i];
//	}
//
//	return;
//}