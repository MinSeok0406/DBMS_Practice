//포인터 실습 - 2
//간접 참조 연산자(*)로 데이터를 출력해보기
//int* ptr = NULL; 선언을 하고 초기화를 했다면... ptr은 아무런 주소를 가지지 않는다.
//ptr = &num; 명령을 실행하게 되면 ptr이 num변수의 주소값을 지니게 되고 *ptr은 num변수에 저장
//되어 있는 값을 의미하게 되는 것이다.

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 500;
//	int* pnum = NULL;	//NULL로 포인터 변수를 초기화를 하지 아니하면 빌드가 안된다.
//	pnum = &num;		//num변수의 주소값을 포인터 변수 pnum에 저장하고 있다.
//	char yn = ' ';
//
//	do
//	{
//		//프로그램을 2회 이상 재실행을 해보면 각각 주소값이 달라져있다. 할당되는 메모리 주소는
//		//CPU, OS, 컴파일러, 컴퓨터의 시스템 사양 등 에 따라 할당되어지기 때문에 다를 수 밖에 없다.
//		printf("\n주소값 출력\n");
//		printf("1. 포인터 변수 pnum의 주소값 출력 : %p\n", pnum);
//		printf("2. 일반변수 num의 주소값 출력 : %p\n", &num);
//
//		printf("\n실제 데이터 값 출력\n");
//		printf("1. 포인터 변수 *pnum의 데이터 값 출력 : %d\n", *pnum);
//		printf("2. 일반변수 num의 데이터 값 출력 : %d\n", num);
//
//	re_play:
//		printf("프로그램을 다시 시작하겠습니까?(Y/N) : ");
//		scanf_s(" %c", &yn, sizeof(yn));
//
//		switch (yn)
//		{
//			case 'Y':
//			case 'y':
//				continue;
//				break;
//			case 'N':
//			case 'n':
//				printf("프로그램을 종료합니다.\n");
//				return 0;
//			default:
//				printf("\n%c는(은) 허용하지 않는 알파벳입니다.\n", yn);
//				goto re_play;
//				break;
//		}
//
//	} while (1);
//
//	return 0;
//}