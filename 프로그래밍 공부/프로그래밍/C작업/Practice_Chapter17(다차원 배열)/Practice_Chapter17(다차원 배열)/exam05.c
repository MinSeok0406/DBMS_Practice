//2���� �迭 �ǽ�-5
//�б޼��� �Է¹ް� ����ó���� �ϰ�, 1~3�б��� ���� ó�� ���α׷� ���� �ǽ�

//#include <stdio.h>
//#define ROW 2		//�л����� ���� �迭ũ��
//#define COLUMN 3	//������� ���� �迭ũ��
//
//int main(void)
//{
//	int row = 0, col = 0, cnt = 0, class = 0, total = 0;
//	float avg = 0.0f;
//	int students[ROW][COLUMN] = { 0 };
//re:
//	printf("���� ó���� �б޼�(1~3)�� �Է��ϼ��� : ");
//	scanf_s("%d", &class);
//
//	//�б� ���� �߸� �Է��� ��� ���Է��� �ϰԲ� ����� �����ڵ�
//	if (class < 1 || class > 3)
//	{
//		printf("�б޼��� �߸� �Է��ϼ̽��ϴ�. \n");
//		printf("�б޼��� �ٽ� �Է��ϼ���. \n\n");
//		goto re;
//	}
//
//	printf("%d�� �б޿� ���� ����ó�� ������ \n", class);
//	//Ʈ���� ����(�б� ���� ����)
//	for (cnt = 1; cnt <= class; cnt++)
//	{
//		printf("�б� %d�� ���� ó�� ����\n", cnt);
//		//2�� ���� �л� �ݺ� ����
//		for (row = 0; row < ROW; row++)
//		{
//			printf("�б� %d���� �л� %d�� %d�� ���� ���� �Է� \n", cnt, row + 1, COLUMN);
//			//3�� ���� ���� �Է�
//			for (col = 0; col < COLUMN; col++)
//			{
//				printf("���� %d�� ���� : ", col + 1);
//				scanf_s("%d", &students[row][col]);
//			}
//			//���� ���ϱ�
//			total = students[row][0] + students[row][1] + students[row][2];
//			avg = (float)total / COLUMN;
//			printf("���� : %d\n", total);
//			printf("��� : %.2f\n", avg);
//		}
//	}
//	printf("��ü %d���� �б��� ���� ó�� ���α׷� ����! \n", class);
//
//
//	return 0;
//}