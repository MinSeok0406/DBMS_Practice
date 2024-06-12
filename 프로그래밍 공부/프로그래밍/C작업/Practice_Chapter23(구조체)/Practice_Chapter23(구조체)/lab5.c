//문제5
//typedef 키워드를 사용하여 point구조체를 만든다.
//함수를 아래와 같이 선언한다.
//void SwapPoint(POINT* point1, POINT* point2); 선언하고 이 함수의 기능은 두 개의 점을 서로 바꾸고
//출력하는 기능을 한다.

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

	printf("--점의 원래 상태--\n");
	printf("point1 : {%d, %d}\n", p1.a, p1.b);
	printf("point2 : {%d, %d}\n", p2.a, p2.b);
	SwapPoint(&p1, &p2);
	printf("--점을 바꾼 상태--\n");
	printf("point1 : {%d, %d}\n", p1.a, p1.b);
	printf("point2 : {%d, %d}\n", p2.a, p2.b);

	return 0;
}