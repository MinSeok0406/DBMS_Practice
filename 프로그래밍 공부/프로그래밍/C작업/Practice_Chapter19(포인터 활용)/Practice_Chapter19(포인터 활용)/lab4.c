//����4
//�Ʒ��� ���� �Լ��� �����ϰ� �������� �°� ���α׷��� �����Ͻÿ�.
//<string.h>��� ���Ͽ� �ִ� ���ڿ� �����Լ��� �̿��Ͽ� �迭 �����͸� ���� ����Ͽ� �����ϵ��� �Ѵ�.
//�Լ��� �����(����)
//int input_name(char(*name)[20]);	//���ڿ��� �Է��ϴ� ���
//int dup_check(char(*name)[20], char *temp, int cnt);	//�Է��� ���ڿ��� char�迭�� �ִ��� üũ
//void print_name(char(*name)[20], int cnt);	//2���� char�迭�� ����Ǿ��� ���ڿ��� ����ϴ� ���

//������
//> 1��° �̸� : �迬��
//> 2��° �̸� : �迬��
//@ �̸��� �̹� ��ϵǾ����ϴ�.!
//> 2��° �̸� : shin
//> 3��° �̸� : shin
//@ �̸��� �̹� ��ϵǾ����ϴ�.!
//> 3��° �̸� : �����
//> 4��° �̸� : �赿��
//> 5��° �̸� : ������
//> ....
//@ 10���� ��� �Է��ϼ̽��ϴ�.
//@ �� 10���� �̸��� �ԷµǾ����ϴ�.
//�迬��
//shin
//�����
//....
//------------------------------------------------

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#define LENGTH 20
//
//int input_name(char(*name)[20]);
//int dup_check(char(*name)[20], char* temp, int cnt);
//void print_name(char(*name)[20], int cnt);
//
//int main(void)
//{
//	char name[10][20] = { ' ' };
//	int cnt = 0;
//
//	cnt = input_name(name);		//�Լ� ȣ���� �ϴµ� �μ����� 2���� ������ �迭
//	print_name(name, cnt);
//
//	return 0;
//}
//
//int input_name(char(*name)[20])
//{
//	char temp[20] = { ' ' };	//����ڷκ��� ���ڿ��� �Է¹ޱ� ���� �迭
//	int cnt = 0;
//
//	//�̸��� �Է¹ޱ� ���ؼ� ���ѷ��� ����
//	while (1)
//	{
//		printf("%2d��° �̸� : ", cnt + 1);
//		scanf_s("%s", temp, sizeof(temp));
//
//		//�̸��� ����� �Ǿ��ִ��� Ȯ���ϴ� �ڵ�
//		if (dup_check(name, temp, cnt))
//		{
//			printf("@ �̸��� �̹� ��ϵǾ����ϴ�.\n");
//			continue;
//		}
//		//strcpy() �Լ��� �� ��� �Ѵٸ� �ݵ�� ������� ���� #define _CRT_SECURE_NO_WARNINGS�� �ڵ�� �ۼ����־�� �Ѵ�.
//		//strcpy(name[cnt], temp);		//temp�� name[cnt]�� �����Ͽ� ������
//		//strcpy_s(����Ǿ��� ��, ����Ʈ ��, ����� ��)�� ���־� ��Ʃ��������� ������ �Ѵ�.
//		strcpy_s(name[cnt], sizeof(name[cnt]), temp);
//		cnt++;
//		//Ż���ڵ� �ۼ�
//		if (cnt == 10)
//		{
//			printf("@ 10���� ��� �Է��ϼ̽��ϴ�.\n");
//			break;
//		}
//
//	}
//
//	return cnt;
//}
//
//int dup_check(char(*name)[20], char* temp, int cnt)
//{
//	int i = 0;
//	for (i = 0; i < cnt; i++)
//	{
//		if (strcmp(name[i], temp) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//void print_name(char(*name)[20], int cnt)
//{
//	printf("\n@ �� %d���� �̸��� �ԷµǾ����ϴ�.\n", cnt);
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%2d��° �̸� : %s\n", i + 1, name[i]);
//	}
//
//	return;
//}