//#include <iostream>
//using namespace std;
//
//// ������ ���� : �Լ� ������
//
//class Knight
//{
//public:
//	//��� �Լ�
//	int GetHp(int, int)
//	{
//		cout << "GetHp()" << endl;
//		return _hp;
//	}
//
//public:
//	int _hp = 100;
//};
//
//// typedef�� ����
//// typedef ���� ������ -> ������ (Ŀ���� Ÿ�� ����)
//
//// ��Ȯ���� ����/������ ������ �ƴ϶�,
//// [���� ����]���� typedef�� �տ��� ���̴� ��
//
//typedef int INTEGER;
//typedef int* POINTER;
//typedef int ARRAY[20];
//typedef int(*PFUNC)(int, int); // �Լ� ������
//typedef int(Knight::*PMEMFUNC)(int, int);	// ��� �Լ� ������
//
//int Test(int a, int b)
//{
//	cout << "Test" << endl;
//	return a + b;
//}
//
//
//
//int main()
//{
//	// �Լ� ������
//	// 1) ������		*
//	// 2) ������ �̸�	fn
//	// 3) Ÿ��			�Լ�(���ڷ� int 2���� �ް�, int 1���� ��ȯ)
//
//	//int (*fn)(int, int);
//
//	//typedef int(FUNC_TYPE)(int, int);
//	//FUNC_TYPE* fn;
//	PFUNC fn;
//
//	fn = &Test;		// & ���� ���� (C��� ȣȯ�� ����)
//
//	fn(1, 2);
//	(*fn)(1, 2);
//
//	// �� �������� [���� �Լ� / ���� �Լ�]�� ���� �� �ִ� (ȣ�� �Ծ��� ������ �ֵ�)
//	//fn = &Knight::GetHp;
//
//	Knight k1;
//	k1.GetHp(1, 1);
//
//	PMEMFUNC mfn;
//	mfn = &Knight::GetHp;
//	(k1.*mfn)(1, 1);
//
//	Knight* k2 = new Knight();
//	(k2->*mfn)(1, 1);
//	delete k2;
//
//	return 0;
//}