//문제1
//두 자릿수로 된 난수 5개를 배열에 저장을 하고, 오름차순 정렬을 하되, 선택정렬 알고리즘을 이용하여 정렬전,
//정렬후로 나뉘어서 출력하는 프로그램을 작성하시오.
//함수를 3개 만들어서 main()호출도록 하자.
//선언부
//void sort(int *arr, int size);			//선택정렬을 하는 기능을 하는 함수
//void swap(int *x, int *y);				//두 값을 바꾸는 기능을 하는 함수
//void print_array(int *arr, int size);		//배열의 값을 출력하는 기능을 하는 함수
//출력결과
//정렬 전 배열 : 58 54 66 97 41
//정렬 후 배열 : 41 54 58 66 97
//------------------------------------------------------------------------------------

//#include "seletion_sort.h"
//#include <stdlib.h>
//#include <time.h>
//#define LENGTH 5
//
//int main(void) {
//	
//	srand((unsigned)time(NULL));
//	int arr[LENGTH] = { 0 };
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		arr[i] = (rand() % 90) + 10;
//	}
//
//	printf("정렬 전 배열 : ");
//	print_array(arr, LENGTH);
//	sort(arr, LENGTH);
//	printf("정렬 후 배열 : ");
//	print_array(arr, LENGTH);
//
//	return 0;
//}
//퀴즈 : 함수 3개를 selection_sort.h 헤더파일로 분리하여 기능을 할 수 있도록 만들어 보시오.