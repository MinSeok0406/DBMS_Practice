//����8
//������ �迭�� �ϳ� ������ �ؼ� 5���� ���� �Ҵ��ϰ�, ����ڷκ��� 5���� �������� �Է¹޴´�.
//������ �����͸� �����ϰ� �ʱ�ȭ �ؼ� �迭���� �����ϵ��� ����.
//�����͸� �̿��Ͽ� �迭�� ���հ� ����� ���ϴ� ���α׷��� �ۼ��غ���.

//���� ���
//arr[0] = 100
//arr[1] = 100
//arr[2] = 100
//arr[3] = 100
//arr[4] = 100

//arr�迭�� ���� : 500
//arr�迭�� ��� : 100.00
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

	printf("\narr�迭�� ���� : %d\n", total);
	printf("arr�迭�� ��� : %.2lf\n", avg);


	return 0;
}