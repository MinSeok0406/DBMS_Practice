//����6
//������ �迭 2���� �����Ͽ� �ϳ��� arr1 = {-10,-10,-10}, �� �ٸ� �ϳ��� arr2 = {200,200,200}
//�ʱ�ȭ�� �ϰ� �Լ��� ȣ���ϴµ� �Լ��� ����� void swap(int arr1[], int arr2[])�� �����ϰ�
//�Ʒ� �������� ���� ��µ� �� �ֵ��� ���α׷��� �ۼ��Ͻÿ�.
//������
//�Լ� ȣ�� ���� �迭���� ��
//arr1�迭�� ��
//arr1[0] = -10
//arr1[1] = -10
//arr1[2] = -10
//
//arr2[0] = 200
//arr2[1] = 200
//arr2[2] = 200
//
//swap�Լ� ȣ��
//swap�Լ� ����
//
//main()�Լ� ����
//
//�Լ� ȣ�� ���� �迭���� ��
//arr1�迭�� ��
//arr[0] = 200
//arr[1] = 200
//arr[2] = 200
//
//arr2�迭�� ��
//arr2[0] = -10
//arr2[1] = -10
//arr2[2] = -10
//--------------------------------------------------------

//#include <stdio.h>
//#define LENGTH 3
//
//void swap(int arr1[], int arr2[]);
//
//int main(void) {
//
//	int arr1[LENGTH] = { -10,-10,-10 };
//	int arr2[LENGTH] = { 200,200,200 };
//
//	printf("�Լ� ȣ�� ���� �迭���� ��\n");
//
//	printf("arr1�迭�� ��\n");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("arr1[%d] = %d\n", i, arr1[i]);
//	}
//	printf("\n");
//
//	printf("arr2�迭�� ��\n");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("arr2[%d] = %d\n", i, arr2[i]);
//	}
//	printf("\n");
//
//	printf("swap�Լ� ȣ��\n");
//
//	swap(arr1, arr2);
//
//	printf("main()�Լ� ����\n\n");
//	printf("�Լ� ȣ�� ���� �迭���� ��\n");
//
//	printf("arr1�迭�� ��\n");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("arr1[%d] = %d\n", i, arr1[i]);
//	}
//	printf("\n");
//
//	printf("arr2�迭�� ��\n");
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("arr2[%d] = %d\n", i, arr2[i]);
//	}
//	printf("\n");
//
//
//	return 0;
//}
//
//void swap(int arr1[], int arr2[])
//{
//	int temp[LENGTH] = { 0 };
//	printf("swap�Լ� ����\n\n");
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		temp[i] = arr1[i];
//	}
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		arr1[i] = arr2[i];
//	}
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		arr2[i] = temp[i];
//	}
//
//	return;
//}