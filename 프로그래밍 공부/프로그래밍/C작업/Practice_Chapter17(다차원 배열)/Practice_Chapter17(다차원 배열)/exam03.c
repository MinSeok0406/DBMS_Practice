//2차원 배열 실습-3

//사용자로부터 2명의 학생의 성명, 그리고 학생 각각의 3개의 과목을 입력받아서 총점과 평균을 구하는 프로그램 예제

//#include <stdio.h>
//#define NAME 20		//학생의 성명을 입력받을 문자배열의 크기
//#define ROW 2		//학생수 2명에 대한 배열 크기
//#define COLUMN 3	//과목수에 대한 배열 크기
//
//int main(void)
//{
//	int row = 0, col = 0, total = 0, i = 0, j = 0;
//	float avg = 0.0f;
//	char name[NAME] = { ' ' };				//학생의 이름 저장
//	int students[ROW][COLUMN] = { 0 };		//학생의 점수 저장
//
//	//학생 2명에 대한 반복 수행-외부루프
//	for (row = 0; row < ROW; row++)
//	{
//		printf("▶ 학생 %d의 성명과 3개의 과목 점수를 입력 \n", row + 1);
//		//성명 입력 코드
//		printf("%d.성명 : ", row + 1);
//		scanf_s("%s", name, sizeof(name));
//
//		//내부루프 - 3개의 과목을 입력 받는 코드
//		for (col = 0; col < COLUMN; col++)
//		{
//			printf("과목 %d의 점수 : ", col + 1);
//			//2차원 배열에서 students[][]는 변수와 동일하며, students, students[] 이 두개는 주소를 가지고 있다.
//			scanf_s("%d", &students[row][col]);
//		}
//		printf("\n");
//		//총점 구하는 코드
//		//첫 번째 코드-상당히 비효율적이다. 데이터 양이 많다면 계속 더해야 한다.
//		//total = students[row][0] + students[row][1] + students[row][2];
//		for (i = 0; i < COLUMN; i++)
//		{
//			total += students[row][i];
//		}
//		//아래코드는 평균을 구하는데 첫 번째 방법은 유지보수함에 있어 매우 곤란하다.
//		//두 번째 방법은 기호상수값만 변경하면 되므로 유지보수함에 있어 편리하다.
//		//avg = total / 3.0;			//첫 번째 방법
//		avg = (float)total / COLUMN;	//두 번째 방법
//
//		//학생의 성명, 총점, 평균을 출력하는 코드
//		printf("%s의 성적 현황 \n", name);
//		printf("총점 : %d\n", total);
//		printf("평균 : %.2f\n\n", avg);
//		total = 0;
//	}
//	printf("전체 %d명의 성적 처리 후 프로그램 종료됨\n", ROW);
//	return 0;
//}