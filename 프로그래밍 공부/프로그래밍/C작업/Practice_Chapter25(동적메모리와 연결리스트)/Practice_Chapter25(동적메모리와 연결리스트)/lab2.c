//����2
//typedef Ű���带 �̿��Ͽ� ����ü MOVIE�� �Ʒ��� ���� �����.
//typedef struct
//{
//	char title;		//��ȭ�� ����
//	double rating;	//��ȭ�� ����
//};
//���� ����ü�� �̿��Ͽ� malloc(), memset(), free()�Լ��� �̿��Ͽ� �Ʒ��� ���� �������� �������� ���α׷��� �����Ͻÿ�.

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
//	printf("��ȭ�� ���� ���ðڽ��ϱ�? : ");
//	scanf_s("%d", &info);
//	int ch = getchar();
//
//	movies = (MOVIE*)malloc(sizeof(MOVIE) * info);
//
//	if (movies == NULL)
//	{
//		printf("���� �޸� �Ҵ� ����\n");
//		printf("���α׷� ����! �޸� ���� Ȯ�� ���\n");
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
//	printf("[��ȭ ���� �Է�]\n");
//	
//	for (int i = 0; i < info; i++)
//	{
//
//		printf("��ȭ ���� %d ��° : ", i + 1);
//		gets_s(movies[i].title, sizeof(movies[i].title));
//	re:
//		printf("��ȭ ����(0.00 ~ 5.00) : ");
//		scanf_s("%lf", &movies[i].rating);
//		getchar();
//
//		if (movies[i].rating < 0 || movies[i].rating > 5)
//		{
//			printf("������ �߸� �Է��ϼ̽��ϴ�.\n");
//			printf("�ٽ� �Է��ϼ���.\n");
//			goto re;
//		}
//	}
//	printf("==================================\n");
//	printf("����                          ����\n");
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
//	//���� : ������ �Է¹��� ��ȭ�� ������ �հ踦 ���Ͽ� ���� ����� ���Ͽ� ����ϴ� �͵� �߰���
//	//���ÿ�.
//}