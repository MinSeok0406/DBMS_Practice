//동적 메모리(dynamic memory allocation)에 대한 실습-5

//동적 구조체를 사용하여 키보드로 입력한 양의 정수만큼 과목명과 학점을 입력받아서 총 학점을
//산출한 뒤 화면에 출력하는 프로그램. 음의 정수가 입력되면 프로그램 종료가 되는 예제

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct
//{
//	char subject_name[30];		//과목 이름
//	int hakjum;					//과목 학점
//} ST;
//
//
//int main(void)
//{
//	ST* t_zone = NULL;
//	int sum = 0, i = 0, subject_cnt = 0;
//
//	printf("신청 과목 입력 : ");
//	scanf_s("%d", &subject_cnt);
//
//	if (subject_cnt <= 0)
//	{
//		printf("0이거나 음수는 허용하지 않습니다.\n");
//		printf("프로그램 종료\n");
//		exit(1);
//	}
//	int ch = getchar();
//
//	//동적 메모리 할당
//	t_zone = (ST*)malloc(sizeof(ST) * subject_cnt);
//	//초기화
//	memset(t_zone, 0, sizeof(ST) * subject_cnt);
//
//	//유효성 검증
//	if (t_zone == NULL)
//	{
//		printf(">>동적 메모리 할당 오류\n");
//		exit(1);
//	}
//
//	for (i = 0; i < subject_cnt; i++)
//	{
//		printf("신청 과목 : ");
//		gets_s(t_zone[i].subject_name, sizeof(t_zone[i].subject_name));
//
//		printf("신청 학점 : ");
//		scanf_s("%d", &t_zone[i].hakjum);
//
//		ch = getchar();
//
//		sum += t_zone[i].hakjum;
//	}
//
//	printf("\n신청한 과목 \t\t\t학점 \n");
//	for (i = 0; i < subject_cnt; i++)
//	{
//		printf("%s \t\t\t%2d \n", t_zone[i].subject_name, t_zone[i].hakjum);
//	}
//	printf("신청하신 총 학점 : %d\n", sum);
//
//	free(t_zone);
//
//	return 0;
//}