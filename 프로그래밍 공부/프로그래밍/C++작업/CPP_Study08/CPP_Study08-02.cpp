#include <iostream>
using namespace std;

// ������ ���� : ���ø� ����

//void Print(int a)
//{
//	cout << a << endl;
//}
//
//void Print(float a)
//{
//	cout << a << endl;
//}

//class Knight
//{
//public:
//
//
//public:
//	int _hp = 100;
//};
//
//
//
////template<class T>
//template<typename T>
//void Print(T a)
//{
//	cout << a << endl;
//}
//
//// ���ø� Ư��ȭ
//template<>
//void Print(Knight a)
//{
//	cout << "Knight !!!!!!!!" << endl;
//	cout << a._hp << endl;
//}
//
//template<typename T1, typename T2>
//void Print(T1 a, T2 b)
//{
//	cout << a << " " << b << endl;
//}
//
//
//template<typename T>
//T Add(T a, T b)
//{
//	return a + b;
//}
//
//// ������ �����ε� (�����Լ� ����)
//ostream& operator<<(ostream& os, const Knight& k)
//{
//	os << k._hp;
//	return os;
//}

//-----------------------------------------------------------------

// typename T�� ���̸� '��Ŀī��' (� Ÿ�Ե� �� ���� �� ����)
// �׷��� ������ typename�� �ٿ��� �ϴ� ���� �ƴϴ�.
// template<> �ȿ� ���°� [������ �ϴ� ���]�̶�� �� �� ����
template<typename T, int SIZE>
class RandomBox
{
public:
	T GetRandomData()
	{
		int idx = rand() % SIZE;
		return _data[idx];
	}

public:
	T _data[SIZE];
};

// ���ø� Ư��ȭ
template<int SIZE>
class RandomBox<double, SIZE>
{
public:
	double GetRandomData()
	{
		cout << "RandomBox Double" << endl;
		int idx = rand() % SIZE;
		return _data[idx];
	}


public:
	double _data[SIZE];
};

void Hello(int number)
{

}



int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	// ���ø� : �Լ��� Ŭ������ ���� Ʋ
	// 1) �Լ� ���ø�
	// 2) Ŭ���� ���ø�

	/*Print<int>(50);
	Print(50.0f);
	Print("Hello World");

	Print("Hello", 100);

	int result1 = Add(1, 2);
	float result2 = Add<float>(1.11f, 2.22f);

	Knight k1;
	Print(k1);*/

	//-----------------------------------------------------
	RandomBox<int, 10> rb1;

	for (int i = 0; i < 10; i++)
	{
		rb1._data[i] = i;
	}
	int value1 = rb1.GetRandomData();
	cout << value1 << endl;

	RandomBox<double, 10> rb2;
	for (int i = 0; i < 10; i++)
	{
		rb2._data[i] = i + 0.5;
	}
	double value2 = rb2.GetRandomData();
	cout << value2 << endl;

	/*rb1 = rb2;*/

	return 0;
}