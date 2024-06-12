//문자열 입출력 함수 예제-9

//문자열 검색
//1. 문자열 앞에서부터 특정 문자 검색 : strchr()함수를 사용한다.
//2. 문자열 마지막에서부터 특정 문자 검색 : strrchr()함수를 사용한다.
//3. 문자열에서 특정 문자열을 검색 : strstr()함수를 사용한다.

//첫 번째 방법 : 문자열 앞에서부터 특정 문자 검색을 위한 strchr()함수 이용
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[] = "korean worldcup";
//	char* pstr = NULL;		//검색할 문자를 찾아서 위치를 저장할 포인터 변수
//	char ch = ' ';
//
//	printf("문자열 : %s\n", str);
//	printf("검색할 문자 입력 : ");
//	scanf_s("%c", &ch, sizeof(ch));
//
//	//문자열에서 찾을 문자를 검색한 후 포인터 변수에 저장하는 코드
//	pstr = strchr(str, ch);
//
//	if (pstr != NULL)
//	{
//		//문자열에서 문자가 검색이 된 경우...
//		//문자를 찾았는데 형식지정자에 따라서 %c이면 한 문자를 출력하고 %s라면 찾은 문자부터 시작
//		//하는 문자열을 출력해준다.
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