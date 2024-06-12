//문자열 입출력 함수 예제-14

//문자열을 알파벳 대문자 또는 소문자로 한번에 변환시키는 함수
// _strupr_s() : 대문자로 문자열을 다 변환
// _strlwr_s() : 소문자로 문자열을 다 변환

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[100] = " ";
//
//	printf("영문자열를 입력하세요 : ");
//	gets_s(str, sizeof(str));
//
//	printf("입력한 문자열 : ");
//	puts(str);
//
//	_strupr_s(str, sizeof(str));		//입력한 문자열을 모두 대문자로 변환시키는 함수 호출
//	printf("\n입력한 알파벳을 모두 대문자로 변환\n");
//	printf("대문자로 변한(_strupr_s()함수 사용)된 문자열 : %s\n", str);
//
//
//	_strlwr_s(str, sizeof(str));		//입력한 문자열을 모두 소문자로 변환시키는 함수 호출
//	printf("\n입력한 알파벳을 모두 소문자로 변환\n");
//	printf("소문자로 변한(_strlwr_s()함수 사용)된 문자열 : %s\n", str);
//
//
//	return 0;
//}