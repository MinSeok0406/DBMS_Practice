//문제7
//정수형 배열 길이가 10인 배열을 선언 후 초기화를 한다. 10개의 정수를 사용자로부터 입력을 받아서
//배열의 각각 저장하고, 아래와 같이 함수 2개를 선언 후 구현을 하여 실행결과와 동일하게 출력이 되도록 프로그램을 작성하시오
//함수의 선언부
//1. void ShowOdd(int arr[], int size);		//홀수를 출력하는 함수
//2. void ShowEven(int arr[], int size);	//짝수를 출력하는 함수

//출력결과
//총 10개의 숫자 입력
//입력 인덱스 0 : 1
//입력 인덱스 1 : 2
//입력 인덱스 2 : 5
//입력 인덱스 3 : 77
//입력 인덱스 4 : 99
//입력 인덱스 5 : 100
//입력 인덱스 6 : 66
//입력 인덱스 7 : 33
//입력 인덱스 8 : 44
//입력 인덱스 9 : 15
//홀수 출력 : 1	 5  77  99  33  15
//짝수 출력 : 2  100  66  44
//-----------------------------------------------------

#include <stdio.h>
#define LENGTH 10

void ShowOdd(int arr[], int size);
void ShowEven(int arr[], int size);

int main(void) {

	int str[LENGTH] = { 0 };
	printf("총 10개의 숫자 입력\n");

	for (int i = 0; i < LENGTH; i++)
	{
		printf("입력 인덱스 %d : ", i);
		scanf_s("%d", &str[i]);
	}
	ShowOdd(str, LENGTH);
	printf("\n");
	ShowEven(str, LENGTH);

	return 0;
}

void ShowOdd(int arr[], int size)
{
	printf("홀수 출력 : ");
	for (int i = 0; i < size; i++)
	{
		if ((arr[i] % 2) != 0)
		{
			printf("%d  ", arr[i]);
		}
		else
		{
			continue;
		}
	}
}

void ShowEven(int arr[], int size)
{
	printf("짝수 출력 : ");
	for (int i = 0; i < size; i++)
	{
		if ((arr[i] % 2) == 0)
		{
			printf("%d  ", arr[i]);
		}
		else
		{
			continue;
		}
	}
}