//#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//#include <map>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//// ������ ���� : enum class
//
//// unscoped enum (�����ִ�)
//enum PlayerType
//{
//	PT_Knight,
//	PT_Archer,
//	PT_Mage
//};
//
//enum class ObjectType
//{
//	Player,
//	Monster,
//	Projectile
//};
//
//int main()
//{
//	// enum class (scoped enum)
//	// 1) �̸����� ���� (scoped)
//	// 2) �Ϲ����� ��ȯ ����
//
//	double value = PT_Knight;
//	//double value2 = ObjectType::Player; (x)
//
//	int choice;
//	cin >> choice;
//
//	if (choice == static_cast<int>(ObjectType::Monster))
//	{
//
//	}
//
//	unsigned int bitFlag;
//	bitFlag = (1 << static_cast<int>(ObjectType::Player));
//
//
//	return 0;
//}