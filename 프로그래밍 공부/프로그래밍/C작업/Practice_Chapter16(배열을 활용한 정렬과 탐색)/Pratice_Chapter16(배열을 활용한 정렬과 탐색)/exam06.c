//배열을 활용한 정렬과 탐색 실습-6
//이진탐색(binary search)은 찾고자 하는 값을 배열의 중앙에서부터 탐색을 하는 방법이다. 이진탐색은 처음부터
//검색을 진행하는 순차탐색과는 달리 배열요소들의 중앙을 기준으로 해서 두 부분으로 나누어 찾는 알고리즘이다.
//이진탐색은 탐색을 하기 전에 배열의 요소가 정렬이 먼저 되어 있어야 한다는 전제조건이 붙는다.(중요)

//이진탐색 예제 실습
//#include <stdio.h>
//#define LENGTH 8
////함수 선언(이진탐색의 기능)
//int binary_search(int list[], int size, int search_value);
//
//int main(void)
//{
//	int list[LENGTH] = { 12,15,19,25,30,45,60,99 };
//	int search_value = 0, index = 0;
//	char yn = ' ';
//
//	do
//	{
//		printf("\n초기> 배열 요소 값 : 12,15,19,25,30,45,60,99\n");
//		printf("찾고자 하는 숫자 입력 : ");
//		scanf_s("%d", &search_value);
//
//		//함수 호출
//		index = binary_search(list, LENGTH, search_value);
//		printf("이진탐색 성공함 해당 인덱스 : [%2d]\n", index);
//		printf("찾고자 하는 값은 %2d이고 인덱스 [%2d]값도 %3d입니다.\n", search_value, index, list[index]);
//
//	re_input:
//		printf("프로그램을 다시 실행하시겠습니까?(Y/N) : ");
//		scanf_s(" %c", &yn, sizeof(yn));
//
//		if (yn == 'N' || yn == 'n')
//		{
//			printf("프로그램을 종료합니다.\n");
//			break;
//		}
//		else if (yn == 'Y' || yn == 'y')
//		{
//			continue;
//		}
//		else
//		{
//			printf("알파벳을 잘못 입력하셨습니다.\n");
//			printf("대소문자 관계없이 Y나 N을 입력하세요.\n");
//			goto re_input;
//		}
//
//	} while (1);
//
//	return 0;
//}
//
//int binary_search(int list[], int size, int search_value)
//{
//	int low = 0;			//하한 인덱스 값
//	int high = size - 1;	//상한 인덱스 값인데 size보다 -1을 해주어야 한다. 그 이유는 바로 인덱스 0부터 시작하기 때문이다.
//	int md = 0, cnt = 1;	//중앙값 대입, 카운트 변수
//
//	while (low <= high)
//	{
//		printf("%d회 이진 탐색\n", cnt);
//		printf("탐색 범위 : [%d ~ %d]\n", low, high);
//		//중앙값을 계산
//		md = (low + high) / 2;
//
//		if (search_value == list[md])
//		{
//			return md;
//		}
//		else if (search_value > list[md])
//		{
//			low = md + 1;
//		}
//		else
//		{
//			high = md - 1;
//		}
//		cnt++;
//
//	}
//	return -1;		//찾고자 하는 값이 배열에 존재하지 않을 때, -1을 출력 
//}