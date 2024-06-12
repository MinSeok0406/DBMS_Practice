//문제2
//typedef 키워드를 이용하여 구조체 MOVIE를 아래와 같이 만든다.
//typedef struct
//{
//	char title;		//영화의 제목
//	double rating;	//영화의 평점
//};
//위의 구조체를 이용하여 malloc(), memset(), free()함수를 이용하여 아래와 같이 실행결과가 나오도록 프로그램을 구현하시오.

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct
//{
//	char title[100];
//	double rating;
//} MOVIE;
//
//int main(void)
//{
//	MOVIE* movies = NULL;
//	int info = 0;
//
//	printf("영화를 몇편 보시겠습니까? : ");
//	scanf_s("%d", &info);
//	int ch = getchar();
//
//	movies = (MOVIE*)malloc(sizeof(MOVIE) * info);
//
//	if (movies == NULL)
//	{
//		printf("동적 메모리 할당 오류\n");
//		printf("프로그램 종료! 메모리 상태 확인 요망\n");
//		exit(1);
//	}
//	memset(movies, 0, sizeof(MOVIE) * info);
//
//	for (int i = 0; i < info; i++)
//	{
//		printf("movies[i].title : %s\n", movies[i].title);
//		printf("movies[i].rating : %.2lf\n", movies[i].rating);
//	}
//	printf("--------------------------------------------------\n");
//	printf("[영화 정보 입력]\n");
//	
//	for (int i = 0; i < info; i++)
//	{
//
//		printf("영화 제목 %d 번째 : ", i + 1);
//		gets_s(movies[i].title, sizeof(movies[i].title));
//	re:
//		printf("영화 평점(0.00 ~ 5.00) : ");
//		scanf_s("%lf", &movies[i].rating);
//		getchar();
//
//		if (movies[i].rating < 0 || movies[i].rating > 5)
//		{
//			printf("평점을 잘못 입력하셨습니다.\n");
//			printf("다시 입력하세요.\n");
//			goto re;
//		}
//	}
//	printf("==================================\n");
//	printf("제목                          평점\n");
//	printf("==================================\n");
//	for (int i = 0; i < info; i++)
//	{
//		printf("%s\t\t%.2lf\n", movies[i].title, movies[i].rating);
//	}
//	printf("==================================\n");
//
//	free(movies);
//
//	return 0;
//
//	//퀴즈 : 위에서 입력받은 영화의 평점의 합계를 구하여 평점 평균을 구하여 출력하는 것도 추가해
//	//보시오.
//}