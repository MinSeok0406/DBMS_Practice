//�迭�� �Լ��� ���� �ǽ�-2
//�迭������ �Լ��� ȣ���ϸ� �ּҰ��� ���޵�����, �迭��Ҹ� �μ��� �����ϸ� ����� �迭���(������, ������ ����)
//���� �Ǳ� ������ ȣ���� ���� �ƹ��� ������ ��ġ�� �ƴ��Ѵ�. �迭 ��Ҹ� �Լ��� ȣ���� �� �μ� ������ �Ѵٴ� ����
//call by value(���� ���� ȣ��)�� �ش��Ѵ�.

//#include <stdio.h>
//#define LENGTH 5		//��ũ�� ���(��ȣ���) ���� �� �ʱ�ȭ
//
//int power(int num);		//�Լ� power()����
//
//int main(void) {
//	
//	int score[LENGTH] = { 0 };		//�迭 ����� �ʱ�ȭ
//	int result = 0;
//	int i = 0;
//
//	//����ڷκ��� �Է¹޴� �ڵ�
//	printf("�迭 ��Ҹ� �Է����ּ���.\n");
//	for (i = 0; i < LENGTH; i++)
//	{
//		printf("score[%d] : ", i);
//		scanf_s("%d", &score[i]);		//�迭��Ҵ� ������� �����ϹǷ� �ּ����������� &�� ���� �ٿ���� �Ѵ�.
//	}
//	/*printf("\n�Է¹��� �迭�� ��Ҹ� ���\n");
//	for (i = 0; i < LENGTH; i++)
//	{
//		printf("score[%d] : %d\n", i, score[i]);
//	}*/
//
//	printf("�Լ� ȣ��> score[3]�� ���� ����(����) : %d\n", score[3]);
//	//�Լ� ȣ���ϴµ� �迭 ��Ҹ� �μ������� �����ϰ� �ִ�.(�������� �����ϸ� call by value)
//	result = power(score[3]);
//	printf("main�Լ��� ����\n");
//	printf("��ȯ> power(score[3])ȣ�� ��� ��ȯ �� : %d\n", result);
//	//call by value�� ȣ���� ���� ������ ���� ��ġ�� �ƴ��Ѵ�.
//	printf("�迭�� �� ���� Ȯ��> score[3] ����� �� : %d\n\n", score[3]);
//
//	return 0;
//}
//
////����� �Լ� ����(�������� ���ϰ� �������ִ� ���)
//int power(int num)
//{
//	int power = 0;
//	power = num * num;
//	printf("power�Լ� ����\n");
//	printf("����> score[3]�迭 ����� ���� : %d * %d = %d\n", num, num, power);
//	num = 88;
//
//	return power;
//}