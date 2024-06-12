//문자열 입출력 함수 예제-10

//문자열 검색

//두 번째 방법 : 문자열 뒤에서부터 특정 문자 검색을 위한 strrchr()함수 이용

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[] = "korean worldcup";
//	char* pstr = NULL;		
//	char ch = ' ';
//
//	printf("문자열 : %s\n", str);
//	printf("검색할 문자 입력 : ");
//	scanf_s("%c", &ch, sizeof(ch));
//
//	//문자열을 뒤에서부터 문자를 검색하는 함수 strrchr()함수 호출
//	pstr = strrchr(str, ch);
//
//	if (pstr != NULL)
//	{
//		//문자열에서 문자가 검색이 된 경우...
//		printf("찾은 문자 : %c\n", *pstr);
//		printf("문자열 %s에는 \"%c\"가 존재합니다.\n", str, ch);
//		printf("검색 결과 : %s\n", pstr);
//	}
//	else
//	{
//		//문자열에서 문자가 검색이 안된 경우
//		printf("문자열 %s에는 \"%c\"가 존재하지 않습니다.\n", str, ch);
//	}
//
//	return 0;
//}