//����2
//����� �����Լ� 2�� ����
//1. void menu();	-> 1. ���α׷� ����, 2. ���α׷� ����
//2. void heart();	-> 2���� �迭(10�� 13��), srand(), rand(), time()�Լ� �����.
//main()�Լ����� ������ ������ ���� ������ �����鼭 switch���� ����Ͽ� ����ڷκ��� �Է��� �޴´�.
//��Ʈ���� �ƴ����� �����ϱ� ���ؼ� ��Ʈ�� ��, ã�� ���� ��Ʈ�� *�� ����ϵ��� �Ѵ�.
//��Ʈ ���� : ���� 1 ~ 100�� �����ؼ� 20���ϴ� ��Ʈ�� �����ϵ��� �Ѵ�.

//������



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
//		printf("��ȣ ���� : ");
//		scanf_s("%d", &cho);
//
//		switch (cho)
//		{
//			case 1:
//				heart();
//				break;
//			case 2:
//				printf("���α׷� ����!\n");
//				doing = 0;
//				break;
//			default:
//				printf("�߸� �Է��ϼ̽��ϴ�.\n");
//				printf("�ٽ� �Է����ּ���.\n");
//				break;
//		}
//
//	}
//	return 0;
//}
//
//void menu()
//{
//	printf("�� ���� �Լ��� ��Ʈ�� ã�� ���α׷�\n");
//	printf("1. ���α׷� ����\n");
//	printf("2. ���α׷� ����\n");
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
//				printf("��  ");
//			}
//			else
//			{
//				printf("��  ");
//			}
//		}
//		printf("\n");
//	}
//	return;
//}