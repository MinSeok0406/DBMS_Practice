//�迭�� Ȱ���� ���İ� Ž�� �ǽ�-7
//����Ž���� ����Ž���� ���� �׽�Ʈ

#include <stdio.h>
#include <time.h>
#define MAX_SIZE 10000000

//�Լ� ����
//����Ž�� ����� �ϴ� �Լ�
long long sequantial_search(long long list[], long long size, long long search_value);
//����Ž�� ����� �ϴ� �Լ�
long long binary_search(long long list[], long long size, long long search_value);
//�ð��� ����ϴ� �Լ�
void calcTime(void);

//�������� ����
long long list[MAX_SIZE] = { 0 };		//0~9999 �ε������� 0���� �ʱ�ȭ
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

	printf("�迭 ����� ���� : %lld��\n", size);
	printf("ã���� �ϴ� ���ڸ� �Է� : ");
	scanf_s("%lld", &search_value);

	//����Ž�� �ҿ�ð� ����
	start = clock();
	//����Ž�� ����� �ϴ� �Լ� ȣ��
	result = sequantial_search(list, size, search_value);
	if (result == -1)
	{
		printf("ã���� �ϴ� ���� �������� �ʽ��ϴ�.\n");
		printf("���α׷��� �����մϴ�.\n");
		exit(0);
	}
	finish = clock();
	calcTime();

	//����Ž�� �ҿ�ð� ����
	start = clock();
	//����Ž�� ����� �ϴ� �Լ� ȣ��
	result = binary_search(list, size, search_value);
	if (result == -1)
	{
		printf("ã���� �ϴ� ���� �������� �ʽ��ϴ�.\n");
		printf("���α׷��� �����մϴ�.\n");
		exit(0);	//0�� ��������, 1�� ������ ����(������ ������)
	}
	finish = clock();
	calcTime();


	return 0;
}


//����Ž�� ����� �ϴ� �Լ�
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
//����Ž�� ����� �ϴ� �Լ�
long long binary_search(long long list[], long long size, long long search_value)
{
	long long low = 0;			//���� �ε��� ��
	long long high = size - 1;	//���� �ε��� ���ε� size���� -1�� ���־�� �Ѵ�. �� ������ �ٷ� �ε��� 0���� �����ϱ� �����̴�.
	long long md = 0;			//�߾Ӱ� ����, ī��Ʈ ����

	while (low <= high)
	{
		//�߾Ӱ��� ���
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
	return -1;		//ã���� �ϴ� ���� �迭�� �������� ���� ��, -1�� ��� 
	
}
//�ҿ�ð��� ����ϴ� �Լ�
void calcTime(void)
{
	used_time = finish - start;
	printf("���� �Ϸ�!!\n");
	printf("�ҿ� �ð� : %.16lf ��\n\n", (double)used_time/ CLOCKS_PER_SEC);
	return;
}
//����� ����Ž���� ����Ž������ �����;��� ���������� ���� �ӵ��� �� �������ٴ� ���� �˼��� �ִ�.