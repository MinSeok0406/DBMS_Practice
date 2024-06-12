//문자열 입출력 함수 예제-15

//문자열을 토큰(token) 단위로 분리를 하는 예제
//strtok_s()함수를 사용
//토큰(token) : 문자열에서 더 이상 나눌 수 없는 문법의 단위 요소
//토큰으로 문자열을 분리하기 위해서는 구분자(seperator, delimiter)가 필요하다.

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[] = "How are you,your condition OK!_thanks";		//해당 문자열
//	char seperator[] = " ,_!";	//구분자로 공백(" "), 콤마(,), 언더바(_), 느낌표(!)로 제시함
//	char* tok = NULL;			//분리되어지는 토큰의 위치를 저장할 포인터 변수
//	char* context = NULL;		//분리된 토큰 이후의 주소를 저장하기 위한 포인터 변수
//	int i = 1;
//
//	printf("주어진 문자열 : %s\n", str);
//	printf("구분자 : 공백(" "), 콤마(,), 언더바(_), 느낌표(!)로 제시함\n\n");
//
//	//구분자를 기준으로 문자열 분리함수 호출
//	//첫 번째, 문자열을 토큰으로 나누고자 할 때 처음에는 대상이 바로 전체 문자열이 된다.
//	tok = strtok_s(str, seperator, &context);
//
//	while (tok != NULL)
//	{
//		printf("%d번째 토큰 : %s\n", i, tok);
//		//두 번째, 다음 토큰을 구하기 위해서 NULL을 사용함(중요함)
//		tok = strtok_s(NULL, seperator, &context);
//		i++;
//	}
//
//	return 0;
//}