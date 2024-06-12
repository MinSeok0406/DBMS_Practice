//문자열 입출력 함수 예제-1

//gets_s(), puts()에 대해서 살펴보자.
//gets_s() : 문자열을 입력받는데, 공백도 다 포함하고 엔터키를 입력할 때까지를 문자열로 만들어 주는 함수
//puts() : 문자열을 출력해주는 함수
//위의 2개의 함수는 버퍼형 함수이면 <stdio.h>헤더파일에 포함되어 있다.

//#include <stdio.h>
//
//int main(void)
//{
//	//사용형식
//	//char name[10] = " ";
//	//gets_s(name, sizeof(name));	//키보드로부터 10바이트의 문자열 한 줄을 입력받음
//	//puts(name);					//입력받은 문자열 출력
//
//	char name[20] = " ";
//	char dept[30] = " ";
//	char* ptr = NULL;
//
//	printf("성명 : ");
//	ptr = gets_s(name, sizeof(name));
//	printf("name의 주소 : %p\n", name);
//	printf("ptr이 저장하고 있는 주소 : %p\n", ptr);
//
//	printf("학과 : ");
//	//포인터 변수이므로 다른 주소값을 얼마든지 취할 수 있다.
//	ptr = gets_s(dept, sizeof(dept));
//	printf("name의 주소 : %p\n", dept);
//	printf("ptr이 저장하고 있는 주소 : %p\n", ptr);
//
//	printf("\n---------------------------------------------\n");
//	printf("입력사항 출력\n");
//	printf("성명 : ");
//	puts(name);
//	printf("학과 : ");
//	puts(dept);
//
//
//
//	return 0;
//}