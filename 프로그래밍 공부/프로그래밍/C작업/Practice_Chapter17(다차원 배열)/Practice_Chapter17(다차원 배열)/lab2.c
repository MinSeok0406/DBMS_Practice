//문제2
//사용자 정의함수 2개 선언
//1. void menu();	-> 1. 프로그램 실행, 2. 프로그램 종료
//2. void heart();	-> 2차원 배열(10행 13열), srand(), rand(), time()함수 사용함.
//main()함수에서 정의할 사항은 무한 루프를 돌리면서 switch문을 사용하여 사용자로부터 입력을 받는다.
//하트인지 아닌지를 구분하기 위해서 하트는 ♥, 찾지 못한 하트는 *로 출력하도록 한다.
//하트 비중 : 난수 1 ~ 100를 생성해서 20이하는 하트를 설정하도록 한다.

//실행결과



//--------------------------------------------------------------
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define ROW 10
//#define COLUMN 13
//
//void menu();
//void heart();
//
//int main(void)
//{
//	int cho = 0, doing = 1;
//
//	while (doing)
//	{
//		menu();
//		printf("번호 선택 : ");
//		scanf_s("%d", &cho);
//
//		switch (cho)
//		{
//			case 1:
//				heart();
//				break;
//			case 2:
//				printf("프로그램 종료!\n");
//				doing = 0;
//				break;
//			default:
//				printf("잘못 입력하셨습니다.\n");
//				printf("다시 입력해주세요.\n");
//				break;
//		}
//
//	}
//	return 0;
//}
//
//void menu()
//{
//	printf("■ 랜덤 함수로 하트를 찾는 프로그램\n");
//	printf("1. 프로그램 실행\n");
//	printf("2. 프로그램 종료\n");
//	return;
//}
//
//void heart()
//{
//	int heart[ROW][COLUMN] = { 0 };
//	srand((unsigned)time(NULL));
//
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COLUMN; j++)
//		{
//			heart[i][j] = 1 + (rand() % 100);
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (heart[i][j] > 20)
//			{
//				printf("◎  ");
//			}
//			else
//			{
//				printf("♥  ");
//			}
//		}
//		printf("\n");
//	}
//	return;
//}