//������ Ȱ�뿡 ���� �ǽ�-7
//�ռ� ���캻 �Լ� �����ʹ� �Լ��� ���� �� �����Ͽ� �����ϰ��� �Ѵٸ� ���������� �ش� �Լ���
//�Լ� �����Ϳ� ������ ����� �ϴ� �ڵ尡 ���� �� �ۼ��� �ؾ� �ϴ� ���ŷο��� �ϴ� �����Ѵ�.
//�Լ����� ���� ���縦 �Ѵٸ� �Լ� �������� �迭�� ������ �� �ʿ䰡 �ִ�.
//�Լ� �������� �迭�� ���� : int (*fp[���ǰ���])(int, int)������ �ϸ� []�켱������ ���� ���� ������
//���� �ּҸ� ������ ���� ������ŭ �޸𸮿� �Ҵ��ϰ� *�� ������ �Ǿ� �Լ��� �ּҸ� ������ �����Ͽ� �ε�����
//���Ͽ� ȣ���� �ϸ� �ȴ�.

//#include <stdio.h>
////�Լ� �����
//void menu(void);
//int hap(int x, int y);
//int minus(int x, int y);
//int mul(int x, int y);
//int div(int x, int y);
//
//int main(void)
//{
//	int choice = 0, result = 0, x = 0, y = 0;
//	//�Լ� �������� �迭 ���� �� �ʱ�ȭ
//	int (*fp[4])(int, int) = { hap, minus, mul, div };	//�Լ������� �ּҰ��� ������ �ϴ� �ڵ�
//
//	while (1)
//	{
//		menu();
//	re_input:
//		printf("���� ����(0 ~ 4) : ");
//		scanf_s("%d", &choice);
//
//		//�����ڵ� ó��
//		if (choice < 0 || choice > 4)
//		{
//			printf("���� �޴� �Է°� ����\n");
//			printf("�ٽ� �������ּ���.\n");
//			goto re_input;
//		}
//		else if (choice == 4)
//		{
//			break;
//		}
//		else
//		{
//			printf("���� 2���� �Է��ϼ���.(����> 10 20) : ");
//			scanf_s("%d %d", &x, &y);
//			//����ڰ� �Է��� ���� �ε����� �Ͽ� �Լ��� ȣ���ϴ� �ڵ�
//			result = fp[choice](x, y);
//			printf("���� ��� : %d\n", result);
//		}
//		printf("���� ���α׷� ���� �Ϸ�\n\n");
//
//	}
//	printf("���α׷��� �����մϴ�.\n\n");
//
//	return 0;
//}
//
//
//void menu(void)
//{
//	int size = 0, cnt = 0;
//	//������ ������ �迭�� ���� �� �ʱ�ȭ
//	char* cal[] = { "����", "����", "����", "������", "����"};
//
//	size = sizeof(cal) / sizeof(cal[0]);
//
//	//�޴��� ����ϴ� �ڵ�
//	for (cnt = 0; cnt < size; cnt++)
//	{
//		printf("%d. %s \n", cnt, cal[cnt]);
//;	}
//}
//
//int hap(int x, int y)
//{
//	int result = 0;
//	printf("\n[���� hap() �Լ� ����]\n");
//	result = x + y;
//	return result;
//}
//int minus(int x, int y)
//{
//	int result = 0;
//	printf("\n[���� minus() �Լ� ����]\n");
//	result = x - y;
//	return result;
//}
//int mul(int x, int y)
//{
//	int result = 0;
//	printf("\n[���� mul() �Լ� ����]\n");
//	result = x * y;
//	return result;
//}
//int div(int x, int y)
//{
//	int result = 0;
//	printf("\n[������ div() �Լ� ����]\n");
//	result = x / y;
//	return result;
//}