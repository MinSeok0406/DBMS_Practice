//�迭�� Ȱ���� ���İ� Ž�� �ǽ�-5
//Ž�� �߿� ����Ž���� ���ؼ� �ǽ��� �Ѵ�.
//����Ž��(sequential search)�� �迭�� ��Ҹ� ó������ �ϳ��ϳ��� �� ������ ã�����ϴ� ���� ã�� ������
//Ž���ϴ� ����̴�. ����Ž���� �����ϴ� ���� �ܼ��� �������� �迭�� ��� ��Ҹ� ������ Ž���� �ϱ� ������
//����� ���� �������ٸ� �ټ� �ð��� �ɸ��ٴ� ������ �ִ�.

//����Ž���� ����
//#include <stdio.h>
//#define LENGTH 7
//
//int search(int arr[], int len, int target);
//
//int main(void)
//{
//	int arr[LENGTH] = { -7,9,10,100,258,31,66 };
//	int search_value = 0, index = 0;
//	char yn = ' ';
//
//	printf("�ʱ� �迭 ��ҵ��� �� : -7 9 10 100 258 31 66\n");
//	//���ѷ����� ���鼭 ����Ž���� ����
//	while (1)
//	{
//		printf("ã�� ���ڸ� �Է��Ͻÿ� : ");
//		scanf_s("%d", &search_value);
//		printf("\n");
//
//		/*if ((search_value != -7) || (search_value != 9) || (search_value != 10) || (search_value != 100) || (search_value != 258) ||
//			(search_value != 31) || (search_value != 66))
//		{
//			printf("�ش� ���� �������� �ʽ��ϴ�.\n");
//			printf("�ٽ� �Է����ּ���!\n");
//			continue;
//		}*/
//		index = search(arr, LENGTH, search_value);
//
//		if (index == -1)
//		{
//			printf("�ش� ���� �������� �ʽ��ϴ�.\n");
//			printf("�ٽ� �Է����ּ���\n");
//			continue;
//		}
//		else
//		{
//			/*for (count = 0; count < LENGTH; count++)
//		{
//			if (arr[count] == search_value)
//			{
//				printf("���� Ž�� Ƚ�� : %dȸ\n", count + 1);
//				printf("ã���� �ϴ� ���� �ε����� [%d]�Դϴ�.\n", count);
//			}*/
//		re_ch:
//			printf("���α׷��� �ٽ� �����ұ��?(Y/N) : ");
//			scanf_s(" %c", &yn, sizeof(yn));
//
//			if (yn == 'N' || yn == 'n')
//			{
//				printf("���α׷��� �����մϴ�.\n");
//				break;
//			}
//			else if (yn == 'Y' || yn == 'y')
//			{
//				continue;
//			}
//			else
//			{
//				printf("���ĺ��� Ȯ�����ּ���. �߸� �Է��ϼ̽��ϴ�.\n");
//				printf("�ٽ� ��ҹ��� ���� ���� Y�� N�� �Է����ּ���.\n");
//				goto re_ch;
//			}
//
//		}
//		
//
//		return 0;
//	}
//}
//
//int search(int arr[], int len, int target)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (target == arr[i])
//		{
//			printf("���� Ž�� Ƚ�� : %dȸ\n", i + 1);
//			printf("ã���� �ϴ� ���� �ε����� [%d]�Դϴ�.\n", i);
//		}
//		else
//		{
//			continue;
//		}
//		return i;
//	}
//	return -1;
//}