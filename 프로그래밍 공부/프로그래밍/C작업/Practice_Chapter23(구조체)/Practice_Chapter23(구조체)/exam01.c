//����ü�� ���� �ǽ�-1
//����ü(structure) : ���� �ٸ� �ڷ����� ������ �ǹ��Ѵ�. �迭�� �� ���� �ڷ����� �ٷ��.
//�� ����ü�� ���� Ÿ���� ������ �迭, ������ ���� �� ����� ���� �� �ִ�.

//#include <stdio.h>
//#include <stddef.h>		//offsetof ��ũ�� ���ǵ� ��� ����
////����ü�� ����(Ʋ, ����) - scope(��ȿ����)������ main()�ܺο� �������ִ� ���� �Ϲ����̴�.
//struct score
//{
//	//����ü ���� score�̴�.
//	int sno;
//	char name[10];
//	int kor;
//	int eng;
//	int math;
//	double avg;
//};	//����ü ������ ���� ��Ÿ���� �����ݷ�(;)�� �ݵ�� �ٿ��� �Ѵ�.
//
//int main(void)
//{
//	//����ü score�� ������ ����, �ƿ﷯ ����ü�� NULL�ʱ�ȭ�� �� ���� ����.
//	//�Ʒ��ڵ�� ����� ���ÿ� �⺻������ �ʱ�ȭ�� ���״�.
//	struct score s1 = { 0, " ", 0, 0, 0, 0.0 };
//	//����ü ��ü ũ�Ⱑ ������� �ϸ� 34����Ʈ�� ���;� �����̳�, ����� 40����Ʈ��
//	//��µȴ�. �� ������ �ٷ� ����ü�� ������� 2, 4, 8�� ����� ���·� �������µ�
//	//score ����ü �ȿ��� double�� �����Ƿ�, 8�� ����� �Ǿ�� �Ѵ�.
//	//�׷��� 40����Ʈ�� ����� �� ���̰�, ������ 6����Ʈ�� �е�(padding)�̶�� �θ���.
//	printf("score����ü�� ����Ʈ ũ�� : %d\n", sizeof(s1));
//	printf("score����ü�� ��� sno ����Ʈ ũ�� : %d\n", sizeof(s1.sno));
//	printf("score����ü�� ��� name ����Ʈ ũ�� : %d\n", sizeof(s1.name));
//	printf("score����ü�� ��� kor ����Ʈ ũ�� : %d\n", sizeof(s1.kor));
//	printf("score����ü�� ��� eng ����Ʈ ũ�� : %d\n", sizeof(s1.eng));
//	printf("score����ü�� ��� math ����Ʈ ũ�� : %d\n", sizeof(s1.math));
//	printf("score����ü�� ��� avg ����Ʈ ũ�� : %d\n", sizeof(s1.avg));
//	
//	printf("\n-------------------------------------------------------------\n");
//	printf("%d\n", offsetof(struct score, sno));
//	printf("%d\n", offsetof(struct score, name));
//	printf("%d\n", offsetof(struct score, kor));
//	printf("%d\n", offsetof(struct score, eng));
//	printf("%d\n", offsetof(struct score, math));
//	printf("%d\n", offsetof(struct score, avg));
//	
//
//
//	return 0;
//}