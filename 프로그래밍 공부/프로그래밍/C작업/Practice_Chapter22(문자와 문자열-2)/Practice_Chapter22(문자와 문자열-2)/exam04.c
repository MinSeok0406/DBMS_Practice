//문자열 입출력 함수 예제-4

//문자열의 길이를 계산하는 strlen()에 대한 예제
//문자열을 관련해서 사용하는 함수들은 모두 string.h파일에 정의 되어 있기 때문에 string.h을 include를 해야한다

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	int length = 0;
//	int i = 0;
//	char str[7] = "korean";
//	length = strlen(str);		//문자열의 길이를 계산
//	printf("문자열의 길이 : %d\n", length);		//문자열의 길이를 출력
//
//	//NULL문자까지 출력해보는 코드
//	for (i = 0; i <= length; i++)
//	{
//		printf("%d\n", str[i]);
//	}
//
//
//	return 0;
//}