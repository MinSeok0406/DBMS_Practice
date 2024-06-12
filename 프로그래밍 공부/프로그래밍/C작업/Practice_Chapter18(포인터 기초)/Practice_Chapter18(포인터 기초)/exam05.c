//포인터 실습 - 5
//포인터 사용에 따른 주의 사항에 대해서 직접 실습을 해본다.

//1. 가장 많은 포인터의 오류가 포인터의 초기화를 미수행 했을때....

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 103;
//	int* pnum = NULL;
//
//	pnum = &num;
//
//	printf("int num = 103;\n");
//	printf("int* pnum = NULL;\n");
//	printf("pnum = &num;\n");
//
//	if (pnum != NULL)
//	{
//		printf("pnum은 유효한 포인터\n");
//		printf("1. 포인터 pnum의 주소값 : %p\n", pnum);
//		printf("2. 포인터 pnum이 가리키는 주소의 실제값 : %d\n", *pnum);
//	}
//	else
//	{
//		printf("소스 코드 //pnum = &num; 처럼 주석 처리한 경우\n");
//		printf("pnum은 유효하지 않은 포인터\n");
//	}
//	
//	return 0;
//}