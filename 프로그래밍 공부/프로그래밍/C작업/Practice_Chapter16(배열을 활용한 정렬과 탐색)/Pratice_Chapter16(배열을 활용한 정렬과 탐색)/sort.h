//#include <stdio.h>
//#include <stdlib.h>		//rand()�Լ� �̿��ϱ� ���ؼ� ����
//#include <time.h>		//clock()�Լ� �̿��ϱ� ���ؼ� ����
//#define MAX_SIZE 10000
//#define SWAP(x, y, temp) { temp = x; x = y; y = temp; }
//
////�������� ����
//int original[MAX_SIZE] = { 0 };		//rand(0~32767)�� ���� �����͸� ������ ���� �迭
//int list[MAX_SIZE] = { 0 };			//�� ���� �˰��򿡼� ����� ������ �迭
//int n = 0;							//�������� ������ �޴� ��������
//
////����ð� ������ ���� �������� ����
//clock_t start = 0, finish = 0, used_time = 0;
//
////�Լ��� ����
//void selection_sort(int list[], int n);		//��������
//void bubble_sort(int list[], int n);		//��������
//void insert_sort(int list[], int n);		//��������
//
//void copyArr(void);		//���� �迭�� �����ϴ� �Լ�
//void calcTime(void);	//����ð��� ���� �� ����� �ϴ� �Լ�
//
//
//void copyArr(void)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		list[i] = original[i];
//	}
//	return;
//}
//
//void selection_sort(int list[], int n)
//{
//	int i = 0, j = 0, temp = 0;
//	int sort = 0;
//	printf("���� ���� ��....\n");
//	for (i = 0; i < n - 1; i++)
//	{
//		sort = i;		//�迭 ��� 4�� �ݺ������� ����
//		//�ڽ��� �ε����� ���� �����ϱ� ���ؼ� j���� i + 1�� ������
//		for (j = i + 1; j < n; j++)
//		{
//			//������ ���� ���Ͽ� �񱳴���� �Ǵ� s_list[i]�� ũ�ٸ�...��)ù ��° ���ο��� 4 < 5�̹Ƿ� ���̴�.
//			if (list[j] < list[sort])
//			{
//				sort = j;		//�ּҰ��� �ε����� �����ϴ� �κ�
//			}
//		}
//		//���������� ���� ���� ġȯ
//		temp = list[i];
//		list[i] = list[sort];
//		list[sort] = temp;
//	}
//	return;
//}
//
//void bubble_sort(int list[], int n)
//{
//	printf("���� ���� ��....\n");
//	int i = 0, j = 0, temp = 0;
//	for (i = n; i > 1; i--)
//	{
//		for (j = 1; j < i; j++)
//		{
//			//�� �ڵ�(������ �ִ� ��ҿ��� ��)
//			if (list[j - 1] > list[j])
//			{
//				SWAP(list[j - 1], list[j], temp);
//			}
//		}
//	}
//	return;
//}
//
//void insert_sort(int list[], int n)
//{
//	printf("���� ���� ��....\n");
//	int i = 0, j = 0, temp = 0;
//	for (i = 1; i < n; i++)
//	{
//		for (j = i; j > 0; j--)
//		{
//			if (list[j - 1] > list[j])
//			{
//				SWAP(list[j - 1], list[j], temp);
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	return;
//}
//
//void calcTime(void)
//{
//	used_time = finish - start;
//	printf("����Ϸ�\n");
//	printf("�ҿ� �ð� : %f ��\n\n", (float)used_time / CLOCKS_PER_SEC);
//	return;
//}