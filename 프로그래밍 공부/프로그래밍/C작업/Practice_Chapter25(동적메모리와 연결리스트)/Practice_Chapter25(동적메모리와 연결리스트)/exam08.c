//연결리스트(linked list)에 대한 실습(동적 메모리 포함)

//연결 리스트 : 각각의 데이터를 포인터로 연결하여 관리하는 자료구조이다.
//연결 리스트는 데이터 필드와 링크 필드로 존재한다.
//연결 리스트를 생성할 때는 보편적인 방법은 typedef 키워드를 이용하여 새로운 자료형을 정의해서
//사용하는 방법이 제일 좋다.

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
//	//헤드 포인터에 p_next의 동적 메모리 주소가 대입된 것이다.
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