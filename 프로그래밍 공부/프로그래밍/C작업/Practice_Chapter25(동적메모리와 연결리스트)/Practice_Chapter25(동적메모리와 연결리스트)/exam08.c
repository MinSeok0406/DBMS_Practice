//���Ḯ��Ʈ(linked list)�� ���� �ǽ�(���� �޸� ����)

//���� ����Ʈ : ������ �����͸� �����ͷ� �����Ͽ� �����ϴ� �ڷᱸ���̴�.
//���� ����Ʈ�� ������ �ʵ�� ��ũ �ʵ�� �����Ѵ�.
//���� ����Ʈ�� ������ ���� �������� ����� typedef Ű���带 �̿��Ͽ� ���ο� �ڷ����� �����ؼ�
//����ϴ� ����� ���� ����.

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct NODE
//{
//	int data;
//	struct NODE* link;
//} NODE;
//
//int main(void)
//{
//	NODE* p_head = NULL;
//	p_head = (NODE*)malloc(sizeof(NODE));
//
//	p_head->data = 20;
//	p_head->link = NULL;
//
//	NODE* p_next = NULL;
//	p_next = (NODE*)malloc(sizeof(NODE));
//
//	p_next->data = 50;
//	p_next->link = NULL;
//
//	NODE* p = NULL;
//	//��� �����Ϳ� p_next�� ���� �޸� �ּҰ� ���Ե� ���̴�.
//	p_head->link = p_next;
//	p = p_head;
//
//	while (1)
//	{
//		printf("[%d]", p->data);
//		if (p->link != NULL)
//		{
//			printf(" -> ");
//		}
//		else
//		{
//			break;
//		}
//		p = p_head->link;
//	}
//	printf("\n");
//
//	free(p_head);
//	free(p_next);
//
//	return 0;
//}