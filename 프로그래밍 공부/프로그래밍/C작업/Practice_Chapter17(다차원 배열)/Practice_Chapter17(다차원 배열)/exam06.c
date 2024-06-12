//3차원 배열 실습-1

//3차원 배열은 면(깊이), 행, 열 3개의 인덱스를 가진 배열을 의미한다.

//3차원 배열을 초기화 하고 출력까지 해보는 예제

#include <stdio.h>
#define PAGE 2			//면(깊이)의 개수에 대한 배열 크기
#define ROW 3			//행의 개수에 대한 배열 크기
#define COLUMN 5		//열의 개수에 대한 배열 크기

int main(void)
{
	//트리플 루프변수 선언 및 초기화
	int page = 0, row = 0, col = 0;
	//3차원 배열 선언 및 초기화
	int index[PAGE][ROW][COLUMN] = {
										//0면
										{
											{1,2,3,4,5},		//0행
											{6,7,8,9,10},		//1행
											{11,12,13,14,15},	//2행
										},
										//1면
										{
											{16,17,18,19,20},	//0행
											{21,22,23,24,25},	//1행
											{26,27,28,29,30},	//2행
										},
									};

	//위에서 초기화 되어진 3차원 배열의 값을 출력해보기
	//면 출력
	for (page = 0; page < PAGE; page++)
	{
		printf("[%d면] 출력\n", page + 1);
		//행 출력
		for (row = 0; row < ROW; row++)
		{
			printf("[%d행] 출력 ... ", row + 1);
			//열 출력(실제값)
			for (col = 0; col < COLUMN; col++)
			{
				printf("%2d", index[page][row][col]);		//실제 값을 출력하는 코드
				printf("[%d][%d][%d]", page, row, col);		//실제 값이 들어있는 인덱스를 출력하는 코드
			}
			printf("\n");
		}
	}
	
	return 0;
}