//���� �޸�(dynamic memory allocation)�� ���� �ǽ�-2

//���� 3���� ������ ���� �޸� �Ҵ��ؼ� �ʱ�ȭ�� �����ϰ� �� ���� ����ϴ� ���α׷� �����ǽ�

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int i = 0;
//	int* score = NULL;
//
//	//���� �޸𸮸� �Ҵ�(12����Ʈ�� ���� �Ҵ�)
//	score = (int*)malloc(3 * sizeof(int));
//
//	//���� �޸� �Ҵ�� �޸𸮰� �����Ͽ� �Ҵ� ���� ������, malloc()�Լ��� NULL����
//	//��ȿ�� ����(�ʼ�)
//	if (score == NULL)
//	{
//		printf("���� �޸� �Ҵ� ���� �߻�\n");
//		printf("���α׷��� �����մϴ�. �޸� ���¸� Ȯ�����ּ���.\n");
//		exit(1);	//������ ����
//	}
//
//	//���� �޸� �ʱ�ȭ
//	memset(score, 0, sizeof(int) * 3);
//	printf("�ʱ�ȭ �� �� : %d, %d, %d\n\n", score[0], score[1], score[2]);
//
//	//���� �޸� ����� �ؼ� ���� ����
//	score[0] = 97;
//	score[1] = 100;
//	score[2] = 30;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ��° ���� : %d\n", (i + 1), score[i]);
//	}
//
//	free(score);		//�޸� ����
//
//	return 0;
//}