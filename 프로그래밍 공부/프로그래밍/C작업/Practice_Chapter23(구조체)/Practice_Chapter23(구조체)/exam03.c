//구조체에 대한 실습-3

//구조체를 선언하고 3명의 학생의 학번, 성명, 국어점수, 영어점수, 수학점수를 입력받고 평균을 산출하는 프로그램

//#include <stdio.h>
//
////구조체 선언
//struct student_score
//{
//	int sno;
//	char name[10];
//	//char* name;		//포인터를 이용하여 입력받기 위해서는 동적할당을 해야한다.
//	int kor;
//	int eng;
//	int math;
//	float avg;
//};
//
//int main(void)
//{
//	struct student_score student = { 0, " ", 0,0,0,0.0f };
//	int cnt = 0, sum = 0;
//	/*char n[10] = " ";
//	student.name = n;*/
//	//3명의 학생의 신상정보를 입력받아서 합계를 구하고 평균을 출력하는 반복문
//	printf("학생별 학번, 성명, 성적 입력\n");
//
//	for (cnt = 1; cnt <= 3; cnt++)
//	{
//		printf("\n[3명 중 %d번째 학생] \n", cnt);
//		printf("학번 : ");
//		scanf_s("%d", &student.sno);
//
//		//getchar();
//		printf("성명 : ");
//		scanf_s("%s", student.name, sizeof(student.name));
//		//gets(student.name);
//
//		printf("국어 : ");
//		scanf_s("%d", &student.kor);
//
//		printf("영어 : ");
//		scanf_s("%d", &student.eng);
//
//		printf("수학 : ");
//		scanf_s("%d", &student.math);
//
//		//합계 구하기
//		sum = student.kor + student.eng + student.math;
//		//평균 구하기
//		student.avg = sum / 3.0;
//
//		printf("\n학번 \t성명 \t국어 \t영어 \t수학 \t총점 \t평균 \n");
//		printf("%4d \t%s \t%d \t%d \t%d \t%d \t%.2f\n",
//			student.sno, student.name, student.kor, student.eng, student.math, sum, student.avg);
//
//	}
//
//
//
//	return 0;
//}