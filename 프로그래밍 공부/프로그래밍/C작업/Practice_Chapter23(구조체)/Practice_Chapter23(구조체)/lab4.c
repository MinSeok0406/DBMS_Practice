//문제4
//typedef 키워드를 사용하여 point 구조체를 만들고 사용자 정의 데이터 타입을 만들도록 하자. 또한,
//typedef를 사용하여 rectangle 구조체를 만드는데 이것은 중첩 구조체로 만들어서 point구조체를 2개의 멤버로 선언하여
//만들도록 한다.

//함수 2개의 선언을 아래와 같이 한다.
//사각형의 넓이 구하는 기능
//void ShowRectangleArea (Rect rect);
//사각형의 좌표를 출력하는 기능
//void ShowRecPos (Rect rect);

//그리고 rectangle 구조체를 main()에서 2개를 만들어 실행결과와 동일하게 나올수 있도록 초기화를 하여
//실행결과와 같이 출력될 수 있도록 프로그램을 작성하시오.

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
//	printf("사각형의 넓이 : %d\n", h * w);
//	
//}
//
//void ShowRecPos(Rect rect)
//{
//	printf("사각형 좌 상단 좌표 : [%d, %d]\n", rect.ln.a, rect.ln.b);
//	printf("사각형 좌 하단 좌표 : [%d, %d]\n", rect.ln.a, rect.rn.b);
//	printf("사각형 우 상단 좌표 : [%d, %d]\n", rect.rn.a, rect.ln.b);
//	printf("사각형 우 하단 좌표 : [%d, %d]\n", rect.rn.a, rect.rn.b);
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