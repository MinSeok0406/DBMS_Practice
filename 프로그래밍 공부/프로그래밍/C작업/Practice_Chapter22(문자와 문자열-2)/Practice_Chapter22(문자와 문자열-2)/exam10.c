//���ڿ� ����� �Լ� ����-10

//���ڿ� �˻�

//�� ��° ��� : ���ڿ� �ڿ������� Ư�� ���� �˻��� ���� strrchr()�Լ� �̿�

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[] = "korean worldcup";
//	char* pstr = NULL;		
//	char ch = ' ';
//
//	printf("���ڿ� : %s\n", str);
//	printf("�˻��� ���� �Է� : ");
//	scanf_s("%c", &ch, sizeof(ch));
//
//	//���ڿ��� �ڿ������� ���ڸ� �˻��ϴ� �Լ� strrchr()�Լ� ȣ��
//	pstr = strrchr(str, ch);
//
//	if (pstr != NULL)
//	{
//		//���ڿ����� ���ڰ� �˻��� �� ���...
//		printf("ã�� ���� : %c\n", *pstr);
//		printf("���ڿ� %s���� \"%c\"�� �����մϴ�.\n", str, ch);
//		printf("�˻� ��� : %s\n", pstr);
//	}
//	else
//	{
//		//���ڿ����� ���ڰ� �˻��� �ȵ� ���
//		printf("���ڿ� %s���� \"%c\"�� �������� �ʽ��ϴ�.\n", str, ch);
//	}
//
//	return 0;
//}