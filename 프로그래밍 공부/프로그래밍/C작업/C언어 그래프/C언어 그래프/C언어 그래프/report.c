//#include <stdio.h>
//#define SIZE 10
//
//int Seq_Search(int a[], int key, int low, int high)
//{
//	int i;
//
//	for (i = low; i <= high; i++)
//	{
//		if (a[i] == key)
//		{
//			printf("�迭�� %d�� �����մϴ�!!\n", key);
//			return i;
//		}
//	}
//
//	printf("�迭�� %d�� �������� �ʽ��ϴ�!!\n", key);
//
//	return -1;
//}
//
//int main(void)
//{
//	int a[SIZE] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//
//	int n = 0, k = 0, key = 0;
//	n = sizeof(a) / sizeof(a[0]);
//
//	key = 6;
//	k = Seq_Search(a, key, 0, n - 1);
//	printf("a[%d] = %d\n\n", k, key);
//
//	key = 10;
//	k = Seq_Search(a, key, 0, n - 1);
//	printf("%d\n", k);
//
//	return 0;
//}