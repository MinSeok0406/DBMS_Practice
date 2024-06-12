//문제2
//정수형 배열 arr[LENGTH]선언 후, 초기화를 진행한다. 사용자로부터 LENGTH만큼 정수를 입력받아서
//arr배열에 저장한다. 정수형 포인터 변수 *ptr 선언 후 초기화를 한다.
//실행결과와 같이 출력되도록 프로그램을 작성하시오.

//실행결과
//정수를 입력해주세요
//arr[0] = 10
//arr[1] = 20
//arr[2] = 30
//arr[3] = 40
//arr[4] = 50
//
//ptr의 값은 00BBF7F8
//arr[0]의 주소값 = 00BBF7F8
//arr[0]의 값은 ? 10
//.....
//----------------------------------------------

//#include <stdio.h>
//#define LENGTH 5
//
//int main(void)
//{
//	int arr[LENGTH] = { 0 };
//	int* ptr = NULL;
//
//	ptr = arr;
//
//	printf("정수를 입력해주세요\n");
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("arr[%d] = ", i);
//		scanf_s("%d", &arr[i]);
//	}
//	printf("\n");
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		printf("ptr의 값은 %p\n", ptr);
//		printf("arr[%d]의 주소값 = %p\n", i, &arr[i]);
//		printf("arr[%d]의 값은 : %d\n", i, *ptr);
//		ptr++;
//	}
//	
//	return 0;
//}