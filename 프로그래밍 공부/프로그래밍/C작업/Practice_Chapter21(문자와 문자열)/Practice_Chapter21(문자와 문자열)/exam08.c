//문자와 문자열 실습-8

//입력한 문자가 알파벳인지 먼저 검사를 진행 후, 알파벳이 대문자인지 소문자인지를 검사하는 프로그램

//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("입력 : ");
//	num = getchar();
//
//	if (isalpha(num))
//	{
//		printf("isalpha(num)의 반환값 : %d\n", isalpha(num));
//		printf("입력한 문자는 알파벳이 맞습니다.\n");
//
//		if (isupper(num))
//		{
//			printf("입력한 %c는(은) 알파벳 대문자입니다.\n", num);
//		}
//		else
//		{
//			printf("입력한 %c는(은) 알파벳 소문자입니다.\n", num);
//		}
//	}
//	else
//	{
//		printf("isalpha(num)의 반환값 : %d\n", isalpha(num));
//		printf("입력한 %c는(은) 알파벳이 아닙니다.\n", num);
//	}
//
//	return 0;
//}