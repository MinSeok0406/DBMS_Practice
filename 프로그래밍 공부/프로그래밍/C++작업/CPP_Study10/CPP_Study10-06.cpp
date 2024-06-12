//#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//#include <map>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//// 오늘의 주제 : override, final
//
//class Creature
//{
//public:
//	virtual void Attack()
//	{
//		cout << "Creature!" << endl;
//	}
//};
//
//class Player : public Creature
//{
//public:
//	// final : 함수를 마지막으로 상속받는 클래스에 사용
//	virtual void Attack() final
//	{
//		cout << "Player!" << endl;
//	}
//};
//
//class Knight : public Player
//{
//public:
//	// 재정의(override) : 부모 클래스에 함수를 가지고 있다는 증거
//	virtual void Attack() override
//	{
//		cout << "Knight!" << endl;
//	}
//
//	// 오버로딩(over loading) : 함수 이름의 재사용
//	/*void Attack(int a)
//	{
//
//	}*/
//};
//
//int main()
//{
//	Knight* knight = new Knight();
//	Player* player = new Knight();
//
//	knight->Attack();
//	player->Attack();
//
//	return 0;
//}