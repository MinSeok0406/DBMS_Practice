//동적 메모리(dynamic memory allocation)에 대한 실습-7

//realloc()함수를 사용하여 기존에 할당된 동적 메모리 블록의 크기를 변경하는 프로그램 예제 실습
//변경하기 전에 가지고 있던 기존 바이트는 그대로 보존되므로 따로 복사할 필요가 전혀 없다.

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
//	printf("정수형 2개 저장 동적 메모리 확보\n");
//	list = (int*)malloc(sizeof(int) * 2);
//
//	//아래코드를 실행하면 이전에 저장된 값들을 초기화 시켜서 덮어쓴다.
//	//memset(list, 0, sizeof(int) * 2);
//
//	//각각의 블록에 값을 대입을 하는 코드
//	list[0] = 10;
//	*(list + 1) = 20;
//
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d ", list[i]);
//	}
//	printf("\n\n");
//
//	//정수형 2개를 저장하는 동적 메모리를 정수형 3개의 저장 메모리 공간으로 확장
//	printf("정수형 2개를 저장하는 동적 메모리를 정수형 3개의 저장 메모리 공간으로 확장\n");
//	new_list = (int*)realloc(list, sizeof(int) * 3);
//
//	printf("list가 가지고 있는 주소값 : %p\n", list);
//	printf("new_list가 가지고 있는 주소값 : %p\n\n", new_list);
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