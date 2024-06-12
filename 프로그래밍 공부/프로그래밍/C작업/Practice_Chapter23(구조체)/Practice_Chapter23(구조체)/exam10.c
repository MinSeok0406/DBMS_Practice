//구조체에 대한 실습-10

//구조체를 함수의 리턴값으로 받는 예제

//#include <stdio.h>
//#include <string.h>
//
//struct student
//{
//	int sno;
//	char name[10];
//	int age;
//};
//
//struct student becoming();
//
//int main(void)
//{
//	struct student student;
//
//	student = becoming();
//
//	printf("학번 : %d\n", student.sno);
//	printf("성명 : %s\n", student.name);
//	printf("나이 : %d\n", student.age);
//
//
//
//	return 0;
//}
//
////구조체를 반환값으로 하기에 여기서 구조체를 초기화해서 리턴값을 준다.
//struct student becoming()
//{
//	struct student student;
//	student.sno = 20211001;
//	strcpy_s(student.name, sizeof(student.name), "신은혁");
//	student.age = 14;
//
//	return student;
//}