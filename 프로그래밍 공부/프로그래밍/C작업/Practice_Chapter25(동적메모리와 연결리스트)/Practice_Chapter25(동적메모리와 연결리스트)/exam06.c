//���� �޸�(dynamic memory allocation)�� ���� �ǽ�-6

//calloc()�Լ�, realloc()�� ���� �޸� �Ҵ�, Ȯ�忡 ���� �ǽ�
//calloc()�Լ� : ���� �޸𸮸� �ʱ�ȭ�� ���ִ� �Լ�, malloc()�Լ��� �ʱ�ȭ�� ������ �ʾƼ� memset()��
//����߾���. calloc()�Լ��� ����� ������ ���� ���� �ִ�.
//2���� �Լ� �߿����� calloc()�Լ��� �� ���ϴ�.
//malloc(), calloc()�� �������� �ʱ�ȭ ����, �Ű������� �ٸ���.

//realloc()�Լ� : ������ �Ҵ�� �޸� ����� ũ�⸦ ������ �� ���
// 
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int* ptr = NULL;
//	int* r_ptr = NULL;
//
//	//calloc()�� ���� �����޸� �Ҵ�
//	ptr = (int*)calloc(5, sizeof(int));		//5�� �׸��� �����޸� �Ҵ�(�ʱ�ȭ �Ǿ���)
//
//	//calloc()�� ���Ͽ� �Ҵ�� �޸𸮴� 0���� �ʱ�ȭ�� �̷���� ���� �� ���� �ִ�.
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", ptr[i]);
//	}
//	printf("\n");
//
//	printf("ptr[4] �ּ� : %p\n", ptr);
//
//	printf("realloc()�Լ��� �޸� Ȯ��\n");
//	//realloc()�� ������ �Ҵ�� �޸𸮿� �׳� �����̴� �����̴�.
//	ptr = (int*)realloc(ptr, sizeof(int) * 8);
//
//	//���� �ּ�
//	printf("ptr�� �ּ� : %p\n", ptr);
//	printf("r_ptr�� �ּ� : %p\n", r_ptr);
//	//realloc()�� �޸𸮸� ����� ũ�� �����ϴ� ����� ���� �ʱ�ȭ�� �̷������ �ʴ´�.
//
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", ptr[i]);
//	}
//	printf("\n");
//
//	memset(ptr, 0, sizeof(int) * 8);
//	printf("memset()�Լ� ������� �ʱ�ȭ��\n");
//
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", ptr[i]);
//	}
//	printf("\n");
//
//
//
//	free(ptr);
//
//	return 0;
//}