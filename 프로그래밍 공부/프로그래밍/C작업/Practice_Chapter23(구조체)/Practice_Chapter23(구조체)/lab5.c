//����5
//typedef Ű���带 ����Ͽ� point����ü�� �����.
//�Լ��� �Ʒ��� ���� �����Ѵ�.
//void SwapPoint(POINT* point1, POINT* point2); �����ϰ� �� �Լ��� ����� �� ���� ���� ���� �ٲٰ�
//����ϴ� ����� �Ѵ�.

#include <stdio.h>

typedef struct Point
{
	int a;
	int b;
} POINT;

void SwapPoint(POINT* point1, POINT* point2)
{
	POINT p = {0, 0};

	p.a = point1->a;
	p.b = point1->b;

	point1->a = point2->a;
	point1->b = point2->b;

	point2->a = p.a;
	point2->b = p.b;

	/*p = *point1;
	*point1 = *point2;
	*point2 = p;*/

}


int main(void)
{
	POINT p1 = {2, 4};
	POINT p2 = {5, 7};

	printf("--���� ���� ����--\n");
	printf("point1 : {%d, %d}\n", p1.a, p1.b);
	printf("point2 : {%d, %d}\n", p2.a, p2.b);
	SwapPoint(&p1, &p2);
	printf("--���� �ٲ� ����--\n");
	printf("point1 : {%d, %d}\n", p1.a, p1.b);
	printf("point2 : {%d, %d}\n", p2.a, p2.b);

	return 0;
}