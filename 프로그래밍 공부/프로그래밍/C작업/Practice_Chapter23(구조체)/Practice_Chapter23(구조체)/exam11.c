//����ü�� ���� �ǽ�-11

//��ø ����ü(nested structure) : �ϳ��� ����ü�� ����Ǿ� �ְ� �� �ٸ� ����ü�� ������ �� �ٸ� ����ü�� ����ν� ����ϴ� ����

//#include <stdio.h>
//
//struct first
//{
//	int a;
//	int b;
//};
//
//struct second
//{
//	//����ü�� ����� ������ �ִ�.
//	struct first sa;
//	struct first sb;
//};
//
//int main(void)
//{
//	//��ø ����ü second�� ������ ����
//	struct second ns;
//
//	printf("first�� ����Ʈ ũ�� : %d\n", sizeof(ns.sa));
//	printf("second�� ����Ʈ ũ�� : %d\n", sizeof(ns));
//
//	//��ø ����ü�� ����� �Ǿ� �ִ� ����ü�� �������� �����ϱ� ���ؼ� ����, ����������� .�� 2��
//	//����ؾ� �Ѵ�.
//	ns.sa.a = 10;
//	ns.sa.b = 20;
//	ns.sb.a = 30;
//	ns.sb.b = 40;
//
//	printf("1. ns.sa.a�� ���� %d\n", ns.sa.a);
//	printf("2. ns.sa.b�� ���� %d\n", ns.sa.b);
//	printf("3. ns.sb.a�� ���� %d\n", ns.sb.a);
//	printf("4. ns.sb.b�� ���� %d\n", ns.sb.b);
//
//
//
//	return 0;
//}