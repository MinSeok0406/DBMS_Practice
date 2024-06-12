//배열을 활용한 정렬과 탐색 실습-4
//지금까지 배운 선택, 버블, 삽입 정렬의 성능차이에 대해서 실습을 해본다.

//#include "sort.h"
//
//int main(void)
//{
//	int i = 0;
//	n = MAX_SIZE;
//	srand((unsigned)time(NULL));
//
//	//rand()를 통하여 난수를 발생하여 저장하는 코드
//	for (i = 0; i < n; i++)
//	{
//		original[i] = rand();		//0~32767사이의 값들로 저장된다.
//	}
//	printf("배열 요소의 개수 : %d\n\n", n);
//
//	copyArr();
//	start = clock();	//시작시간 저장
//	selection_sort(list, n);
//	finish = clock();	//저장시간 저장
//	calcTime();
//
//	copyArr();
//	start = clock();	//시작시간 저장
//	bubble_sort(list, n);
//	finish = clock();	//저장시간 저장
//	calcTime();
//
//	copyArr();
//	start = clock();	//시작시간 저장
//	insert_sort(list, n);
//	finish = clock();	//저장시간 저장
//	calcTime();
//
//
//	return 0;
//}