//문제1
//동적 메모리를 할당을 하는데 알파벳 소문자 a~z(25개)만큼 할당을 받아서 반복문을 이용하여
//동적 메모리에 저장을 하고 출력을 하는 프로그램을 작성하시오.

//필수 함수 : malloc(), memset(), free()

//실행결과
//abcdefghijklmnopqrstuvwxyz

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int cnt = 0;
//	char* str = NULL;
//
//	str = (char*)malloc(26 * sizeof(char));
//	memset(str, 0, sizeof(char) * 26);
//
//	//유효성 검증
//	if (str == NULL)
//	{
//		printf("동적 메모리 할당 오류 발생!\n");
//		printf("프로그램 종료. 메모리 체크 요망!\n");
//		exit(1);
//	}
//
//	for (char i = 'a'; i <= 'z'; i++)
//	{
//		str[cnt] = i;
//		cnt++;
//	}
//
//	for (int i = 0; i <= 25; i++)
//	{
//		printf("%c", str[i]);
//	}
//	printf("\n");
//
//	free(str);
//
//	return 0;
//}