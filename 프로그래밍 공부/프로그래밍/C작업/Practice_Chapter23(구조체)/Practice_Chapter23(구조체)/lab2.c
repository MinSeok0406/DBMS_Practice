//����2
//����ü ����� ������� ���� : ǰ��, ����, �ܰ�, �ݾ�
//����ü ������ ũ�Ⱑ 3�� �迭�� �����Ѵ�.
//for���� ����Ͽ� 3���� ��ǰ�� ���� �Է��� �޴´�.
//�ݾ� = ���� * �ܰ�

//#include <stdio.h>
//#include <string.h>
//#define SIZE 3
//#define LIST_SIZE 20
//
//struct Economic
//{
//	char list[LIST_SIZE];
//	int num;
//	int price;
//	int money;
//};
//
//int main(void)
//{
//	struct Economic test[SIZE] = {
//									{" ", 0,0,0},
//									{" ", 0,0,0},
//									{" ", 0,0,0} 
//								 };
//
//	printf("�� ����ü �迭�� ����Ͽ� ǰ�� 3���� ó���ϴ� ���α׷�\n");
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%d��° ǰ���� ǰ��, ����, �ܰ� �Է�\n", i + 1);
//		printf("ǰ�� : ");
//		scanf_s("%s", test[i].list, sizeof(test[i].list));
//		printf("���� : ");
//		scanf_s("%d", &test[i].num);
//		printf("�ܰ� : ");
//		scanf_s("%d", &test[i].price);
//		test[i].money = test[i].num * test[i].price;
//	}
//	printf("\n");
//
//	printf("[ǰ�� 3���� ����, �ܰ�, �ݾ� ���]\n");
//	printf("��ǰ�� \t���� \t�ܰ� \t�ݾ�(õ ��)\n");
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%s \t %d \t %d \t %d\n", test[i].list, test[i].num, test[i].price, test[i].money);
//	}
//	printf("=====================================================================\n");
//
//	return 0;
//}