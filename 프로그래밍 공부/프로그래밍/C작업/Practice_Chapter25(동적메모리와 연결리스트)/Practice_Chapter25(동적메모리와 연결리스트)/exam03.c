//동적 메모리(dynamic memory allocation)에 대한 실습-3

//키보드로 입력한 학생의 점수 만큼 동적 메모리를 할당하여, 성적을 처리하는 프로그램이다.
//입력한 점수의 총점과 평균을 구하고 평균은 소수 2째까지 출력하는 예제 실습

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int i = 0, student = 0, sum = 0;
//	int* score = NULL;
//	float avg = 0.0f;
//
//	printf("학생수 입력하세요 : ");
//	scanf_s("%d", &student);
//
//	//입력받은 student로 동적 메모리 할당
//	score = (int*)malloc(student * sizeof(int));
//
//	//동적 메모리의 값을 0으로 초기화
//	memset(score, 0, sizeof(int) * student);
//
//	//유효성 검증
//	if (score == NULL)
//	{
//		printf(">> 동적 메모리 할당 오류 발생!\n");
//		printf(">> 프로그램 종료. 메모리 상태 확인 요망\n");
//		exit(1);
//	}
//
//	//동적 메모리를 이용하여 학생의 성적을 입력 받도록 한다.
//	for (i = 0; i < student; i++)
//	{
//		printf("학생 # %d-%d 성적 입력 : ", student, (i + 1));
//		scanf_s("%d", &score[i]);
//		sum += score[i];		//입력한 다음 바로 합계처리
//	}
//	printf("총점 : %d\n\n", sum);
//
//	for (i = 0; i < student; i++)
//	{
//		printf("학생 # %d-%d 성적 출력 : %d\n", student, i + 1, score[i]);
//	}
//	avg = (float)sum / student;		//평균 산출
//	printf("평균 점수 : %.2f\n\n", avg);
//
//	free(score);
//
//	return 0;
//}