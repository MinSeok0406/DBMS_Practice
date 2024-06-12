//문제3
//무한 루프를 실행하면서 사용자로부터 정수를 입력받는다. -1을 입력을 하면 루프를 빠져나오고 -1을
//입력을 할 때까지 지속적으로 정수를 입력받는다. 입력받은 정수들을 출력한다.
//초기 배열 길이를 5로 설정을 하여 동적 메모리 할당을 한다.
//realloc()함수를 이용하여 배열의 길이를 늘이도록 한다.
//------------------------------------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define SIZE 5
//
//int main(void)
//{
//	int* str = NULL;
//	int arrlen = 5;
//	int cnt = 0, num = 0;
//
//	str = (int*)malloc(sizeof(int) * SIZE);
//
//	if (str == NULL)
//	{
//		printf("프로그램을 종료합니다.\n");
//		exit(1);
//	}
//	memset(str, 0, sizeof(int) * SIZE);
//
//	while (1)
//	{
//		printf("%d번째 정수 입력 : ", cnt + 1);
//		scanf_s("%d", &str[cnt]);
//
//		if (str[cnt] == -1)
//		{
//			break;
//		}
//		
//		if (arrlen == cnt + 1)
//		{
//			arrlen += 1;
//			str = (int*)realloc(str, sizeof(int) * arrlen);
//		}
//
//		cnt++;
//	}
//
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%d ", str[i]);
//	}
//
//	free(str);
//
//	return 0;
//}