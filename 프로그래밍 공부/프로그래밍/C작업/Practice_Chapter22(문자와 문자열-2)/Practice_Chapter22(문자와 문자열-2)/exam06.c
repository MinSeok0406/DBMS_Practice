//���ڿ� ����� �Լ� ����-6

//strlen(), strcpy_s(), strncpy_s()�� ȥ���Ͽ� �̿��ϴ� ����

//#include <stdio.h>
//#include <string.h>
//#define LENGTH 6
//
//int main(void)
//{
//	char* str = "�ȳ��ϼ���.";		//�� NULL�����ؼ� 12����Ʈ�̰� NULL�� �����ϸ� 11����Ʈ�� �ȴ�.
//	char data[15] = " ";
//
//	printf("�־��� ���ڿ� : %s\n", str);
//	printf("���ڿ��� ���� : %zd\n", strlen(str));
//
//	strcpy_s(data, sizeof(data), str);		//���ڿ� ��� ����
//	printf("\n������ ���ڿ� ��ü : %s\n\n", data);
//
//	/*for (int i = 0; i < strlen(data); i++)
//	{
//		printf("%d\n", data[i]);
//	}*/
//
//	strncpy_s(data, sizeof(data), str, LENGTH);
//	printf("%d�� ������ ���ڿ� ��� : %s\n\n", LENGTH, data);
//	printf("���ڿ��� ���� : %d\n", strlen(data));
//
//
//	return 0;
//}