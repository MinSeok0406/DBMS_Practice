//포인터 실습 - 1
//포인터 : 메모리 주소를 저장하는 변수를 포인터 변수라고 칭한다. 메모리 주소는 유일한(unique) 값이다.
//아울러, 포인터는 포인터 변수 자체로써의 메모리 공간 4바이트를 할당을 따로 받는다.
//프로그래머가 변수나 배열을 선언하면 CPU스케쥴러, OS, 컴파일러 이 3개의 제어에 따라 메모리에 빈 공간에
//데이터 타입(자료형)의 크기만큼 할당해준다.

//#include <stdio.h>
//
//int main(void)
//{
//	//문자와 정수
//	char ch = 'A';					//1바이트
//	short s_num = 100;				//2바이트
//	int i_num = 1000;				//4바이트
//	long l_num = 10000L;			//4바이트
//	long long ll_num = 11111111;	//8바이트
//	//실수
//	float f_real_num = 10.2f;		//4바이트
//	double d_real_num = 100.7777;	//8바이트
//
//	//배열 선언
//	//배열명은 주소값이다. 포인터 상수이다.
//	int arr1[3] = { 10,20,30 };
//	int arr2[3] = { 40,50,60 };
//	int* parr = arr1;
//	parr = arr2;
//	//배열명은 포인터 상수이기 때문에 아래와 같은 코드는 허용이 되질 않는다.
//	//arr1 = arr2;
//	//arr1 = parr;
//
//	printf("arr의 메모리 주소 : %p\n", &arr1);
//	printf("포인터 변수 parr에 저장되어 있는 주소값 : %p\n", parr);
//	printf("포인터 변수 parr의 메모리 주소 : %p\n", &parr);
//	printf("포인터 변수 parr가 저장하고 있는 주소의 실제 값 : %d\n", *parr);
//	printf("포인터 변수 parr의 바이트 크기 : %d\n", sizeof(parr));
//	printf("------------------------------------------------------------\n");
//
//	//포인터 변수 선언
//	char* pch = &ch;
//	printf("ch의 메모리 주소 : %p\n", &ch);
//	printf("포인터 변수 pch에 저장되어 있는 주소값 : %p\n", pch);
//	printf("포인터 변수 pch의 메모리 주소 : %p\n", &pch);
//	printf("포인터 변수 pch가 저장하고 있는 주소의 실제 값 : %d\n", *pch);
//	printf("포인터 변수 pch가 저장하고 있는 주소의 실제 값 : %c\n", *pch);
//	printf("포인터 변수 pch의 바이트 크기 : %d\n", sizeof(pch));
//
//	printf("------------------------------------------------------------\n");
//	//포인터 변수를 선언할 때, 어떠한 타입을 저장할 것인지를 확인하고 같은 데이터 타입으로 포인터 변수를 선언해야 한다.
//	int* pint = &i_num;
//	printf("i_num의 메모리 주소 : %p\n", &i_num);
//	printf("포인터 변수 pint에 저장되어 있는 주소값 : %p\n", pint);
//	printf("포인터 변수 pint의 메모리 주소 : %p\n", &pint);
//	printf("포인터 변수 pint가 저장하고 있는 주소의 실제 값 : %d\n", *pint);
//	printf("포인터 변수 pint의 바이트 크기 : %d\n", sizeof(pint));
//
//	printf("------------------------------------------------------------\n");
//	long long* pllong = &ll_num;
//	printf("ll_num의 메모리 주소 : %p\n", &ll_num);
//	printf("포인터 변수 pllong에 저장되어 있는 주소값 : %p\n", pllong);
//	printf("포인터 변수 pllong의 메모리 주소 : %p\n", &pllong);
//	printf("포인터 변수 pllong가 저장하고 있는 주소의 실제 값 : %lld\n", *pllong);
//	printf("포인터 변수 pllong의 바이트 크기 : %d\n", sizeof(pllong));
//
//	printf("------------------------------------------------------------\n");
//	float* pf_num = &f_real_num;
//	printf("f_real_num의 메모리 주소 : %p\n", &f_real_num);
//	printf("포인터 변수 pf_num에 저장되어 있는 주소값 : %p\n", pf_num);
//	printf("포인터 변수 pf_num의 메모리 주소 : %p\n", &pf_num);
//	printf("포인터 변수 pf_num가 저장하고 있는 주소의 실제 값 : %.1f\n", *pf_num);
//	printf("포인터 변수 pf_num의 바이트 크기 : %d\n", sizeof(pf_num));
//
//	return 0;
//}