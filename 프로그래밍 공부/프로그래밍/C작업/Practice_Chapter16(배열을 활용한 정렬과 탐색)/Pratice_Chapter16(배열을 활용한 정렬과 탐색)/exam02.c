//배열을 활용한 정렬과 탐색 실습-2
//버블정렬(거품정렬, bubble sort) : 요소 맨 앞에서부터 인접하는 요소의 값을 비교하여 오름차순, 내림차순으로 정렬하는 알고리즘이다.
//정렬할 개수가 1개씩 줄인 후 다시 반복한다. 정렬할 원소의 개수가 1이면 비로소 정렬이 완료가 된다.
//장점은 인접해 있는 두 개의 값을 비교하여 요소의 위치를 이동시키므로 단순하다. 아울러, 모든 요소와 비교를 하므로 상당히
//안정적으로 요소값을 정렬시켜준다.
//단점은 요소들의 모든 값과 비교를 하기 때문에 비교적 연산시간이 다소 걸리는 측면도 있다.
//하여 안정성을 보장을 원하고, 데이터 양이 너무 크지 않는 프로그램이라면 버블정렬을 사용하길 권장한다.

//버블 정렬 예제
//#include <stdio.h>
//#define LENGTH 10	//매크로(기호)상수를 선언 후 초기화
////매크로 함수 SWAP의 구현(값을 교환하는 기능), 주의사항은 한줄에 {}안에 구현을 다 해야 한다는 것이다.
//#define SWAP(x, y)	{int temp = 0; temp = x; x = y; y = temp;}
//
////사용자 정의 함수 선언
//void bubbleSort(int bubble_arr[], int size);	//버블 정렬 알고리즘으로 배열요소를 정렬해주는 기능
//void printArray(int bubble_arr[], int size);	//배열 요소를 출력하는 기능
//
//int main(void) {
//
//	int bubble_arr[LENGTH] = { 99, 55, 10, -7, 0, 3, 28, 381, 75, 30 };
//
//	printf("버블 정렬 하기 전의 배열 요소 값 출력\n");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("%d  ", bubble_arr[i]);
//	}
//	printf("\n");
//	printf("=====================================================\n");
//
//	printf("버블 정렬 함수 호출함\n");
//	bubbleSort(bubble_arr, LENGTH);		//함수 호출
//
//	printf("\n버블 정렬 한 후의 배열 요소 값 출력 : ");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("%d  ", bubble_arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//
////사용자 정의 함수 구현
//void bubbleSort(int bubble_arr[], int size)
//{
//	//버블정렬을 하기 위해서는 반드시 더블루프를 사용해야 하며, 내부루프 안에는 조건문이 있어줘야 한다.
//	int i = 0, j = 0;
//	int cnt = 0;
//	for (i = size; i > 1; i--)
//	{
//		for (j = 1; j < i; j++)
//		{
//			//비교 코드(인접해 있는 요소와의 비교)
//			if (bubble_arr[j - 1] > bubble_arr[j])
//			{
//				SWAP(bubble_arr[j - 1], bubble_arr[j]);
//				printArray(bubble_arr, size);
//				cnt++;
//			}
//		}
//	}
//	printf("총 비교횟수 : %d번\n", cnt);
//
//	return;
//}
//
//void printArray(int bubble_arr[], int size)
//{
//	int i = 0;
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%2d  ", bubble_arr[i]);
//	}
//	printf("\n");
//
//
//	return;
//}