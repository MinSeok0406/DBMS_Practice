//���� �޸�(dynamic memory allocation)�� ���� �ǽ�-7

//realloc()�Լ��� ����Ͽ� ������ �Ҵ�� ���� �޸� ����� ũ�⸦ �����ϴ� ���α׷� ���� �ǽ�
//�����ϱ� ���� ������ �ִ� ���� ����Ʈ�� �״�� �����ǹǷ� ���� ������ �ʿ䰡 ���� ����.

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int i = 0;
//	int* list = NULL;
//	int* new_list = NULL;
//
//	printf("������ 2�� ���� ���� �޸� Ȯ��\n");
//	list = (int*)malloc(sizeof(int) * 2);
//
//	//�Ʒ��ڵ带 �����ϸ� ������ ����� ������ �ʱ�ȭ ���Ѽ� �����.
//	//memset(list, 0, sizeof(int) * 2);
//
//	//������ ��Ͽ� ���� ������ �ϴ� �ڵ�
//	list[0] = 10;
//	*(list + 1) = 20;
//
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d ", list[i]);
//	}
//	printf("\n\n");
//
//	//������ 2���� �����ϴ� ���� �޸𸮸� ������ 3���� ���� �޸� �������� Ȯ��
//	printf("������ 2���� �����ϴ� ���� �޸𸮸� ������ 3���� ���� �޸� �������� Ȯ��\n");
//	new_list = (int*)realloc(list, sizeof(int) * 3);
//
//	printf("list�� ������ �ִ� �ּҰ� : %p\n", list);
//	printf("new_list�� ������ �ִ� �ּҰ� : %p\n\n", new_list);
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", list[i]);
//	}
//	printf("\n\n");
//
//	//list[2] = 30;
//	new_list[2] = 30;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", new_list[i]);
//	}
//	printf("\n\n");
//
//	free(new_list);
//
//	return 0;
//}