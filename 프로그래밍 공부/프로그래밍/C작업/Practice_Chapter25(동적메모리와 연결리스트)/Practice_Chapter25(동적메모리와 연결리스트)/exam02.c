//동적 메모리(dynamic memory allocation)에 대한 실습-2

//점수 3개를 저장할 동적 메모리 할당해서 초기화를 진행하고 그 값을 출력하는 프로그램 예제실습

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int i = 0;
//	int* score = NULL;
//
//	//동적 메모리를 할당(12바이트가 힙에 할당)
//	score = (int*)malloc(3 * sizeof(int));
//
//	//동적 메모리 할당시 메모리가 부족하여 할당 되지 않으면, malloc()함수는 NULL리턴
//	//유효성 검증(필수)
//	if (score == NULL)
//	{
//		printf("동적 메모리 할당 오류 발생\n");
//		printf("프로그램을 종료합니다. 메모리 상태를 확인해주세요.\n");
//		exit(1);	//비정상 종료
//	}
//
//	//동적 메모리 초기화
//	memset(score, 0, sizeof(int) * 3);
//	printf("초기화 된 값 : %d, %d, %d\n\n", score[0], score[1], score[2]);
//
//	//동적 메모리 사용을 해서 값을 대입
//	score[0] = 97;
//	score[1] = 100;
//	score[2] = 30;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d 번째 점수 : %d\n", (i + 1), score[i]);
//	}
//
//	free(score);		//메모리 해제
//
//	return 0;
//}