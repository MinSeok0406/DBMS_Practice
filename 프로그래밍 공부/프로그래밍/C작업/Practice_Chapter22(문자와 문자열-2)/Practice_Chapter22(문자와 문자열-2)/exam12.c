//문자열 입출력 함수 예제-12

//문자열 변환 
//1. 문자열 역순 : _strrev()함수를 사용한다. 알파벳을 가지고 기준으로 하기 때문에 한글은 역순으로 출력을 하고자
//한다면 따로 함수를 만들어서 사용해야 한다.

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[] = "Good Morning!";
	//한글은 2바이트이기 때문에 역순으로 출력하기 위해서는 _strrev()는 한글은 지원하지 않으므로 따로 함수를 만들어서 사용하도록 한다.
//	//char str[] = "안녕하세요";		
//	//printf("문자열의 길이 : %d\n", sizeof(str));
//
//	printf("주어진 문자열 : %s\n", str);
//
//	_strrev(str);	//문자열을 역순으로 변환하는 함수 호출
//	printf("\n문자열을 역순으로 변환 \n");
//	printf("_strrev()함수 사용 : %s\n", str);
//
//	_strrev(str);	//역순으로 된 문자열을 다시 역순으로 변환하는 함수를 호출
//	printf("\n문자열을 원래대로 변환 \n");
//	printf("_strrev()함수 사용 : %s\n", str);
//
//
//
//	return 0;
//}