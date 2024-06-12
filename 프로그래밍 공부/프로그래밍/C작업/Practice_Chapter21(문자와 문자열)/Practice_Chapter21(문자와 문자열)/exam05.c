//문자와 문자열 실습-5

//직접형 표준 입출력 함수
//_getch() : 에코(echo)기능을 제공하지 않는 직접형 입력함수이므로 사용자가 입력한 문자를 화면에 표식하지 아니한다.
//_getche() : 에코(echo)기능을 제공하는 직접형 입력함수이므로 사용자가 입력한 문자를 화면에 표식해준다.
//_putch() : 화면에 한 문자를 출력해주는 직접형 출력함수
//위의 3개의 함수는 conio.h파일에 정의가 되어 있으며 반드시 위 함수를 사용하기 위해서 conio.h파일을 include를 해야 한다.
//직접형 표준 입출력 함수는 버퍼를 이용하지 않는다.

//#include <stdio.h>
//#include <conio.h>
//
//int main(void)
//{
//	int munja = 0;
//
//	printf("1. _getch() 함수 사용\n");
//	printf("문자 입력 : ");
//	munja = _getch();		//에코 기능이 없다. 화면에 표식하지 아니한다.
//	printf("\n문자 출력 : ");
//	_putch(munja);
//	printf("\n");
//
//	printf("\n\n2. _getche() 함수 사용\n");
//	printf("문자 입력 : ");
//	munja = _getche();		//에코 기능이 있다. 화면에 입력한 문자가 표식된다.
//	printf("\n문자 출력 : ");
//	_putch(munja);
//	printf("\n");
//
//
//	return 0;
//}