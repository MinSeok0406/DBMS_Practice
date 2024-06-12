//2차원 배열 실습-2

//환자수 3명에 대한 5번의 혈압 체크 후 고혈압인지 정상인지를 확인하는 프로그램 예제

//#include <stdio.h>
//#define ROW 3
//#define COLUMN 5
//
//
//int main(void)
//{
//	int cnt = 0, sno = 201012101, total = 0, j = 0;
//	float avg = 0.0f;
//
//	int bd[ROW][COLUMN] = { 
//							{135,150,148,160,153},
//							{115,120,123,121,112},
//							{132,129,128,133,130}
//	                      };
//	printf(">> 고혈압 판정 기준 : 수축기 혈압 140 초과\n");
//	//싱글루프 방법 사용(비효율적 코드)
//	//for (cnt = 0; cnt < ROW; cnt++)
//	//{
//	//	total = bd[cnt][0] + bd[cnt][1] + bd[cnt][2] + bd[cnt][3] + bd[cnt][4];
//	//	avg = (float)total / COLUMN;	//자동 자로형 변환
//
//	//	printf("\n▶ 환자 #%d의 수축기 평균 혈압 및 판정 \n", cnt + 1);
//	//	printf("번호 : %d\n", sno++);
//	//	printf("평균 혈압 : %.2f\n", avg);
//
//	//	//혈압을 판정 코드
//	//	if (avg > 140.0)
//	//	{
//	//		printf("판정 : 고혈압입니다. 건강에 신경쓰세요\n");
//	//	}
//	//	else
//	//	{
//	//		printf("판정 : 정상입니다.\n");
//	//	}
//	//}
//
//	//더블 루프를 사용한 방법(위의 싱글루프를 활용하여 평균혈압을 구하는 방법보다 훨씬 효율성이 좋다.)
//	for (cnt = 0; cnt < ROW; cnt++)
//	{
//		for (j = 0; j < COLUMN; j++)
//		{
//			total += bd[cnt][j];
//		}
//		avg = (float)total / COLUMN;
//		printf("\n▶ 환자 #%d의 수축기 평균 혈압 및 판정 \n", cnt + 1);
//		printf("번호 : %d\n", sno++);
//		printf("평균 혈압 : %.2f\n", avg);
//
//		if (avg > 140.0)
//		{
//			printf("판정 : 고혈압입니다. 건강에 신경쓰세요\n");
//		}
//		else
//		{
//			printf("판정 : 정상입니다.\n");
//		}
//		total = 0;
//	}
//
//	return 0;
//}