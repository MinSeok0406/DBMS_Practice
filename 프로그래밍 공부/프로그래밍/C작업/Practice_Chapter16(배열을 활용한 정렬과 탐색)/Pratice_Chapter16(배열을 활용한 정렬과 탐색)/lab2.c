//문제2
//사용자에게 문자열을 입력받아서 해당 문자열에 포함되어진 문자를 오름차순으로 정렬하는 프로그램을 작성하시오.
//배열의 LENGTH 64로 한정한다. 버블 정렬 알고리즘을 사용하여야 한다.
//실행결과
//문자열을 입력하세요 : tipsware
//오름차순으로 정렬된 문자열 : aeiprstw
//-----------------------------------------------------------------------

//#include <stdio.h>
//#include <string.h>		//strlen()를 사용하기 위해서 포함
//#define LENGTH 64
//
//int main(void)
//{
//	char str[LENGTH] = " ";		//문자열의 초기화는 ""로 한다.
//	char temp = ' ';
//	int length = 0;
//
//	printf("문자열을 입력하세요 : ");
//	scanf_s("%s", str, LENGTH);
//
//	//문자열의 길이를 구하는 코드
//	length = strlen(str);
//	//printf("문자열의 길이 : %d", length);
//
//	//총 비교 단계는 문자열의 길이 -1만큼이다.
//	for (int i = 0; i < length - 1; i++)
//	{
//		for (int j = 0; j < length - 1 - i; j++)
//		{
//			if (str[j] > str[j + 1])
//			{
//				temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("오름차순으로 정렬된 문자열 : %s\n\n", str);
//
//	return 0;
//}