//���ڿ� ���ڿ� �ǽ�-10

//���� ��ȯ �Լ�

//�Է��� ���ڿ� ���ؼ� ���ĺ����� �˻縦 �ϰ� �빮���̸� �ҹ��ڷ� �ҹ����̸� �빮�ڷ� ��ȯ�ϴ� ���α׷�

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int num = 0;

	printf("���� �Է� : ");
	num = getchar();

	if (isalpha(num))
	{
		printf("�Է��� ���ڴ� ���ĺ��� �½��ϴ�.\n");

		if (islower(num))
		{
			num = toupper(num);		//�ҹ��ڸ� �빮�ڷ� ����
			printf("���ĺ��� �빮�� %c�� ��ȯ�߽��ϴ�.\n", num);
		}
		else
		{
			num = tolower(num);		//�빮�ڸ� �ҹ��ڷ� ����
			printf("���ĺ��� �ҹ��� %c�� ��ȯ�߽��ϴ�.\n", num);
		}
	}
	else
	{
		printf("�Է��� ���ڴ� ���ĺ��� �ƴմϴ�.\n");
	}

	return 0;
}