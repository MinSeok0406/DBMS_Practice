//배열을 활용한 정렬과 탐색 실습-7
//순차탐색과 이진탐색의 성능 테스트

#include <stdio.h>
#include <time.h>
#define MAX_SIZE 10000000

//함수 선언
//순차탐색 기능을 하는 함수
long long sequantial_search(long long list[], long long size, long long search_value);
//이진탐색 기능을 하는 함수
long long binary_search(long long list[], long long size, long long search_value);
//시간을 계산하는 함수
void calcTime(void);

//전역변수 선언
long long list[MAX_SIZE] = { 0 };		//0~9999 인덱스까지 0으로 초기화
clock_t start = 0, finish = 0, used_time = 0;

int main(void)
{
	long long i = 0, result = 0, search_value = 0;
	long long size = MAX_SIZE;

	start = clock();
	for (i = 0; i < MAX_SIZE; i++)
	{
		list[i] = i;
	}
	finish = clock();
	calcTime();

	printf("배열 요소의 개수 : %lld개\n", size);
	printf("찾고자 하는 숫자를 입력 : ");
	scanf_s("%lld", &search_value);

	//순차탐색 소요시간 측정
	start = clock();
	//순차탐색 기능을 하는 함수 호출
	result = sequantial_search(list, size, search_value);
	if (result == -1)
	{
		printf("찾고자 하는 값이 존재하지 않습니다.\n");
		printf("프로그램을 종료합니다.\n");
		exit(0);
	}
	finish = clock();
	calcTime();

	//이진탐색 소요시간 측정
	start = clock();
	//이진탐색 기능을 하는 함수 호출
	result = binary_search(list, size, search_value);
	if (result == -1)
	{
		printf("찾고자 하는 값이 존재하지 않습니다.\n");
		printf("프로그램을 종료합니다.\n");
		exit(0);	//0은 정상종료, 1은 비정상 종료(에러가 존재함)
	}
	finish = clock();
	calcTime();


	return 0;
}


//순차탐색 기능을 하는 함수
long long sequantial_search(long long list[], long long size, long long search_value)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		if (search_value == list[i])
		{
			return i;
		}
		else
		{
			continue;
		}
	}
	return -1;

}
//이진탐색 기능을 하는 함수
long long binary_search(long long list[], long long size, long long search_value)
{
	long long low = 0;			//하한 인덱스 값
	long long high = size - 1;	//상한 인덱스 값인데 size보다 -1을 해주어야 한다. 그 이유는 바로 인덱스 0부터 시작하기 때문이다.
	long long md = 0;			//중앙값 대입, 카운트 변수

	while (low <= high)
	{
		//중앙값을 계산
		md = (low + high) / 2;

		if (search_value == list[md])
		{
			return md;
		}
		else if (search_value > list[md])
		{
			low = md + 1;
		}
		else
		{
			high = md - 1;
		}

	}
	return -1;		//찾고자 하는 값이 배열에 존재하지 않을 때, -1을 출력 
	
}
//소요시간을 계산하는 함수
void calcTime(void)
{
	used_time = finish - start;
	printf("실행 완료!!\n");
	printf("소요 시간 : %.16lf 초\n\n", (double)used_time/ CLOCKS_PER_SEC);
	return;
}
//결론은 이진탐색이 순차탐색보다 데이터양이 많아질수록 점점 속도가 더 빨라진다는 것을 알수가 있다.