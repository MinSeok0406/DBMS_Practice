//구조체에 대한 실습-9

//구조체와 함수의 인자값에 대한 실습(구조체 변수를 넘기는 방법, 구조체 변수의 주소를 넘기는 방법)
//구조체도 함수의 인수값, 리턴값으로도 사용이 얼마든지 가능하다. 구조체 변수를 이용을 하여 함수를
//호출하면 '주소에 의한 호출(call by reference)'이 되어 호출한 곳에 영향을 끼치는 형태이다.

//구조체 변수의 주소를 가리키는 포인터를 넘기는 방법을 하는 실습
//#include <stdio.h>
//#include <string.h>
//
//struct person
//{
//	int age;
//	char name[10];
//	char gender;
//};
//
////사용자 정의 함수를 선언
//int same_person(struct person* p1, struct person* p2);
//
//int main(void)
//{
//	int result = 0;
//	struct person p1 = { 35, "이혜자", 'W' };
//	struct person p2 = { 30, "김동식", 'M' };
//
//	//함수를 호출하는데 &p1, &p2 즉, 구조체 변수의 주소 넘어감으로써 call by reference의 형식을 취하고 있다.
//	result = same_person(&p1, &p2);
//
//	if (result == 1)
//	{
//		printf("p1과 p2는 동일한 사람입니다.\n\n");
//	}
//	else
//	{
//		printf("p1과 p2는 동일한 사람이 아닙니다.\n\n");
//	}
//
//	return 0;
//}
//
//
//
//int same_person(struct person* p1, struct person* p2)
//{
//	//나이, 이름, 성별이 같다면...
//	if (p1->age == p2->age && strcmp(p1->name, p2->name) == 0 && p1->gender == p2->gender)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}