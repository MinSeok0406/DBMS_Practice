//#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//#include <map>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//// ������ ���� : nullptr
//
//class Knight
//{
//public:
//	void Test()
//	{
//
//	}
//};
//
//Knight* FindKnight()
//{
//
//
//	return nullptr;
//}
//
//
//void Test(int a)
//{
//	cout << "Test(int)" << endl;
//}
//
//void Test(int* ptr)
//{
//	cout << "Test(*)" << endl;
//}
//
//// NullPtr ����
//const
//class
//{
//public:
//	// �� � Ÿ���� �����Ϳ͵� ġȯ ����
//	template<typename T>
//	operator T* () const
//	{
//		return 0;
//	}
//
//	// �� � Ÿ���� ��� �����Ϳ͵� ġȯ ����
//	template<typename C, typename T>
//	operator T C::* () const
//	{
//		return 0;
//	}
//
//private:
//	void operator&() const;		// �ּҰ� &�� ���´�.
//} _NullPtr;
//
//
//int main()
//{
//	int* ptr = _NullPtr;
//
//	// 1) ������
//	Test(0);
//	Test(NULL);
//	Test(_NullPtr);
//
//	// 2) ������
//	auto knight = FindKnight();
//	if (knight == _NullPtr)
//	{
//
//	}
//
//	/*auto whoami = _NullPtr;*/
//
//	void(Knight:: * memFunc)();
//	memFunc = &Knight::Test;
//
//	if (memFunc == _NullPtr)
//	{
//
//	}
//
//
//
//
//	return 0;
//}