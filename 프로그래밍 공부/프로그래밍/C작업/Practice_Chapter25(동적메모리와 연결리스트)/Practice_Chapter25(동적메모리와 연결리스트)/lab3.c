//����3
//���� ������ �����ϸ鼭 ����ڷκ��� ������ �Է¹޴´�. -1�� �Է��� �ϸ� ������ ���������� -1��
//�Է��� �� ������ ���������� ������ �Է¹޴´�. �Է¹��� �������� ����Ѵ�.
//�ʱ� �迭 ���̸� 5�� ������ �Ͽ� ���� �޸� �Ҵ��� �Ѵ�.
//realloc()�Լ��� �̿��Ͽ� �迭�� ���̸� ���̵��� �Ѵ�.
//------------------------------------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define SIZE 5
//
//int main(void)
//{
//	int* str = NULL;
//	int arrlen = 5;
//	int cnt = 0, num = 0;
//
//	str = (int*)malloc(sizeof(int) * SIZE);
//
//	if (str == NULL)
//	{
//		printf("���α׷��� �����մϴ�.\n");
//		exit(1);
//	}
//	memset(str, 0, sizeof(int) * SIZE);
//
//	while (1)
//	{
//		printf("%d��° ���� �Է� : ", cnt + 1);
//		scanf_s("%d", &str[cnt]);
//
//		if (str[cnt] == -1)
//		{
//			break;
//		}
//		
//		if (arrlen == cnt + 1)
//		{
//			arrlen += 1;
//			str = (int*)realloc(str, sizeof(int) * arrlen);
//		}
//
//		cnt++;
//	}
//
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%d ", str[i]);
//	}
//
//	free(str);
//
//	return 0;
//}