//문자열 입출력 함수 예제-11

//문자열 검색
//세 번째 방법 : 문자열 내에서 특정 문자열을 검색할 때는 strstr()을 이용

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[] = "korean worldcup";
//	char* pstr = NULL;
//	char ch[5] = " ";		//문자열을 검색하기 위해서 문자열을 저장하는 배열 선언
//
//	printf("문자열 : %s\n", str);
//	printf("검색할 문자열 입력 : ");
//	scanf_s("%s", ch, sizeof(ch));
//
//	
//	pstr = strstr(str, ch);
//
//	if (pstr != NULL)
//	{
//		//특정 문자열을 찾은 경우라면...
//		printf("찾은 문자열 : %s\n", ch);
//		printf("문자열 %s에는 \"%s\"가 존재합니다.\n", str, ch);
//		printf("검색 결과 : %s\n", pstr);
//
//	}
//	else
//	{
//		printf("문자열 %s에는 \"%s\"가 존재하지 않습니다..\n", str, ch);
//	}
//
//	return 0;
//}