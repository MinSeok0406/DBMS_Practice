//���� �޸�(dynamic memory allocation)�� ���� �ǽ�-5

//���� ����ü�� ����Ͽ� Ű����� �Է��� ���� ������ŭ ������ ������ �Է¹޾Ƽ� �� ������
//������ �� ȭ�鿡 ����ϴ� ���α׷�. ���� ������ �ԷµǸ� ���α׷� ���ᰡ �Ǵ� ����

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct
//{
//	char subject_name[30];		//���� �̸�
//	int hakjum;					//���� ����
//} ST;
//
//
//int main(void)
//{
//	ST* t_zone = NULL;
//	int sum = 0, i = 0, subject_cnt = 0;
//
//	printf("��û ���� �Է� : ");
//	scanf_s("%d", &subject_cnt);
//
//	if (subject_cnt <= 0)
//	{
//		printf("0�̰ų� ������ ������� �ʽ��ϴ�.\n");
//		printf("���α׷� ����\n");
//		exit(1);
//	}
//	int ch = getchar();
//
//	//���� �޸� �Ҵ�
//	t_zone = (ST*)malloc(sizeof(ST) * subject_cnt);
//	//�ʱ�ȭ
//	memset(t_zone, 0, sizeof(ST) * subject_cnt);
//
//	//��ȿ�� ����
//	if (t_zone == NULL)
//	{
//		printf(">>���� �޸� �Ҵ� ����\n");
//		exit(1);
//	}
//
//	for (i = 0; i < subject_cnt; i++)
//	{
//		printf("��û ���� : ");
//		gets_s(t_zone[i].subject_name, sizeof(t_zone[i].subject_name));
//
//		printf("��û ���� : ");
//		scanf_s("%d", &t_zone[i].hakjum);
//
//		ch = getchar();
//
//		sum += t_zone[i].hakjum;
//	}
//
//	printf("\n��û�� ���� \t\t\t���� \n");
//	for (i = 0; i < subject_cnt; i++)
//	{
//		printf("%s \t\t\t%2d \n", t_zone[i].subject_name, t_zone[i].hakjum);
//	}
//	printf("��û�Ͻ� �� ���� : %d\n", sum);
//
//	free(t_zone);
//
//	return 0;
//}