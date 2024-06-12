//문자와 문자열 실습-7

//문자 라이브러리 함수(C언어를 만든 회사에서 프로그래머들이 조금이나마 편하게 프로그래밍을 할 수 있게끔
//제공해주는 함수들의 집합)
//1. 문자 검사 함수
//is~~~() 시작을 하는 함수들
//2. 문자 변환 함수
//to~~~() 시작을 하는 함수들

//위의 함수들은 <ctype.h> 헤더파일에 정의되어 있다.

//#include <stdio.h>
//#include <ctype.h>		//입력 라이브러리 함수를 사용하기 위해서 include를 한 것이다.
//
//int main(void)
//{
//	int num = 0;
//	printf("문자 입력 : ");
//	num = getchar();
//
//	if (isalnum(num))
//	{
//		printf("isalnum(num)의 반환값 : %d\n", isalnum(num));
//		printf("입력한 %c는(은) 숫자 또는 알파벳이다.\n", num);
//	}
//	else
//	{
//		printf("isalnum(num)의 반환값 : %d\n", isalnum(num));
//		printf("입력한 %c는(은) 숫자 또는 알파벳이 아닙니다.\n", num);
//	}
//
//	return 0;
//}