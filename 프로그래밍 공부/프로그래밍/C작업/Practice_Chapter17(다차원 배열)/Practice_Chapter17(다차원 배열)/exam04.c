//2차원 배열 실습-4
//2차원 배열도 1차원 배열과 같이 함수를 호출할 때, 인수값으로 사용할 수가 있다.
//함수 호출할때 1차원, 2차원 배열이든간에 둘 다 주소를 넘기는 것은 동일하다.
//배열에 들어있는 배열요소들의 값을 변경시키지 못하게 하기 위해서 const 키워드를 선언을 해주면 된다.
//const를 사용하면 함수에 배열요소를 변경을 시키지 못한다. 이 부분을 명확하게 확인해보자.

//2차원 배열을 사용하여 5개의 품목에 대한 3년간의 매출액을 배열요소로 초기화 한 후에 총 매출액을 산정 하는 프로그램 예제

//#include <stdio.h>
//#define YEAR 3			//년도수에 대한 배열 크기
//#define PRODUCT 5			//제품수에 대한 배열 크기
//#define PRODUCT_NAME 20
//
////함수 선언(매출액의 합계를 구하는 기능)
//int sum(int sale[YEAR][PRODUCT]);
//
//int main(void)
//{
//	int row = 0, col = 0, total = 0;
//	//3행 5열이 되는 2차원 배열 선언 및 데이터 값으로 초기화
//	int sale[YEAR][PRODUCT] = {
//									{2025, 353, 127, 83, 883},
//									{2026, 387, 133, 89, 907},
//									{2027, 439, 135, 92, 965},
//							  };
//
//	char product[PRODUCT][PRODUCT_NAME] = {
//												{"컴퓨터"},
//												{"모니터"},
//												{"키보드"},
//												{"마우스"},
//												{"소프트웨어"},
//										  };
//
//	//printf("컴퓨터 \t모니터 \t키보드 \t마우스 \t소프트웨어  (단위:백만원) \n");
//	for (col = 0; col < PRODUCT; col++)
//	{
//		printf("%s\t", product[col]);
//	}
//	printf("\n");
//
//	//3년간 데이터 반복 수행(외부 루프)
//	for (row = 0; row < YEAR; row++)
//	{
//		//5개의 품목 매출액 출력
//		for (col = 0; col < PRODUCT; col++)
//		{
//			printf("%d\t", sale[row][col]);
//		}
//		printf("\n");
//	}
//
//	total = sum(sale);	//함수 호출 - 총 매출액을 계산을 해서 리턴해준다.
//
//	printf("%d년간 총 매출액 : %d 백만원 \n", YEAR, total);
//
//	return 0;
//}
//
////함수의 매개변수로 넘겨져 온 2차원 배열의 원본값을 변경을 못시키도록 const를 붙였다.
//int sum(const int sale[YEAR][PRODUCT])
//{
//	int x = 0, y = 0;
//	int hap = 0;
//
//	for (x = 0; x < YEAR; x++)
//	{
//		for (y = 0; y < PRODUCT; y++)
//		{
//			hap += sale[x][y];		//매출액을 누적하고 있다.
//		}
//	}
//
//	return hap;
//}
