//����1
//���� �޸𸮸� �Ҵ��� �ϴµ� ���ĺ� �ҹ��� a~z(25��)��ŭ �Ҵ��� �޾Ƽ� �ݺ����� �̿��Ͽ�
//���� �޸𸮿� ������ �ϰ� ����� �ϴ� ���α׷��� �ۼ��Ͻÿ�.

//�ʼ� �Լ� : malloc(), memset(), free()

//������
//abcdefghijklmnopqrstuvwxyz

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int cnt = 0;
//	char* str = NULL;
//
//	str = (char*)malloc(26 * sizeof(char));
//	memset(str, 0, sizeof(char) * 26);
//
//	//��ȿ�� ����
//	if (str == NULL)
//	{
//		printf("���� �޸� �Ҵ� ���� �߻�!\n");
//		printf("���α׷� ����. �޸� üũ ���!\n");
//		exit(1);
//	}
//
//	for (char i = 'a'; i <= 'z'; i++)
//	{
//		str[cnt] = i;
//		cnt++;
//	}
//
//	for (int i = 0; i <= 25; i++)
//	{
//		printf("%c", str[i]);
//	}
//	printf("\n");
//
//	free(str);
//
//	return 0;
//}