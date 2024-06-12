//연결리스트(linked list)에 대한 실습(동적 메모리 포함)-2

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
//	//연결리스트 생성
//	while (1)
//	{
//		printf("성명 입력(엔터키 입력시 종료) : ");
//		gets_s(buffer, SIZE);		//Enter키가 들어오면 공백 포함해서 문자열의 주소를 리턴
//
//		//Enter키가 입력되면 루프 탈출
//		if (buffer[0] = '\0')
//		{
//			printf("\n입력을 종료합니다.\n");
//			break;
//		}
//
//		//동적 메모리 할당
//		p = (NODE*)malloc(sizeof(NODE));
//		strcpy_s(p->name, sizeof(p->name), buffer);		//성명 문자열 복사
//		printf("나이 입력 : ");
//		scanf_s("%d", &(p->age));
//		//gets_s(buffer, SIZE);
//		//age = atoi(buffer);		//atoi()함수로 입력받은 나이 문자열을 숫자 나이로 변경함.
//		//p->age = age;
//		int ch = getchar();
//
//		if (list == NULL)
//		{
//			//새로운 노드를 첫 번째 노드로 생성
//			list = p;
//		}
//		else
//		{
//			//새로운 노드를 이전 노드의 링크 필드에다가 주소대입
//			p_prev->link = p;	
//		}
//
//		p->link = NULL;
//		p_prev = p;
//	}
//	//연결 리스트에 들어가 있는 데이터 출력
//	p = list;	//제일 처음 만들어진 동적 메모리의 주소를 다시 p에다가 저장
//
//	while (p != NULL)
//	{
//		printf("[ %s, %d ]", p->name, p->age);
//		p = p->link;	//연결되어진 다음 메모리의 주소를 대입
//
//		if (p != NULL)
//		{
//			printf(" -> ");
//		}
//	}
//	//할당된 동적 메모리 반납
//	p = list;
//	while (p != NULL)
//	{
//		p_next = p->link;
//		free(p);
//		p = p_next;
//	}
//	printf("할당된 동적 메모리가 전부 해제되었습니다.\n");
//
//	return 0;
//}