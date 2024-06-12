//배열에 대한 실습-2
//배열이름(배열명)은 곧 주소다.(포인터 상수)
//배열이름을 이용하여 주소를 출력해보자.


//#include <stdio.h>
//
//int main(void) {
//
//	//기본형 데이터 타입들의 배열 선언만 한다.
//	char char_name[10] = { "ABCDEFGHI" };					//10바이트가 생성(1바이트 * 10 = 10바이트)
//	short num_short[10] = { 0 };				//20바이트가 생성(2바이트 * 10 = 20바이트)
//	int num_int[10] = { 0 };					//40바이트가 생성(4바이트 * 10 = 40바이트)
//	//int num_int2[10] = { 0 };
//	long num_long[10] = { 0 };					//40바이트가 생성(4바이트 * 10 = 40바이트)
//	long long num_long_long[10] = { 0 };		//80바이트가 생성(8바이트 * 10 = 80바이트)
//	float real_num_float[10] = { 0.0f };		//40바이트가 생성(4바이트 * 10 = 40바이트)
//	double real_num_double[10] = { 0.0 };		//80바이트가 생성(8바이트 * 10 = 80바이트)
//	int* int_ptr = NULL;						//4바이트가 생성, 포인터 변수다.
//
//	int i = 0;
//
//	//배열명은 포인터 상수이기 때문에 다른 배열주소를 저장할 수가 없다.
//	//num_int2 = num_int;
//	//포인터 변수이기 때문에 배열의 주소를 저장할 수가 있다.
//	int_ptr = num_int;
//
//	//char_name[i]은 곧 변수와 동일하다. 포인터 변수에서도 *int_ptr과 동일하다.
//	printf("============================================================\n");
//	printf("char타입은 1바이트씩 증가한다.\n");
//	//char_name 배열명은 곧 주소를 나타내는데 배열의 0번째 인덱스의 주소와 항상 일치한다.
//	printf("char_name(주소) : %p\n", char_name);
//	//아래는 char_name배열의 문자열 값을 출력하는 코드다.
//	printf("char_name(문자열 값) : %s\n", char_name);
//
//
//	for (i = 0; i < sizeof(char_name) / sizeof(char); i++)
//	{
//		printf("char_name[%d]값(주소) : %p\n", i, &char_name[i]);
//	}
//	printf("============================================================\n");
//
//	printf("short타입은 2바이트씩 증가한다.\n");
//	for (i = 0; i < sizeof(num_short) / sizeof(short); i++)
//	{
//		printf("num_short[%d]값 : %p\n", i, &num_short[i]);
//	}
//	printf("============================================================\n");
//
//	printf("int타입은 4바이트씩 증가한다.\n");
//	for (i = 0; i < sizeof(num_int) / sizeof(int); i++)
//	{
//		printf("num_int[%d]값 : %p\n", i, &num_int[i]);
//	}
//	printf("============================================================\n");
//
//	printf("long타입은 4바이트씩 증가한다.\n");
//	for (i = 0; i < sizeof(num_long) / sizeof(long); i++)
//	{
//		printf("num_long[%d]값 : %p\n", i, &num_long[i]);
//	}
//	printf("============================================================\n");
//
//	printf("long long타입은 8바이트씩 증가한다.\n");
//	for (i = 0; i < sizeof(num_long_long) / sizeof(long long); i++)
//	{
//		printf("num_long_long[%d]값 : %p\n", i, &num_long_long[i]);
//	}
//	printf("============================================================\n");
//
//	printf("float타입은 4바이트씩 증가한다.\n");
//	for (i = 0; i < sizeof(real_num_float) / sizeof(float); i++)
//	{
//		printf("real_num_float[%d]값 : %p\n", i, &real_num_float[i]);
//	}
//	printf("============================================================\n");
//
//	printf("double타입은 8바이트씩 증가한다.\n");
//	for (i = 0; i < sizeof(real_num_double) / sizeof(double); i++)
//	{
//		printf("real_num_double[%d]값 : %p\n", i, &real_num_double[i]);
//	}
//	printf("============================================================\n");
//
//	printf("포인터 int_ptr의 바이트 수 : %d\n", sizeof(int_ptr));
//	//포인터 변수로 배열의 주소를 저장한 후 포인터 변수를 이용하여 출력하는 방법
//	printf("int* 타입은 4바이트씩 증가한다.\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("int_ptr[%d]값 : %d\n", i, *int_ptr);
//		//int_ptr 포인터 변수 자체가 주소를 저장하기 때문에 &를 붙일 이유가 없다.
//		printf("int_ptr[%d]값(주소) : %p\n", i, int_ptr);
//		int_ptr++;		//포인터 위치 증가(4바이트씩 증가, 왜? 이유는 데이터 타입이 int* 타입)
//	}
//	printf("============================================================\n");
//
//
//	return 0;
//}