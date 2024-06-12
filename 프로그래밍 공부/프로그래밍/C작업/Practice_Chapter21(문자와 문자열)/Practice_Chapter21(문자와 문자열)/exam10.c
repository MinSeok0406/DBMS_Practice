//문자와 문자열 실습-10

//문자 변환 함수

//입력한 문자에 대해서 알파벳인지 검사를 하고 대문자이면 소문자로 소문자이면 대문자로 변환하는 프로그램

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int num = 0;

	printf("문자 입력 : ");
	num = getchar();

	if (isalpha(num))
	{
		printf("입력한 문자는 알파벳이 맞습니다.\n");

		if (islower(num))
		{
			num = toupper(num);		//소문자를 대문자로 변경
			printf("알파벳을 대문자 %c로 변환했습니다.\n", num);
		}
		else
		{
			num = tolower(num);		//대문자를 소문자로 변경
			printf("알파벳을 소문자 %c로 변환했습니다.\n", num);
		}
	}
	else
	{
		printf("입력한 문자는 알파벳이 아닙니다.\n");
	}

	return 0;
}