//���Ḯ��Ʈ(linked list)�� ���� �ǽ�(���� �޸� ����)-2

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define SIZE 20
//
//typedef struct NODE
//{
//	char name[SIZE];
//	int age;
//	struct NODE* link;
//} NODE;
//
//int main(void)
//{
//	NODE* list = NULL;
//
//	NODE* p_prev = NULL, * p = NULL, * p_next = NULL;
//
//	char buffer[SIZE] = " ";
//	int age = 0;
//
//	//���Ḯ��Ʈ ����
//	while (1)
//	{
//		printf("���� �Է�(����Ű �Է½� ����) : ");
//		gets_s(buffer, SIZE);		//EnterŰ�� ������ ���� �����ؼ� ���ڿ��� �ּҸ� ����
//
//		//EnterŰ�� �ԷµǸ� ���� Ż��
//		if (buffer[0] = '\0')
//		{
//			printf("\n�Է��� �����մϴ�.\n");
//			break;
//		}
//
//		//���� �޸� �Ҵ�
//		p = (NODE*)malloc(sizeof(NODE));
//		strcpy_s(p->name, sizeof(p->name), buffer);		//���� ���ڿ� ����
//		printf("���� �Է� : ");
//		scanf_s("%d", &(p->age));
//		//gets_s(buffer, SIZE);
//		//age = atoi(buffer);		//atoi()�Լ��� �Է¹��� ���� ���ڿ��� ���� ���̷� ������.
//		//p->age = age;
//		int ch = getchar();
//
//		if (list == NULL)
//		{
//			//���ο� ��带 ù ��° ���� ����
//			list = p;
//		}
//		else
//		{
//			//���ο� ��带 ���� ����� ��ũ �ʵ忡�ٰ� �ּҴ���
//			p_prev->link = p;	
//		}
//
//		p->link = NULL;
//		p_prev = p;
//	}
//	//���� ����Ʈ�� �� �ִ� ������ ���
//	p = list;	//���� ó�� ������� ���� �޸��� �ּҸ� �ٽ� p���ٰ� ����
//
//	while (p != NULL)
//	{
//		printf("[ %s, %d ]", p->name, p->age);
//		p = p->link;	//����Ǿ��� ���� �޸��� �ּҸ� ����
//
//		if (p != NULL)
//		{
//			printf(" -> ");
//		}
//	}
//	//�Ҵ�� ���� �޸� �ݳ�
//	p = list;
//	while (p != NULL)
//	{
//		p_next = p->link;
//		free(p);
//		p = p_next;
//	}
//	printf("�Ҵ�� ���� �޸𸮰� ���� �����Ǿ����ϴ�.\n");
//
//	return 0;
//}