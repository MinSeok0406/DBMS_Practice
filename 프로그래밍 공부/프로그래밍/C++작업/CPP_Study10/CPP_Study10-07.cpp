//#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//#include <map>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//// ������ ���� : ������(rvalue) ������ std::move
//
//class Pet
//{
//
//};
//
//class Knight
//{
//public:
//	Knight()
//	{
//		cout << "Knight()" << endl;
//	}
//
//	// ���� ������
//	Knight(const Knight& knight)
//	{
//		cout << "const Knight&" << endl;
//	}
//
//	// �̵� ������
//	Knight(Knight&& knight)
//	{
//
//	}
//
//	~Knight()
//	{
//		if (_pet)
//		{
//			delete _pet;
//		}
//	}
//
//	// ���� ���� ������
//	void operator=(const Knight& knight)
//	{
//		cout << "operator=(const Knight&)" << endl;
//
//		// ���� ����
//		_hp = knight._hp;
//
//		if (knight._pet)
//		{
//			_pet = new Pet(*knight._pet);
//		}
//		
//	}
//
//	// �̵� ���� ������
//	void operator=(Knight&& knight) noexcept
//	{
//		cout << "operator=(Knight&&)" << endl;
//
//		// ���� ����
//		_hp = knight._hp;
//		_pet = knight._pet;
//
//		knight._pet = nullptr;
//	}
//
//public:
//	int _hp = 100;
//	Pet* _pet = nullptr;
//};
//
//void TestKnight_Copy(Knight knight) { }
//void TestKnight_LVauleRef(Knight& knight) { }
//void TestKnight_ConstLVauleRef(const Knight& knight) {  }
//void TestKnight_RVauleRef(Knight&& knight) {  } // �̵� ���!
//
//int main()
//{
//	// �ް�(lvalue) vs ������(rvalue)
//	// - lvalue : ���Ͻ��� �Ѿ ��� ���ӵǴ� ��ü
//	// - rvalue : lvalue�� �ƴ� ������ (�ӽ� ��, ������, ����, i++ ��)
//
//	//int a = 3;
//	
//	Knight k1;
//
//	TestKnight_Copy(k1);
//
//	TestKnight_LVauleRef(k1);
//	//TestKnight_LVauleRef(Knight());
//
//	TestKnight_ConstLVauleRef(Knight());
//
//	TestKnight_RVauleRef(Knight());
//
//	TestKnight_RVauleRef(static_cast<Knight&&>(k1));
//
//	Knight k2;
//	k2._pet = new Pet();
//	k2._hp = 1000;
//
//	// ������ ������ �ȴ� << �� Hint�� �ִ� �ʿ� ������!
//	Knight k3;
//	//k3 = static_cast<Knight&&>(k2);
//
//	k3 = std::move(k2); // ������ ������ ĳ����
//	// std::move�� ���� �̸� �ĺ� �� �ϳ��� rvalue_cast
//
//	std::unique_ptr<Knight> uptr = std::make_unique<Knight>();
//	std::unique_ptr<Knight> uptr2 = std::move(uptr);
//
//
//	return 0;
//}