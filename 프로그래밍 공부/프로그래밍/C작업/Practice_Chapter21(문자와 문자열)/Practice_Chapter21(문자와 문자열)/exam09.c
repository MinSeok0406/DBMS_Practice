//문자와 문자열 실습-9

//제어문자를 검사한 뒤 제어 문자의 개수를 출력하는 예제
//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	int index = 0, cnt = 0;
//	char str[] = "korea \t space \n usa \t";		//제어문자가 3개
//
//	printf("char str[] = \"korea \\t space \\n usa \\t\"선언\n");
//
//	while (str[index])
//	{
//		printf("%d번째 문자 : %c\n", index, str[index]);
//
//		if (iscntrl(str[index]))
//		{
//			cnt++;
//		}
//		index++;
//	}
//	printf("\n제어문자는 모두 %d개 존재합니다.\n", cnt);
//
//	return 0;
//}