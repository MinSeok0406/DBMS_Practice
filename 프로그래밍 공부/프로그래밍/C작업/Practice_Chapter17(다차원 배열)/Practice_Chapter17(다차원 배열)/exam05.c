//2차원 배열 실습-5
//학급수를 입력받고 에러처리도 하고, 1~3학급의 성적 처리 프로그램 예제 실습

//#include <stdio.h>
//#define ROW 2		//학생수에 대한 배열크기
//#define COLUMN 3	//과목수에 대한 배열크기
//
//int main(void)
//{
//	int row = 0, col = 0, cnt = 0, class = 0, total = 0;
//	float avg = 0.0f;
//	int students[ROW][COLUMN] = { 0 };
//re:
//	printf("성적 처리할 학급수(1~3)를 입력하세요 : ");
//	scanf_s("%d", &class);
//
//	//학급 수를 잘못 입력한 경우 재입력을 하게끔 만드는 에러코드
//	if (class < 1 || class > 3)
//	{
//		printf("학급수를 잘못 입력하셨습니다. \n");
//		printf("학급수를 다시 입력하세요. \n\n");
//		goto re;
//	}
//
//	printf("%d개 학급에 대한 성적처리 시작함 \n", class);
//	//트리플 루프(학급 수로 인함)
//	for (cnt = 1; cnt <= class; cnt++)
//	{
//		printf("학급 %d반 성적 처리 진행\n", cnt);
//		//2명에 대한 학생 반복 수행
//		for (row = 0; row < ROW; row++)
//		{
//			printf("학급 %d반의 학생 %d의 %d개 과목 점수 입력 \n", cnt, row + 1, COLUMN);
//			//3개 과목 점수 입력
//			for (col = 0; col < COLUMN; col++)
//			{
//				printf("과목 %d의 점수 : ", col + 1);
//				scanf_s("%d", &students[row][col]);
//			}
//			//총점 구하기
//			total = students[row][0] + students[row][1] + students[row][2];
//			avg = (float)total / COLUMN;
//			printf("총점 : %d\n", total);
//			printf("평균 : %.2f\n", avg);
//		}
//	}
//	printf("전체 %d개의 학급의 성적 처리 프로그램 종료! \n", class);
//
//
//	return 0;
//}