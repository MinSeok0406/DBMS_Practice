//구조체에 대한 실습-11

//중첩 구조체(nested structure) : 하나의 구조체가 선언되어 있고 또 다른 구조체를 선언할 때 다른 구조체를 멤버로써 사용하는 형태

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
//	//구조체를 멤버로 가지고 있다.
//	struct first sa;
//	struct first sb;
//};
//
//int main(void)
//{
//	//중첩 구조체 second의 변수를 선언
//	struct second ns;
//
//	printf("first의 바이트 크기 : %d\n", sizeof(ns.sa));
//	printf("second의 바이트 크기 : %d\n", sizeof(ns));
//
//	//중첩 구조체는 멤버로 되어 있는 구조체의 실제값에 접근하기 위해서 접근, 멤버연산자인 .를 2번
//	//사용해야 한다.
//	ns.sa.a = 10;
//	ns.sa.b = 20;
//	ns.sb.a = 30;
//	ns.sb.b = 40;
//
//	printf("1. ns.sa.a의 값은 %d\n", ns.sa.a);
//	printf("2. ns.sa.b의 값은 %d\n", ns.sa.b);
//	printf("3. ns.sb.a의 값은 %d\n", ns.sb.a);
//	printf("4. ns.sb.b의 값은 %d\n", ns.sb.b);
//
//
//
//	return 0;
//}