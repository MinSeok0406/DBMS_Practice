//���ڿ� ����� �Լ� ����-11

//���ڿ� �˻�
//�� ��° ��� : ���ڿ� ������ Ư�� ���ڿ��� �˻��� ���� strstr()�� �̿�

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[] = "korean worldcup";
//	char* pstr = NULL;
//	char ch[5] = " ";		//���ڿ��� �˻��ϱ� ���ؼ� ���ڿ��� �����ϴ� �迭 ����
//
//	printf("���ڿ� : %s\n", str);
//	printf("�˻��� ���ڿ� �Է� : ");
//	scanf_s("%s", ch, sizeof(ch));
//
//	
//	pstr = strstr(str, ch);
//
//	if (pstr != NULL)
//	{
//		//Ư�� ���ڿ��� ã�� �����...
//		printf("ã�� ���ڿ� : %s\n", ch);
//		printf("���ڿ� %s���� \"%s\"�� �����մϴ�.\n", str, ch);
//		printf("�˻� ��� : %s\n", pstr);
//
//	}
//	else
//	{
//		printf("���ڿ� %s���� \"%s\"�� �������� �ʽ��ϴ�..\n", str, ch);
//	}
//
//	return 0;
//}