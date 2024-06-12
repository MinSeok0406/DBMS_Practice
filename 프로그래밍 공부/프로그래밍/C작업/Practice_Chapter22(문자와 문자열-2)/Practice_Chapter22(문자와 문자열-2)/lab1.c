//문제1
//▶ gets_s()함수로 문자열을 최대 30바이트까지 입력
//▶ atoi()함수로 문자열을 정수형으로 변환
//▶ do~while 문으로 프로그램을 무한 루프 실행
//▶ _getche()함수로 반복 여부를 결정하는 문자를 입력
//▶ 반복 여부는 알파벳 대소문자 구별없이 Y는 재실행, N은 종료, 그 외의 문자가 들어오면 goto문으로 이동
//▶ 실행결과와 동일하게 출력

//--------------------------------------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>		//atoi(), atol(), atof()함수를 사용하기 위해서 포함
//#include <conio.h>		//_getche()함수를 사용하기 위해 포함
//
//int main()
//{
//	char str[30] = " ";
//	int num = 0;
//	char ch = ' ';
//
//	do
//	{
//
//		printf("■ 문자열을 정수형으로 변환하는 프로그램\n");
//		printf("문자열을 30바이트 이내로 입력 : ");
//		gets_s(str, sizeof(str));
//
//		printf("입력 문자열 : \"%s\"\n", str);
//
//		num = atoi(str);
//
//		printf("문자열 → 정수형으로 변환 : %d\n", num);
//	re:
//		printf("프로그램을 계속 수행할까요 ? (Y/N) : ");
//		ch = _getche();
//
//		if (ch == 'Y' || ch == 'y')
//		{
//			printf("\n\n");
//			continue;
//		}
//		else if (ch == 'N' || ch == 'n')
//		{
//			printf("\n프로그램을 종료합니다.\n");
//			break;
//		}
//		else
//		{
//			printf("\n알파벳 입력 오류\n");
//			printf("알파벳을 다시 입력하세요...\n");
//			goto re;
//		}
//	} while (1);
//
//	return 0;
//}