//����4
//�Լ� void swap(int* x, int* y)��� �Լ��� �����ϰ� main()���� int�� ������ 2���� ���� �� �ʱ�ȭ�� �Ͽ�
//�Ʒ��� ���� ����� �ǵ��� �Ѵ�.
//swap()�Լ��� ���� ���� �ٲٴ� ����� �ϵ��� �����ϸ� �ȴ�.

//������
//swap()ȣ���� num1 = 10, num2 = 20
//swap()ȣ���� num1 = 20, num2 = 10

//-----------------------------------------------------------

//#include <stdio.h>
//
//void swap(int* x, int* y);
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;
//
//	printf("swap()ȣ���� num1 = %d, num2 = %d\n", num1, num2);
//	swap(&num1, &num2);
//	printf("swap()ȣ���� num1 = %d, num2 = %d\n", num1, num2);
//
//	return 0;
//}
//
//void swap(int* x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//
//	return;
//}