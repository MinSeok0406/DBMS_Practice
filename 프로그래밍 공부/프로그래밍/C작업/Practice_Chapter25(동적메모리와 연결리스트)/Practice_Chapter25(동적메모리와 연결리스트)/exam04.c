//���� �޸�(dynamic memory allocation)�� ���� �ǽ�-4

//����ü�� ������ �� �ִ� ���� �޸� �Ҵ翡 ���� ���� �ǽ�

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////����ü ����
//struct STUDENT
//{
//	int sno;
//	char name[12];
//	char dept[30];
//};
//
//int main(void)
//{
//	int i = 0;
//	struct STUDENT* ptr = NULL;
//
//	//����ü ���� �޸� �Ҵ�
//	ptr = (struct STUDENT*)malloc(sizeof(struct STUDENT) * 3);
//
//	//����ü�� �������� �Ҵ�ÿ� malloc()�� �̿��ϸ� memset()�� ũ�⸸ŭ �ʱ�ȭ�� ����� �Ѵ�.
//	memset(ptr, 0, sizeof(struct STUDENT) * 3);
//
//	//���� �޸� ���(���� �Է��� �ϴ� �ڵ�)
//	ptr[0].sno = 20210911;
//	strcpy_s(ptr[0].name, sizeof(ptr[0].name), "������");
//	strcpy_s(ptr[0].dept, sizeof(ptr[0].dept), "�����а�");
//
//	ptr[1].sno = 20210912;
//	strcpy_s(ptr[1].name, sizeof(ptr[1].name), "�踻��");
//	strcpy_s(ptr[1].dept, sizeof(ptr[1].dept), "�����а�");
//
//	ptr[2].sno = 20210913;
//	strcpy_s(ptr[2].name, sizeof(ptr[2].name), "�迬��");
//	strcpy_s(ptr[2].dept, sizeof(ptr[2].dept), "�����а�");
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("�й� : %d\n", ptr[i].sno);
//		printf("���� : %s\n", ptr[i].name);
//		printf("�а� : %s\n\n", ptr[i].dept);
//	}
//	free(ptr);
//
//	return 0;
//}