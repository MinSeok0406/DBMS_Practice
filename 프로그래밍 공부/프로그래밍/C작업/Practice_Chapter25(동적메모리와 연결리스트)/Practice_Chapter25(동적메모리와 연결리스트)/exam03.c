//���� �޸�(dynamic memory allocation)�� ���� �ǽ�-3

//Ű����� �Է��� �л��� ���� ��ŭ ���� �޸𸮸� �Ҵ��Ͽ�, ������ ó���ϴ� ���α׷��̴�.
//�Է��� ������ ������ ����� ���ϰ� ����� �Ҽ� 2°���� ����ϴ� ���� �ǽ�

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int i = 0, student = 0, sum = 0;
//	int* score = NULL;
//	float avg = 0.0f;
//
//	printf("�л��� �Է��ϼ��� : ");
//	scanf_s("%d", &student);
//
//	//�Է¹��� student�� ���� �޸� �Ҵ�
//	score = (int*)malloc(student * sizeof(int));
//
//	//���� �޸��� ���� 0���� �ʱ�ȭ
//	memset(score, 0, sizeof(int) * student);
//
//	//��ȿ�� ����
//	if (score == NULL)
//	{
//		printf(">> ���� �޸� �Ҵ� ���� �߻�!\n");
//		printf(">> ���α׷� ����. �޸� ���� Ȯ�� ���\n");
//		exit(1);
//	}
//
//	//���� �޸𸮸� �̿��Ͽ� �л��� ������ �Է� �޵��� �Ѵ�.
//	for (i = 0; i < student; i++)
//	{
//		printf("�л� # %d-%d ���� �Է� : ", student, (i + 1));
//		scanf_s("%d", &score[i]);
//		sum += score[i];		//�Է��� ���� �ٷ� �հ�ó��
//	}
//	printf("���� : %d\n\n", sum);
//
//	for (i = 0; i < student; i++)
//	{
//		printf("�л� # %d-%d ���� ��� : %d\n", student, i + 1, score[i]);
//	}
//	avg = (float)sum / student;		//��� ����
//	printf("��� ���� : %.2f\n\n", avg);
//
//	free(score);
//
//	return 0;
//}