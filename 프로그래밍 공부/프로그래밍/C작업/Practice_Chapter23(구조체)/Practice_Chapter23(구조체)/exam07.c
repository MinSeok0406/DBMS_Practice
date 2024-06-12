//구조체에 대한 실습-7

//구조체와 포인터의 관계
//구조체에서 포인터를 사용하는 형식은 크게 2가지가 존재
//첫 번째 : 구조체를 가리키는 포인터를 사용하는 형식
//두 번째 : 구조체 내에서 멤버로써 사용하는 형식

//두 번째 방법의 예제

//#include <stdio.h>
//
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//
//struct student
//{
//	int sno;
//	char name[10];
//	int age;
//	struct date* sd;		//위에 선언되어진 date구조체를 가리키고자 하는 포인터 변수를 student구조체의 멤버로써 선언
//};
//
//int main(void)
//{
//	//date구조체 변수를 선언과 동시에 초기화
//	struct date d = { 2021, 03, 02 };
//
//	//student구조체 변수를 선언과 동시에 초기화
//	struct student s = { 20211001, "홍길동", 25 };
//
//	//구조체 변수 s의 포인터 변수인 sd에 date 구조체 변수의 주소값을 대입하고 있는 코드
//	s.sd = &d;
//	printf("student구조체 멤버인 포인터 변수 s.sd의 주소값 %p\n", s.sd);
//	printf("date구조체 변수 d의 주소값 %p\n\n", &d);
//
//	printf("1. 학번 : %d\n", s.sno);
//	printf("2. 성명 : %s\n", s.name);
//	printf("3. 나이 : %d\n", s.age);
//	//간접 멤버 연산자 -> 로 출력하는 코드(구조체에서는 간접멤버 연산자를 사용하시길 권장드린다.)
//	printf("4. 입학 일자 : %d. %d. %d\n", s.sd->year, s.sd->month, s.sd->day);
//
//
//	return 0;
//}