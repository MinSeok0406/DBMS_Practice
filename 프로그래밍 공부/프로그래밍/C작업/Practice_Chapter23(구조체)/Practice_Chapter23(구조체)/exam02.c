//구조체에 대한 실습-2

//#include <stdio.h>
//#include <string.h>
//
////구조체 선언
////아래와 같이 구조체를 선언한다고 해서 사용할 수 있는게 아니다.왜? 메모리에 할당이 안되
////었기 때문이다.
//struct student
//{
//	int sno;		//학번
//	char name[10];	//이름
//	float avg;		//평균점수
//};
//
//
//int main(void)
//{
//	//아무리 구조체 변수라고 하더라도 반드시 초기화를 해야 한다.
//	struct student st1 = {0, " ", 0.0f};
//	//printf("%d\n", st1.sno);
//	//20바이트가 나온다. 이유는 이전 강의 설명을 했다. 2바이트는 패딩영역이다.
//	//printf("%d\n", sizeof(st1));
//
//	//구조체 멤버변수들의 출력
//	printf("\n구조체 멤버 초기화 값 출력\n");
//	printf("학번 : %d\n", st1.sno);
//	printf("성명 : %s\n", st1.name);
//	printf("점수 : %.2f\n", st1.avg);
//
//	//접근(멤버)연산자 .를 이용하여 구조체 멤버(필드)에 값을 할당
//	st1.sno = 20210001;
//	//구조체의 멤버이기는 하나 배열은 포인터 상수이기 때문에 다른 문자열 상수를 가르칠 수가 없다.
//	//st1.name = "홍길동";
//	//문자형 배열은 아래와 같이 값을 복사하는 함수를 이용하도록 한다.
//	strcpy_s(st1.name, sizeof(st1.name), "장민석");
//	st1.avg = 83.33;
//
//	//구조체 멤버변수들의 출력
//	printf("\n구조체 멤버 출력\n");
//	printf("학번 : %d\n", st1.sno);
//	printf("성명 : %s\n", st1.name);
//	printf("점수 : %.2f\n", st1.avg);
//
//
//	return 0;
//}