//문제-3
//사용자로부터 문자열을 입력받아서 해당 문자열의 길이를 구하는 프로그램을 작성하시오.
//단, string.h파일을 포함하여 헤더 파일에 있는 함수 strlen()를 이용하여 길이를 구하시오
//반복문은 사용하지 않도록 한다.
//실행결과
//문자열을 입력하세요 : abcde
//입력하신 문자열의 길이 : 5개
//---------------------------------------------------------------------------

//#include <stdio.h>
//#include <string.h>
//#define LENGTH 20
//
//int main(void) {
//
//	char str[LENGTH] = "";
//	char str2[] = { NULL };
//	int length = 0;
//
//	printf("문자열을 입력하세요 : ");
//	scanf_s("%s", str, sizeof(str));
//
//	printf("입력하신 str의 길이 : %zd개\n", strlen(str));
//	printf("입력하신 str2의 길이 : %zd개\n", strlen(str2));
//
//	//입력한 문자열의 마지막 문자를 삭제를 하고 출력하는 코드
//	length = strlen(str);
//	if (length > 0)
//	{
//		str[length - 1] = '\0';
//	}
//	printf("마지막 한 문자를 삭제한 후 출력\n");
//	printf("str의 값 : %s\n\n", str);
//
//
//	return 0;
//}
//퀴즈
//한글을 입력하면 마지막 한글 한자를 삭제하면서 제대로 출력되는 위의 프로그램을 수정하시오.