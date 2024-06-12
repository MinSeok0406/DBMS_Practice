//����7
//������ �迭 ���̰� 10�� �迭�� ���� �� �ʱ�ȭ�� �Ѵ�. 10���� ������ ����ڷκ��� �Է��� �޾Ƽ�
//�迭�� ���� �����ϰ�, �Ʒ��� ���� �Լ� 2���� ���� �� ������ �Ͽ� �������� �����ϰ� ����� �ǵ��� ���α׷��� �ۼ��Ͻÿ�
//�Լ��� �����
//1. void ShowOdd(int arr[], int size);		//Ȧ���� ����ϴ� �Լ�
//2. void ShowEven(int arr[], int size);	//¦���� ����ϴ� �Լ�

//��°��
//�� 10���� ���� �Է�
//�Է� �ε��� 0 : 1
//�Է� �ε��� 1 : 2
//�Է� �ε��� 2 : 5
//�Է� �ε��� 3 : 77
//�Է� �ε��� 4 : 99
//�Է� �ε��� 5 : 100
//�Է� �ε��� 6 : 66
//�Է� �ε��� 7 : 33
//�Է� �ε��� 8 : 44
//�Է� �ε��� 9 : 15
//Ȧ�� ��� : 1	 5  77  99  33  15
//¦�� ��� : 2  100  66  44
//-----------------------------------------------------

#include <stdio.h>
#define LENGTH 10

void ShowOdd(int arr[], int size);
void ShowEven(int arr[], int size);

int main(void) {

	int str[LENGTH] = { 0 };
	printf("�� 10���� ���� �Է�\n");

	for (int i = 0; i < LENGTH; i++)
	{
		printf("�Է� �ε��� %d : ", i);
		scanf_s("%d", &str[i]);
	}
	ShowOdd(str, LENGTH);
	printf("\n");
	ShowEven(str, LENGTH);

	return 0;
}

void ShowOdd(int arr[], int size)
{
	printf("Ȧ�� ��� : ");
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
	printf("¦�� ��� : ");
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