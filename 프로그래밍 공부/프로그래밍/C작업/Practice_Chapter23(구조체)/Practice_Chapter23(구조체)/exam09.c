//����ü�� ���� �ǽ�-9

//����ü�� �Լ��� ���ڰ��� ���� �ǽ�(����ü ������ �ѱ�� ���, ����ü ������ �ּҸ� �ѱ�� ���)
//����ü�� �Լ��� �μ���, ���ϰ����ε� ����� �󸶵��� �����ϴ�. ����ü ������ �̿��� �Ͽ� �Լ���
//ȣ���ϸ� '�ּҿ� ���� ȣ��(call by reference)'�� �Ǿ� ȣ���� ���� ������ ��ġ�� �����̴�.

//����ü ������ �ּҸ� ����Ű�� �����͸� �ѱ�� ����� �ϴ� �ǽ�
//#include <stdio.h>
//#include <string.h>
//
//struct person
//{
//	int age;
//	char name[10];
//	char gender;
//};
//
////����� ���� �Լ��� ����
//int same_person(struct person* p1, struct person* p2);
//
//int main(void)
//{
//	int result = 0;
//	struct person p1 = { 35, "������", 'W' };
//	struct person p2 = { 30, "�赿��", 'M' };
//
//	//�Լ��� ȣ���ϴµ� &p1, &p2 ��, ����ü ������ �ּ� �Ѿ���ν� call by reference�� ������ ���ϰ� �ִ�.
//	result = same_person(&p1, &p2);
//
//	if (result == 1)
//	{
//		printf("p1�� p2�� ������ ����Դϴ�.\n\n");
//	}
//	else
//	{
//		printf("p1�� p2�� ������ ����� �ƴմϴ�.\n\n");
//	}
//
//	return 0;
//}
//
//
//
//int same_person(struct person* p1, struct person* p2)
//{
//	//����, �̸�, ������ ���ٸ�...
//	if (p1->age == p2->age && strcmp(p1->name, p2->name) == 0 && p1->gender == p2->gender)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}