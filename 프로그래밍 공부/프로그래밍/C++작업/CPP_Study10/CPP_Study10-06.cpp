//#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//#include <map>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//// ������ ���� : override, final
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
//	// final : �Լ��� ���������� ��ӹ޴� Ŭ������ ���
//	virtual void Attack() final
//	{
//		cout << "Player!" << endl;
//	}
//};
//
//class Knight : public Player
//{
//public:
//	// ������(override) : �θ� Ŭ������ �Լ��� ������ �ִٴ� ����
//	virtual void Attack() override
//	{
//		cout << "Knight!" << endl;
//	}
//
//	// �����ε�(over loading) : �Լ� �̸��� ����
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