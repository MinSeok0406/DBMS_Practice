//문자열 입출력 함수 예제-5

//문자열 복사
//strcpy_s() : 모든 값을 복사
//strncpy_s() : 문자열의 처음부터 시작하여 n개까지 복사

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char* str = "C_Program";		//문자열 상수로 포인터 변수에 주소가 저장됨
//	//char str[10] = "C_Program";	//문자열 상수로 배열에 저장됨
//	char data[20] = " ";			//문자열을 복사하여 저장할 배열을 초기화
//
//	//아래 포인터 변수 data는 주소만 저장하는 4바이트만 할당, 다른 문자열을 복사하기 위해서 따로
//	//방을 만들지 않기 때문에 저장할 곳이 없어서 에러가 발생한다.
//	//char* data = NULL;
//
//	strcpy_s(data, sizeof(data), str);		//문자열을 전체 복사
//	printf("%s\n", data);
//
//	strncpy_s(data, sizeof(data), str, 7);	//문자열을 처음부터 7개의 문자를 복사
//	printf("%s\n", data);
//
//
//
//	return 0;
//}