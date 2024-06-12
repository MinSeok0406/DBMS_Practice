//동적 메모리(dynamic memory allocation)에 대한 실습-4

//구조체를 저장할 수 있는 동적 메모리 할당에 대한 예제 실습

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////구조체 정의
//struct STUDENT
//{
//	int sno;
//	char name[12];
//	char dept[30];
//};
//
//int main(void)
//{
//	int i = 0;
//	struct STUDENT* ptr = NULL;
//
//	//구조체 동적 메모리 할당
//	ptr = (struct STUDENT*)malloc(sizeof(struct STUDENT) * 3);
//
//	//구조체를 동적으로 할당시에 malloc()를 이용하면 memset()도 크기만큼 초기화를 해줘야 한다.
//	memset(ptr, 0, sizeof(struct STUDENT) * 3);
//
//	//동적 메모리 사용(직접 입력을 하는 코드)
//	ptr[0].sno = 20210911;
//	strcpy_s(ptr[0].name, sizeof(ptr[0].name), "신은혁");
//	strcpy_s(ptr[0].dept, sizeof(ptr[0].dept), "경찰학과");
//
//	ptr[1].sno = 20210912;
//	strcpy_s(ptr[1].name, sizeof(ptr[1].name), "김말숙");
//	strcpy_s(ptr[1].dept, sizeof(ptr[1].dept), "행정학과");
//
//	ptr[2].sno = 20210913;
//	strcpy_s(ptr[2].name, sizeof(ptr[2].name), "김연아");
//	strcpy_s(ptr[2].dept, sizeof(ptr[2].dept), "빙상학과");
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("학번 : %d\n", ptr[i].sno);
//		printf("성명 : %s\n", ptr[i].name);
//		printf("학과 : %s\n\n", ptr[i].dept);
//	}
//	free(ptr);
//
//	return 0;
//}