//�迭�� ���� �ǽ�-5
//�迭�� ��ҵ��� ���� �����ϰ� ����ϴ� ����

//#include <stdio.h>
//#include <stdlib.h>		//rand()�� ����ϱ� ���� ����
//#include <time.h>		//time()�� ����ϱ� ���� ����
//#define LENGTH 10		//��ũ�� ��� ���� �� �ʱ�ȭ
//
//int main(void) {
//
//	int rand_num[LENGTH] = { 0 };
//	int count = 0;
//
//	printf("�迭�� �ʱⰪ ���\n");
//	for (count = 0; count < LENGTH; count++)
//	{
//		printf("rand_num[%d] = %d\n", count, rand_num[count]);
//	}
//	printf("==================================================\n");
//	srand((unsigned)time(NULL));		//�ð� ����ȭ ���������� ���� ������ �߻����� �ʵ��� ��
//	printf("1 ~ 500 ������ ���ڸ� ���� ���\n");
//
//	//1 ~ 500���� ���� ���� �߻���Ų �Ŀ� rand_num�迭�� ������ �ϴ� �ڵ�
//	for (count = 0; count < LENGTH; count++)
//	{
//		rand_num[count] = 1 + (rand() % 500);	//1 ~ 500���� ������ ������
//	}
//	//rand_num�迭�� ����Ǿ��� ������ ���ڵ��� ���� ����ϴ� �ڵ�
//	for (count = 0; count < LENGTH; count++)
//	{
//		printf("rand_num[%d] = %d\n", count, rand_num[count]);
//	}
//
//	return 0;
//}