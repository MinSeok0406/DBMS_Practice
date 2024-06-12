//배열을 활용한 정렬과 탐색 실습-3
//삽입 정렬(insert sort) : 이 알고리즘은 점진적으로 정렬 범위를 넓혀 나가는 방식으로 정렬하는 알고리즘이다.
//새로운 범위에 포함되는 마지막 요소를 앞으로 비교하면서 이동하면서 자신보다 작은 요소를 찾을 때까지 이동하면서
//자리를 교환을 해나가는 알고리즘이다. 이미 정렬된 배열부분과 비교하여, 자신의 값과 이전의 값을 비교하면서
//작은 값을 만나면 뒤에 있는 요소와 앞에 있는 요소의 중간에 삽입을 해주는 방식이다.
//장점은 정렬속도가 빠르다. 단점은 역순(배열요소가 내림차순)으로 비교를 상대적으로 많이 하기 때문에 느려진다.

//삽입 정렬의 실습
//#include <stdio.h>
//#define LENGTH 10
//#define SWAP(x, y) { int temp = 0; temp = x; x = y; y = temp;}
//
////함수 선언
//void insert_sort(int arr[], int size);		//삽입 정렬 기능 함수
//void printArr(int arr[], int size);			//배열 출력 기능 함수
//
//int main(void)
//{
//	int arr[LENGTH] = { 1,8,-2,0,11,5,7,10,3,6 };	//배열 요소 10개로 초기화
//	insert_sort(arr, LENGTH);	//삽입 정렬 함수 호출
//
//	return 0;
//}
//
//void insert_sort(int arr[], int size)
//{
//	int i = 0, j = 0, cnt = 0;
//
//	printf("◆ 현재 정렬 전 배열 요소들의 값 ◆\n");
//	printf("===================================\n");
//	printArr(arr, size);
//	printf("===================================\n");
//	//삽입정렬 코드
//	//i값을 1로 설정한 이유는 첫 번째 루핑을 할 때, 0인덱스와 비교를 해야 하기 때문이다.
//	for (i = 1; i < size; i++)
//	{
//		for (j = i; j > 0; j--)
//		{
//			if (arr[j - 1] > arr[j])
//			{
//				SWAP(arr[j - 1], arr[j]);
//				printArr(arr, size);
//				cnt++;
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	printf("비교 횟수 : %d\n", cnt);
//
//}
//
//void printArr(int arr[], int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//
//	return;
//}