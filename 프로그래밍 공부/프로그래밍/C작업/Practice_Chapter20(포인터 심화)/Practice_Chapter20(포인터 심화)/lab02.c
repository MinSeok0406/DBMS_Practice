//����2
//�Ʒ��� ���� int�� ������ ������ ũ�Ⱑ 5�� �迭�� �����ϰ� �ʱ�ȭ �ϵ��� ����
//int* maxPtr = NULL;
//int* minPtr = NULL;
//int arr[LENGTH] = { 0 };

//�Լ��� �Ʒ��� ���� �����ϰ� ������ �ؼ� �������� �����ϰ� ����� �� �ֵ��� ���α׷��� �ۼ�
//�Ͻÿ�.
//�Լ��� �����
//void maxAndmin(int* arr, int size, int** mxPtr, int** mnPtr);

//������
//������ �Է��ϼ��� : 5000
//������ �Է��ϼ��� : 1
//������ �Է��ϼ��� : -5
//������ �Է��ϼ��� : 200
//������ �Է��ϼ��� : 6000
//�ִ밪 : 6000, �ּҰ� : -5
//----------------------------------------------------------

//#include <stdio.h>
//#define LENGTH 5
//
//void maxAndmin(int* arr, int size, int** maxPtr, int** minPtr);
//
//int main(void)
//{
//	int* maxPtr = NULL;
//	int* minPtr = NULL;
//	int arr[LENGTH] = { 0 };
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("������ �Է��ϼ��� : ");
//		scanf_s("%d", &arr[i]);
//	}
//
//	maxAndmin(arr, LENGTH, &maxPtr, &minPtr);
//
//	printf("�ִ� : %d, �ּڰ� : %d\n", *maxPtr, *minPtr);
//
//	return 0;
//}
//
//void maxAndmin(int* arr, int size, int** maxPtr, int** minPtr)
//{
//	int* Max = NULL;
//	int* Min = NULL;
//
//	Max = &arr[0];
//	Min = &arr[0];
//
//	for (int i = 1; i < size; i++)
//	{
//		if (*Max < arr[i])
//		{
//			Max = &arr[i];
//		}
//		else if (*Min > arr[i])
//		{
//			Min = &arr[i];
//		}
//	}
//
//	*maxPtr = Max;
//	*minPtr = Min;
//
//	return;
//}