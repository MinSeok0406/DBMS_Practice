//포인터 활용에 대한 실습-7
//앞서 살펴본 함수 포인터는 함수가 여러 개 존재하여 실행하고자 한다면 지속적으로 해당 함수를
//함수 포인터에 대입을 해줘야 하는 코드가 여러 개 작성을 해야 하는 번거로움이 일단 존재한다.
//함수들이 많이 존재를 한다면 함수 포인터의 배열을 생각해 볼 필요가 있다.
//함수 포인터의 배열의 형식 : int (*fp[방의개수])(int, int)선언을 하면 []우선순위가 제일 높기 때문에
//먼저 주소를 저장할 방의 개수만큼 메모리에 할당하고 *가 적용이 되어 함수의 주소를 여러개 저장하여 인덱스를
//통하여 호출을 하면 된다.

//#include <stdio.h>
////함수 선언부
//void menu(void);
//int hap(int x, int y);
//int minus(int x, int y);
//int mul(int x, int y);
//int div(int x, int y);
//
//int main(void)
//{
//	int choice = 0, result = 0, x = 0, y = 0;
//	//함수 포인터의 배열 선언 및 초기화
//	int (*fp[4])(int, int) = { hap, minus, mul, div };	//함수명으로 주소값을 저장을 하는 코드
//
//	while (1)
//	{
//		menu();
//	re_input:
//		printf("연산 선택(0 ~ 4) : ");
//		scanf_s("%d", &choice);
//
//		//에러코드 처리
//		if (choice < 0 || choice > 4)
//		{
//			printf("연산 메뉴 입력값 오류\n");
//			printf("다시 선택해주세요.\n");
//			goto re_input;
//		}
//		else if (choice == 4)
//		{
//			break;
//		}
//		else
//		{
//			printf("정수 2개를 입력하세요.(예시> 10 20) : ");
//			scanf_s("%d %d", &x, &y);
//			//사용자가 입력한 값을 인덱스로 하여 함수를 호출하는 코드
//			result = fp[choice](x, y);
//			printf("연산 결과 : %d\n", result);
//		}
//		printf("연산 프로그램 수행 완료\n\n");
//
//	}
//	printf("프로그램을 종료합니다.\n\n");
//
//	return 0;
//}
//
//
//void menu(void)
//{
//	int size = 0, cnt = 0;
//	//문자형 포인터 배열을 선언 후 초기화
//	char* cal[] = { "덧셈", "뺄셈", "곱셈", "나눗셈", "종료"};
//
//	size = sizeof(cal) / sizeof(cal[0]);
//
//	//메뉴를 출력하는 코드
//	for (cnt = 0; cnt < size; cnt++)
//	{
//		printf("%d. %s \n", cnt, cal[cnt]);
//;	}
//}
//
//int hap(int x, int y)
//{
//	int result = 0;
//	printf("\n[덧셈 hap() 함수 영역]\n");
//	result = x + y;
//	return result;
//}
//int minus(int x, int y)
//{
//	int result = 0;
//	printf("\n[뺄셈 minus() 함수 영역]\n");
//	result = x - y;
//	return result;
//}
//int mul(int x, int y)
//{
//	int result = 0;
//	printf("\n[곱셈 mul() 함수 영역]\n");
//	result = x * y;
//	return result;
//}
//int div(int x, int y)
//{
//	int result = 0;
//	printf("\n[나눗셈 div() 함수 영역]\n");
//	result = x / y;
//	return result;
//}