//포인터 실습 - 3
//일반변수의 주소를 포인터에 저장하여 포인터가 참조하는 데이터 값을 포인터 변수로 변경해보는 프로그램 예제

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 300;
//	int* pnum = NULL;
//
//	printf("num = 300, pnum = &num일 때\n");
//	pnum = &num;
//
//	printf("1.포인터 변수 pnum의 주소값 : %p\n", pnum);
//	//포인터 변수를 이용하여 pnum에 저장되어 있는 변수의 실제값을 출력한 것
//	printf("2.포인터 변수가 가리키는 *pnum의 데이터 값 : %d\n", *pnum);
//
//	printf("*pnum = 500일 때\n");
//	*pnum = 500;		//간접참조를 통하여 num의 값을 변경하는 코드
//
//	printf("1.포인터 변수 pnum의 주소값 : %p\n", pnum);
//	printf("2.포인터 변수가 가리키는 *pnum의 데이터 값 : %d\n", *pnum);
//
//
//	return 0;
//}