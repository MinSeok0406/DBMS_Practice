//����ü�� ���� �ǽ�-3

//����ü�� �����ϰ� 3���� �л��� �й�, ����, ��������, ��������, ���������� �Է¹ް� ����� �����ϴ� ���α׷�

//#include <stdio.h>
//
////����ü ����
//struct student_score
//{
//	int sno;
//	char name[10];
//	//char* name;		//�����͸� �̿��Ͽ� �Է¹ޱ� ���ؼ��� �����Ҵ��� �ؾ��Ѵ�.
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
//	//3���� �л��� �Ż������� �Է¹޾Ƽ� �հ踦 ���ϰ� ����� ����ϴ� �ݺ���
//	printf("�л��� �й�, ����, ���� �Է�\n");
//
//	for (cnt = 1; cnt <= 3; cnt++)
//	{
//		printf("\n[3�� �� %d��° �л�] \n", cnt);
//		printf("�й� : ");
//		scanf_s("%d", &student.sno);
//
//		//getchar();
//		printf("���� : ");
//		scanf_s("%s", student.name, sizeof(student.name));
//		//gets(student.name);
//
//		printf("���� : ");
//		scanf_s("%d", &student.kor);
//
//		printf("���� : ");
//		scanf_s("%d", &student.eng);
//
//		printf("���� : ");
//		scanf_s("%d", &student.math);
//
//		//�հ� ���ϱ�
//		sum = student.kor + student.eng + student.math;
//		//��� ���ϱ�
//		student.avg = sum / 3.0;
//
//		printf("\n�й� \t���� \t���� \t���� \t���� \t���� \t��� \n");
//		printf("%4d \t%s \t%d \t%d \t%d \t%d \t%.2f\n",
//			student.sno, student.name, student.kor, student.eng, student.math, sum, student.avg);
//
//	}
//
//
//
//	return 0;
//}