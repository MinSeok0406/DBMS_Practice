//구조체에 대한 실습-1
//구조체(structure) : 서로 다른 자료형의 집합을 의미한다. 배열은 한 가지 자료형만 다룬다.
//면 구조체는 여러 타입의 변수나 배열, 포인터 등을 다 멤버로 가질 수 있다.

//#include <stdio.h>
//#include <stddef.h>		//offsetof 매크로 정의된 헤더 파일
////구조체의 선언(틀, 설계) - scope(유효범위)때문에 main()외부에 선언해주는 것이 일반적이다.
//struct score
//{
//	//구조체 명이 score이다.
//	int sno;
//	char name[10];
//	int kor;
//	int eng;
//	int math;
//	double avg;
//};	//구조체 선언의 끝을 나타내는 세미콜론(;)을 반드시 붙여야 한다.
//
//int main(void)
//{
//	//구조체 score의 변수를 선언, 아울러 구조체는 NULL초기화를 할 수가 없다.
//	//아래코드는 선언과 동시에 기본값으로 초기화를 시켰다.
//	struct score s1 = { 0, " ", 0, 0, 0, 0.0 };
//	//구조체 전체 크기가 계산으로 하면 34바이트가 나와야 정상이나, 결과는 40바이트가
//	//출력된다. 그 이유는 바로 구조체의 멤버에서 2, 4, 8의 배수의 형태로 취해지는데
//	//score 구조체 안에는 double이 있으므로, 8의 배수가 되어야 한다.
//	//그래서 40바이트가 출력이 된 것이고, 나머지 6바이트는 패딩(padding)이라고 부른다.
//	printf("score구조체의 바이트 크기 : %d\n", sizeof(s1));
//	printf("score구조체의 멤버 sno 바이트 크기 : %d\n", sizeof(s1.sno));
//	printf("score구조체의 멤버 name 바이트 크기 : %d\n", sizeof(s1.name));
//	printf("score구조체의 멤버 kor 바이트 크기 : %d\n", sizeof(s1.kor));
//	printf("score구조체의 멤버 eng 바이트 크기 : %d\n", sizeof(s1.eng));
//	printf("score구조체의 멤버 math 바이트 크기 : %d\n", sizeof(s1.math));
//	printf("score구조체의 멤버 avg 바이트 크기 : %d\n", sizeof(s1.avg));
//	
//	printf("\n-------------------------------------------------------------\n");
//	printf("%d\n", offsetof(struct score, sno));
//	printf("%d\n", offsetof(struct score, name));
//	printf("%d\n", offsetof(struct score, kor));
//	printf("%d\n", offsetof(struct score, eng));
//	printf("%d\n", offsetof(struct score, math));
//	printf("%d\n", offsetof(struct score, avg));
//	
//
//
//	return 0;
//}