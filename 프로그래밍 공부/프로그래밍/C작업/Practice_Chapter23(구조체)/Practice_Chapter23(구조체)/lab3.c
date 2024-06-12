//문제3
//아래와 같이 구조체를 선언한다.
//struct student
//{
//	char name[10];
//	int sub1;
//	int sub2;
//	int sub3;
//	double avg;
//	struct student* nextst;		//구조체 멤버로 동일한 구조체의 포인터를 선언
//
//};

//기본적으로 위의 구조체 변수를 3개로 기본값으로 초기화를 한다.
//nextst 포인터 변수 멤버를 이용하여 다음 구조체를 가리키는 즉, 연결리스트(링크드 리스트)형태로 
//만들어서 아래와 같이 실행결과가 나오도록 프로그램을 작성하시오.

//단, void input(struct student* st); 함수를 선언하고 구현하시오
//input()기능 3과목의 점수를 입력받고, 평균 산출, 성적 출력, nextst값이 NULL이 될 때까지 무한루프를
//실행하도록 한다.
//-----------------------------------------------------------------------------------------------------

//#include <stdio.h>
//#define SIZE 10
//
//struct student
//{
//	char name[10];
//	int sub1;
//	int sub2;
//	int sub3;
//	double avg;
//	struct student* nextst;
//};
//
//void input(struct student* st)
//{
//	printf("[학생 3과목 성적 처리 프로그램]\n");
//
//	while(1)
//	{
//		printf("%s 학생의 3과목 성적을 입력하세요(공란으로 구분) : ", st->name);
//		scanf_s("%d %d %d", &st->sub1, &st->sub2, &st->sub3);
//		printf("%s 학생의 3과목 성적으로 입력된 값은 %d, %d, %d입니다.\n\n", st->name, st->sub1, st->sub2, st->sub3);
//
//		st->avg = (st->sub1 + st->sub2 + st->sub3) / 3.0;
//
//		if (st->nextst == NULL)
//		{
//			break;
//		}
//
//		st = st->nextst;
//	}
//}
////퀴즈
////위의 코드를 5명의 학생의 성적을 입력받는데 구조체 배열과, 구조체 내의 포인터 변수를 활용하여 위와 같은
////결과가 나오도록 한번 프로그램을 수정을 해보세요.
//
//int main(void)
//{
//	struct student s3 = { "신은혁", 0, 0, 0, 0.0, NULL };
//	struct student s2 = { "김지영", 0, 0, 0, 0.0, &s3 };
//	struct student s1 = { "홍길동", 0, 0, 0, 0.0, &s2 };
//
//	input(&s1);
//
//	printf("%s 학생의 3과목 평균 : %.2lf입니다.\n", s1.name, s1.avg);
//	printf("%s 학생의 3과목 평균 : %.2lf입니다.\n", s2.name, s2.avg);
//	printf("%s 학생의 3과목 평균 : %.2lf입니다.\n", s3.name, s3.avg);
//
//
//	return 0;
//}