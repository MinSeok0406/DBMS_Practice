//����3
//�Ʒ��� ���� ����ü�� �����Ѵ�.
//struct student
//{
//	char name[10];
//	int sub1;
//	int sub2;
//	int sub3;
//	double avg;
//	struct student* nextst;		//����ü ����� ������ ����ü�� �����͸� ����
//
//};

//�⺻������ ���� ����ü ������ 3���� �⺻������ �ʱ�ȭ�� �Ѵ�.
//nextst ������ ���� ����� �̿��Ͽ� ���� ����ü�� ����Ű�� ��, ���Ḯ��Ʈ(��ũ�� ����Ʈ)���·� 
//���� �Ʒ��� ���� �������� �������� ���α׷��� �ۼ��Ͻÿ�.

//��, void input(struct student* st); �Լ��� �����ϰ� �����Ͻÿ�
//input()��� 3������ ������ �Է¹ް�, ��� ����, ���� ���, nextst���� NULL�� �� ������ ���ѷ�����
//�����ϵ��� �Ѵ�.
//-----------------------------------------------------------------------------------------------------

//#include <stdio.h>
//#define SIZE 10
//
//struct student
//{
//	char name[10];
//	int sub1;
//	int sub2;
//	int sub3;
//	double avg;
//	struct student* nextst;
//};
//
//void input(struct student* st)
//{
//	printf("[�л� 3���� ���� ó�� ���α׷�]\n");
//
//	while(1)
//	{
//		printf("%s �л��� 3���� ������ �Է��ϼ���(�������� ����) : ", st->name);
//		scanf_s("%d %d %d", &st->sub1, &st->sub2, &st->sub3);
//		printf("%s �л��� 3���� �������� �Էµ� ���� %d, %d, %d�Դϴ�.\n\n", st->name, st->sub1, st->sub2, st->sub3);
//
//		st->avg = (st->sub1 + st->sub2 + st->sub3) / 3.0;
//
//		if (st->nextst == NULL)
//		{
//			break;
//		}
//
//		st = st->nextst;
//	}
//}
////����
////���� �ڵ带 5���� �л��� ������ �Է¹޴µ� ����ü �迭��, ����ü ���� ������ ������ Ȱ���Ͽ� ���� ����
////����� �������� �ѹ� ���α׷��� ������ �غ�����.
//
//int main(void)
//{
//	struct student s3 = { "������", 0, 0, 0, 0.0, NULL };
//	struct student s2 = { "������", 0, 0, 0, 0.0, &s3 };
//	struct student s1 = { "ȫ�浿", 0, 0, 0, 0.0, &s2 };
//
//	input(&s1);
//
//	printf("%s �л��� 3���� ��� : %.2lf�Դϴ�.\n", s1.name, s1.avg);
//	printf("%s �л��� 3���� ��� : %.2lf�Դϴ�.\n", s2.name, s2.avg);
//	printf("%s �л��� 3���� ��� : %.2lf�Դϴ�.\n", s3.name, s3.avg);
//
//
//	return 0;
//}