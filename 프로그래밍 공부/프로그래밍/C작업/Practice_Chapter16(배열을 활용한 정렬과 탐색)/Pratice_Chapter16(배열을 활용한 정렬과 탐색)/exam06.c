//�迭�� Ȱ���� ���İ� Ž�� �ǽ�-6
//����Ž��(binary search)�� ã���� �ϴ� ���� �迭�� �߾ӿ������� Ž���� �ϴ� ����̴�. ����Ž���� ó������
//�˻��� �����ϴ� ����Ž������ �޸� �迭��ҵ��� �߾��� �������� �ؼ� �� �κ����� ������ ã�� �˰����̴�.
//����Ž���� Ž���� �ϱ� ���� �迭�� ��Ұ� ������ ���� �Ǿ� �־�� �Ѵٴ� ���������� �ٴ´�.(�߿�)

//����Ž�� ���� �ǽ�
//#include <stdio.h>
//#define LENGTH 8
////�Լ� ����(����Ž���� ���)
//int binary_search(int list[], int size, int search_value);
//
//int main(void)
//{
//	int list[LENGTH] = { 12,15,19,25,30,45,60,99 };
//	int search_value = 0, index = 0;
//	char yn = ' ';
//
//	do
//	{
//		printf("\n�ʱ�> �迭 ��� �� : 12,15,19,25,30,45,60,99\n");
//		printf("ã���� �ϴ� ���� �Է� : ");
//		scanf_s("%d", &search_value);
//
//		//�Լ� ȣ��
//		index = binary_search(list, LENGTH, search_value);
//		printf("����Ž�� ������ �ش� �ε��� : [%2d]\n", index);
//		printf("ã���� �ϴ� ���� %2d�̰� �ε��� [%2d]���� %3d�Դϴ�.\n", search_value, index, list[index]);
//
//	re_input:
//		printf("���α׷��� �ٽ� �����Ͻðڽ��ϱ�?(Y/N) : ");
//		scanf_s(" %c", &yn, sizeof(yn));
//
//		if (yn == 'N' || yn == 'n')
//		{
//			printf("���α׷��� �����մϴ�.\n");
//			break;
//		}
//		else if (yn == 'Y' || yn == 'y')
//		{
//			continue;
//		}
//		else
//		{
//			printf("���ĺ��� �߸� �Է��ϼ̽��ϴ�.\n");
//			printf("��ҹ��� ������� Y�� N�� �Է��ϼ���.\n");
//			goto re_input;
//		}
//
//	} while (1);
//
//	return 0;
//}
//
//int binary_search(int list[], int size, int search_value)
//{
//	int low = 0;			//���� �ε��� ��
//	int high = size - 1;	//���� �ε��� ���ε� size���� -1�� ���־�� �Ѵ�. �� ������ �ٷ� �ε��� 0���� �����ϱ� �����̴�.
//	int md = 0, cnt = 1;	//�߾Ӱ� ����, ī��Ʈ ����
//
//	while (low <= high)
//	{
//		printf("%dȸ ���� Ž��\n", cnt);
//		printf("Ž�� ���� : [%d ~ %d]\n", low, high);
//		//�߾Ӱ��� ���
//		md = (low + high) / 2;
//
//		if (search_value == list[md])
//		{
//			return md;
//		}
//		else if (search_value > list[md])
//		{
//			low = md + 1;
//		}
//		else
//		{
//			high = md - 1;
//		}
//		cnt++;
//
//	}
//	return -1;		//ã���� �ϴ� ���� �迭�� �������� ���� ��, -1�� ��� 
//}