//문제2
//구조체 선언과 멤버들을 선언 : 품목, 수량, 단가, 금액
//구조체 변수는 크기가 3인 배열로 선언한다.
//for문을 사용하여 3개의 상품을 각각 입력을 받는다.
//금액 = 수량 * 단가

//#include <stdio.h>
//#include <string.h>
//#define SIZE 3
//#define LIST_SIZE 20
//
//struct Economic
//{
//	char list[LIST_SIZE];
//	int num;
//	int price;
//	int money;
//};
//
//int main(void)
//{
//	struct Economic test[SIZE] = {
//									{" ", 0,0,0},
//									{" ", 0,0,0},
//									{" ", 0,0,0} 
//								 };
//
//	printf("■ 구조체 배열을 사용하여 품목 3개를 처리하는 프로그램\n");
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%d번째 품목의 품목, 수량, 단가 입력\n", i + 1);
//		printf("품목 : ");
//		scanf_s("%s", test[i].list, sizeof(test[i].list));
//		printf("수량 : ");
//		scanf_s("%d", &test[i].num);
//		printf("단가 : ");
//		scanf_s("%d", &test[i].price);
//		test[i].money = test[i].num * test[i].price;
//	}
//	printf("\n");
//
//	printf("[품목 3개의 수량, 단가, 금액 출력]\n");
//	printf("상품명 \t수량 \t단가 \t금액(천 원)\n");
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%s \t %d \t %d \t %d\n", test[i].list, test[i].num, test[i].price, test[i].money);
//	}
//	printf("=====================================================================\n");
//
//	return 0;
//}