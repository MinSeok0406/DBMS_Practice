//����2
//������ �迭 arr[LENGTH]���� ��, �ʱ�ȭ�� �����Ѵ�. ����ڷκ��� LENGTH��ŭ ������ �Է¹޾Ƽ�
//arr�迭�� �����Ѵ�. ������ ������ ���� *ptr ���� �� �ʱ�ȭ�� �Ѵ�.
//�������� ���� ��µǵ��� ���α׷��� �ۼ��Ͻÿ�.

//������
//������ �Է����ּ���
//arr[0] = 10
//arr[1] = 20
//arr[2] = 30
//arr[3] = 40
//arr[4] = 50
//
//ptr�� ���� 00BBF7F8
//arr[0]�� �ּҰ� = 00BBF7F8
//arr[0]�� ���� ? 10
//.....
//----------------------------------------------

//#include <stdio.h>
//#define LENGTH 5
//
//int main(void)
//{
//	int arr[LENGTH] = { 0 };
//	int* ptr = NULL;
//
//	ptr = arr;
//
//	printf("������ �Է����ּ���\n");
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("arr[%d] = ", i);
//		scanf_s("%d", &arr[i]);
//	}
//	printf("\n");
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("ptr�� ���� %p\n", ptr);
//		printf("arr[%d]�� �ּҰ� = %p\n", i, &arr[i]);
//		printf("arr[%d]�� ���� : %d\n", i, *ptr);
//		ptr++;
//	}
//	
//	return 0;
//}