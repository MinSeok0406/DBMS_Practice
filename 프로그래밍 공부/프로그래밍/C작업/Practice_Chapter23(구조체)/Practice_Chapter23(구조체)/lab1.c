//문제1
//사용자로부터 두 점의 좌표를 입력받아서 두 점 사이의 거리를 계산하여 보자. 점의 좌표(x, y)를
//구조체로 표현한다. 두 점 사이의 거리의 공식(직접 찾아보기)을 이용하여 실행결과와 동일하게
//출력될 수 있도록 프로그램을 작성하시오.
//math.h 파일에 있는 함수를 이용하시오.
//실행결과
//1번째 점의 좌표를 입력하세요(x y) : 10 10
//2번째 점의 좌표를 입력하세요(x y) : 20 20
//두 점 사이의 거리 : 14.142136

//--------------------------------------------------------------------

//#include <stdio.h>
//#include <math.h>
//
//struct Number
//{
//	int x;
//	int y;
//	double distance;
//};
//
//int main(void)
//{
//	struct Number co1;
//	struct Number co2;
//	int x_dis = 0, y_dis = 0;
//
//	printf("1번째 점의 좌표를 입력하세요(x y) : ");
//	scanf_s("%d %d", &co1.x, &co1.y);
//
//	printf("2번째 점의 좌표를 입력하세요(x y) : ");
//	scanf_s("%d %d", &co2.x, &co2.y);
//
//	x_dis = co2.x - co1.x;
//	y_dis = co2.y - co1.y;
//
//	co1.distance = sqrt(pow(x_dis, 2) + pow(y_dis, 2));
//
//	printf("두 점 사이의 거리 : %lf\n", co1.distance);
//	
//
//	return 0;
//}