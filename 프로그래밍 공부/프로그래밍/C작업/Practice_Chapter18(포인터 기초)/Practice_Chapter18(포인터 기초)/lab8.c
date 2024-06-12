//문제8
//정수형 배열을 하나 선언을 해서 5개의 방을 할당하고, 사용자로부터 5개의 정수값을 입력받는다.
//정수형 포인터를 선언하고 초기화 해서 배열명을 대입하도록 하자.
//포인터를 이용하여 배열의 총합과 평균을 구하는 프로그램을 작성해보자.

//실행 결과
//arr[0] = 100
//arr[1] = 100
//arr[2] = 100
//arr[3] = 100
//arr[4] = 100

//arr배열의 총합 : 500
//arr배열의 평균 : 100.00
//--------------------------------------------------------------------------

#include <stdio.h>
#define LENGTH 5

int main(void)
{
	int total = 0;
	double avg = 0.0;
	int arr[LENGTH] = { 0 };
	int* parr = NULL;

	parr = arr;

	for (int i = 0; i < LENGTH; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
		total += *parr;
		parr++;
	}

	avg = (double)total / LENGTH;

	printf("\narr배열의 총합 : %d\n", total);
	printf("arr배열의 평균 : %.2lf\n", avg);


	return 0;
}