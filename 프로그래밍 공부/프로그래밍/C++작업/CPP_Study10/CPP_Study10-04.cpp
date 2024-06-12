//#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//#include <map>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//// 오늘의 주제 : enum class
//
//// unscoped enum (범위있는)
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
//	// 1) 이름공간 관리 (scoped)
//	// 2) 암묵적인 변환 금지
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