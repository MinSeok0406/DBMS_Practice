//구조체에 대한 실습-4

//구조체 변수 복사에 대한 예제
//동일한 구조체의 자료형을 갖는 변수끼리는 대입 연산자인 '='를 사용하여 값을 복사를 할 수가 있다.

//#include <stdio.h>
//
//struct person
//{
//	char name[10];
//	char gender;
//	int age;
//};
//
//int main(void)
//{
//	//구조체 변수 선언 및 초기화
//	struct person p1 = { "홍길동", 'M', 44 };
//	struct person p2 = { "김가을", 'W', 21 };
//	//구조체 변수는 메모리의 할당 영역의 맨 처음 주소값과 동일하다. 이 영역은 바로 데이터 영역이기
//	//때문에 NULL초기화 자체가 안되는 것이다.
//
//	//아래와 같이 연산이 가능한 이유는 구조체에서 같은 데이터 타입을 같이 가지고 있기 때문에 가능
//	p2 = p1;
//
//	printf("\n%8s %8s %8s\n", "성명", "성별", "나이");
//	printf("%8s %6c %8d\n", p1.name, p1.gender, p1.age);
//	printf("%8s %6c %8d\n", p2.name, p2.gender, p2.age);
//
//	return 0;
//}