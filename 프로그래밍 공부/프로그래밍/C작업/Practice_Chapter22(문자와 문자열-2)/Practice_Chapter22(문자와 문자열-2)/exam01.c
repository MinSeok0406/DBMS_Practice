//���ڿ� ����� �Լ� ����-1

//gets_s(), puts()�� ���ؼ� ���캸��.
//gets_s() : ���ڿ��� �Է¹޴µ�, ���鵵 �� �����ϰ� ����Ű�� �Է��� �������� ���ڿ��� ����� �ִ� �Լ�
//puts() : ���ڿ��� ������ִ� �Լ�
//���� 2���� �Լ��� ������ �Լ��̸� <stdio.h>������Ͽ� ���ԵǾ� �ִ�.

//#include <stdio.h>
//
//int main(void)
//{
//	//�������
//	//char name[10] = " ";
//	//gets_s(name, sizeof(name));	//Ű����κ��� 10����Ʈ�� ���ڿ� �� ���� �Է¹���
//	//puts(name);					//�Է¹��� ���ڿ� ���
//
//	char name[20] = " ";
//	char dept[30] = " ";
//	char* ptr = NULL;
//
//	printf("���� : ");
//	ptr = gets_s(name, sizeof(name));
//	printf("name�� �ּ� : %p\n", name);
//	printf("ptr�� �����ϰ� �ִ� �ּ� : %p\n", ptr);
//
//	printf("�а� : ");
//	//������ �����̹Ƿ� �ٸ� �ּҰ��� �󸶵��� ���� �� �ִ�.
//	ptr = gets_s(dept, sizeof(dept));
//	printf("name�� �ּ� : %p\n", dept);
//	printf("ptr�� �����ϰ� �ִ� �ּ� : %p\n", ptr);
//
//	printf("\n---------------------------------------------\n");
//	printf("�Է»��� ���\n");
//	printf("���� : ");
//	puts(name);
//	printf("�а� : ");
//	puts(dept);
//
//
//
//	return 0;
//}