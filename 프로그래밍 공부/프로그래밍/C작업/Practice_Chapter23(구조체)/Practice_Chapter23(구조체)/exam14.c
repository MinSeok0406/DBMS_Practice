//typedef Ű���� �ǽ�

//typedef : C���� �������ִ� ������ Ÿ�� �ܿ� ����ڰ� ���� ������ Ÿ���� ������ �� ���� Ű����
//typedef�� struct�� ���� ���� ���ȴ�.

//#include <stdio.h>
//
//typedef struct point
//{
//	int a;
//	int b;
//} PS;		//struct pointŸ���� PS��� ���ο� �ڷ������� ������� ���̴�.
//
//PS blood_check(PS p1, PS p2);
//
//int main(void)
//{
//	//PS�� ���� ���� ���� �� �ʱ�ȭ
//	PS ms = { 130, 80 };
//	PS fs = { 148, 95 };
//	PS result;
//
//	result = blood_check(ms, fs);
//
//	printf("����� ���� ���ġ : %d\n", result.a);
//	printf("�̿ϱ� ���� ���ġ : %d\n\n", result.b);
//
//	return 0;
//}
//
////��� ������ �����Ͽ� PS����ü�� �����ؼ� �����ϴ� ���
//PS blood_check(PS p1, PS p2)
//{
//	PS pulse;
//	pulse.a = (p1.a + p2.a) / 2;
//	pulse.b = (p1.b + p2.b) / 2;
//
//	return pulse;
//}