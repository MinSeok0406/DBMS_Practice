//문자열 입출력 함수 예제-13

//문자열을 역순으로 출력하는데 이 코드는 한글을 역순으로 출력하는 방법

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char arr[100] = " ";	//입력받을 문자열을 저장할 문자형 배열
//	char str[3] = " ";		//역순으로 출력할 한 문자열을 저장할 변수
//	int length = 0, i = 0;
//
//	printf("문자열을 입력해주세요(한글) : ");
//	scanf_s("%s", arr, sizeof(arr));
//
//	length = strlen(arr);	//문자열의 길이를 구함
//
//	//한글은 C언어에서 MS949라는 문자셋에서는 2바이트이기 때문에 %c로 출력하면 다 깨진다.
//	for (i = length; i > 0; i--);
//	{
//		if (i % 2 == 1)
//		{
//			//NULL문자
//			str[0] = arr[i - 1];	//새 문자열의 1바이트가 저장
//			printf("%s", str);
//		}
//		else
//		{
//			str[1] = arr[i - 1];	//새 문자열의 1바이트가 저장
//		}
//	}
//	printf("\n");
//
//	return 0;
//}