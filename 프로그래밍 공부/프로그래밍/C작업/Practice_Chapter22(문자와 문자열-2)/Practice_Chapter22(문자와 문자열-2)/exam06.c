//문자열 입출력 함수 예제-6

//strlen(), strcpy_s(), strncpy_s()를 혼합하여 이용하는 예제

//#include <stdio.h>
//#include <string.h>
//#define LENGTH 6
//
//int main(void)
//{
//	char* str = "안녕하세요.";		//총 NULL포함해서 12바이트이고 NULL을 제외하면 11바이트가 된다.
//	char data[15] = " ";
//
//	printf("주어진 문자열 : %s\n", str);
//	printf("문자열의 길이 : %zd\n", strlen(str));
//
//	strcpy_s(data, sizeof(data), str);		//문자열 모두 복사
//	printf("\n복사한 문자열 전체 : %s\n\n", data);
//
//	/*for (int i = 0; i < strlen(data); i++)
//	{
//		printf("%d\n", data[i]);
//	}*/
//
//	strncpy_s(data, sizeof(data), str, LENGTH);
//	printf("%d개 복사한 문자열 출력 : %s\n\n", LENGTH, data);
//	printf("문자열의 길이 : %d\n", strlen(data));
//
//
//	return 0;
//}