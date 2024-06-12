//문자와 문자열 실습-4

//EOF(End Of File)문자는 입력의 끝 또는 파일을 읽어 들일 때의 마지막 값을 체크하는 문자이다.
//EOF = -1이다.

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;		//정수형 변수 선언
//
//	//무한루프로 한 문자씩을 입력을 받고자 할 때는 scanf_s()함수보다 getchar()를 사용을 권장한다.
//	while (1)
//	{
//		if ((num = getchar()) != EOF)
//		{
//			putchar(num);		//입력한 문자를 출력
//		}
//		else
//		{
//			//명령 프롬프트에서 crtl + z를 누르면 곧 EOF 를 의미하는 것이다.
//			break;
//		}
//	}
//	printf("EOF : %d\n", num);
//
//
//	return 0;
//}