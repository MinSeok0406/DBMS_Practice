//#include <stdio.h>
//#include <stdlib.h>		//rand()함수 이용하기 위해서 포함
//#include <time.h>		//clock()함수 이용하기 위해서 포함
//#define MAX_SIZE 10000
//#define SWAP(x, y, temp) { temp = x; x = y; y = temp; }
//
////전역변수 선언
//int original[MAX_SIZE] = { 0 };		//rand(0~32767)로 만든 데이터를 저장할 원본 배열
//int list[MAX_SIZE] = { 0 };			//각 정렬 알고리즘에서 사용할 데이터 배열
//int n = 0;							//데이터의 갯수를 받는 전역변수
//
////실행시간 측정을 위한 전역변수 선언
//clock_t start = 0, finish = 0, used_time = 0;
//
////함수를 선언
//void selection_sort(int list[], int n);		//선택정렬
//void bubble_sort(int list[], int n);		//버블정렬
//void insert_sort(int list[], int n);		//삽입정렬
//
//void copyArr(void);		//원본 배열을 복사하는 함수
//void calcTime(void);	//실행시간을 측정 및 출력을 하는 함수
//
//
//void copyArr(void)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		list[i] = original[i];
//	}
//	return;
//}
//
//void selection_sort(int list[], int n)
//{
//	int i = 0, j = 0, temp = 0;
//	int sort = 0;
//	printf("선택 정렬 중....\n");
//	for (i = 0; i < n - 1; i++)
//	{
//		sort = i;		//배열 요소 4개 반복적으로 대입
//		//자신의 인덱스의 값을 제외하기 위해서 j값을 i + 1로 대입함
//		for (j = i + 1; j < n; j++)
//		{
//			//서로의 값을 비교하여 비교대상이 되는 s_list[i]이 크다면...예)첫 번째 루핑에서 4 < 5이므로 참이다.
//			if (list[j] < list[sort])
//			{
//				sort = j;		//최소값의 인덱스를 저장하는 부분
//			}
//		}
//		//선택정렬을 통한 값을 치환
//		temp = list[i];
//		list[i] = list[sort];
//		list[sort] = temp;
//	}
//	return;
//}
//
//void bubble_sort(int list[], int n)
//{
//	printf("버블 정렬 중....\n");
//	int i = 0, j = 0, temp = 0;
//	for (i = n; i > 1; i--)
//	{
//		for (j = 1; j < i; j++)
//		{
//			//비교 코드(인접해 있는 요소와의 비교)
//			if (list[j - 1] > list[j])
//			{
//				SWAP(list[j - 1], list[j], temp);
//			}
//		}
//	}
//	return;
//}
//
//void insert_sort(int list[], int n)
//{
//	printf("삽입 정렬 중....\n");
//	int i = 0, j = 0, temp = 0;
//	for (i = 1; i < n; i++)
//	{
//		for (j = i; j > 0; j--)
//		{
//			if (list[j - 1] > list[j])
//			{
//				SWAP(list[j - 1], list[j], temp);
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	return;
//}
//
//void calcTime(void)
//{
//	used_time = finish - start;
//	printf("실행완료\n");
//	printf("소요 시간 : %f 초\n\n", (float)used_time / CLOCKS_PER_SEC);
//	return;
//}