//����4
//typedef Ű���带 ����Ͽ� point ����ü�� ����� ����� ���� ������ Ÿ���� ���鵵�� ����. ����,
//typedef�� ����Ͽ� rectangle ����ü�� ����µ� �̰��� ��ø ����ü�� ���� point����ü�� 2���� ����� �����Ͽ�
//���鵵�� �Ѵ�.

//�Լ� 2���� ������ �Ʒ��� ���� �Ѵ�.
//�簢���� ���� ���ϴ� ���
//void ShowRectangleArea (Rect rect);
//�簢���� ��ǥ�� ����ϴ� ���
//void ShowRecPos (Rect rect);

//�׸��� rectangle ����ü�� main()���� 2���� ����� �������� �����ϰ� ���ü� �ֵ��� �ʱ�ȭ�� �Ͽ�
//�������� ���� ��µ� �� �ֵ��� ���α׷��� �ۼ��Ͻÿ�.

//#include <stdio.h>
//#include <math.h>
//
//typedef struct Point
//{
//	int a;
//	int b;
//} PS;
//
//typedef struct rectangle
//{
//	PS ln;
//	PS rn;
//} Rect;
//
//void ShowRectangleArea(Rect rect)
//{
//	int h = 0, w = 0;
//
//	h = abs(rect.ln.a - rect.rn.a);
//	w = abs(rect.ln.b - rect.rn.b);
//
//	printf("�簢���� ���� : %d\n", h * w);
//	
//}
//
//void ShowRecPos(Rect rect)
//{
//	printf("�簢�� �� ��� ��ǥ : [%d, %d]\n", rect.ln.a, rect.ln.b);
//	printf("�簢�� �� �ϴ� ��ǥ : [%d, %d]\n", rect.ln.a, rect.rn.b);
//	printf("�簢�� �� ��� ��ǥ : [%d, %d]\n", rect.rn.a, rect.ln.b);
//	printf("�簢�� �� �ϴ� ��ǥ : [%d, %d]\n", rect.rn.a, rect.rn.b);
//}
//
//int main(void)
//{
//	Rect a = {
//				{1,1},
//				{4,4}
//			 };
//	Rect b = {
//				{0,0},
//				{7,5}
//			 };
//
//	ShowRectangleArea(a);
//	ShowRecPos(a);
//	printf("\n");
//	ShowRectangleArea(b);
//	ShowRecPos(b);
//
//	return 0;
//}