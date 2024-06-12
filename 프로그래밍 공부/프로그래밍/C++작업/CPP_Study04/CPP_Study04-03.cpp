//#include <iostream>
//using namespace std;
//
//// ������ ���� : ���м�
//
//// ��ü���� (OOP Object Oriented Programming)
//// - ��Ӽ�
//// - ���м� = ĸ��ȭ
//// - ������
//
//// ���м�(Data Hiding) = ĸ��ȭ(Encapsulation)
//// ���� �Ǵ� ���� ����ϰ� ����ڴ�!
//// ����� ����?
//// - 1) ���� �����ϰ� �ǵ帮�� �ȵǴ� ���
//// - 2) �ٸ� ��η� �����ϱ� ���ϴ� ���
//
//// �ڵ���
//// - �ڵ�
//// - ���
//// - ����
//// - ��
//// - ���� ���⼱
//
//// �Ϲ� ������ ���忡�� ����ϴ� ��?
//// - �ڵ�/���/��
//// ���� �� (������ �ǵ帮�� ū�ϳ�)
//// - ����, ���� ���⼱
//
//// public (������?) protected (��ȣ�޴�?) private (������?)
//// - public : �������׳� ����. ���� ����ϼ���~
//// - protected : ���� �ڼյ����׸� ���
//// - private : ���� ����Ҳ�! << class Car ���ο�����!
//
//// ��� ���� ������ : ���� �������� �θ���� ������ ��� ��������?
//// �θ������ �������� ������ �� ���� �ڼյ����׵� �Ȱ��� ������� ���� ����
//// - public : ������ ���? �θ���� ���� ���� �״��~ (public -> public, protected -> protected)
//// - protected : ��ȣ���� ���? �� �ڼյ����׸� �����ٲ��� (public -> protected, protected -> protected)
//// - private : �������� ���? �������� �� ���� �ڼյ����״� �ƿ� �� �����ٲ���~ (public -> private, protected -> private)
//
//
//class Car
//{
//public:	// (���) ���� ������
//	void MoveHandle() { }
//	void PushPedal() { }
//	void OpenDoor() { }
//
//	void TurnKey()
//	{
//		// ...
//		RunEngine();
//	}
//
//protected:
//	void DisassembleCar() { } // ���� �����Ѵ�
//	void RunEngine() { } // ������ ������Ų��
//	void ConnetCircuit() { } // ���⼱ ����
//
//public:
//	// - �ڵ�
//	// - ���
//	// - ����
//	// - ��
//	// - ���� ���⼱
//};
//
//class SuperCar : public Car // ��� ���� ������
//{
//public:
//	void RushREmoteController()
//	{
//		RunEngine();
//	}
//
//
//};
//
////private Car
///*class TestSuperCar : SuperCar
//{
//public:
//	void Test()
//	{
//		DisassembleCar(); (X)
//	}
//};
//*/
//// 'ĸ��ȭ'
//// ������ �����Ϳ� �Լ��� �������� ������� ��
//
//class Berserker
//{
//public:
//
//	int GetHp() { return _hp; }
//
//	void SetHp(int hp)
//	{
//		_hp = hp;
//		if (_hp <= 50)
//		{
//			SetBerserkerMode();
//		}
//	}
//
//	// ��� : ü���� 50 ���Ϸ� �������� ����Ŀ ��� �ߵ� (������)
//private:
//	void SetBerserkerMode()
//	{
//		cout << "�ſ� ������!" << endl;
//	}
//
//private:
//	int _hp = 100;
//};
//
//
//int main()
//{
//	Car car;
//	SuperCar car2;
//
//	car2.RushREmoteController();
//	
//	Berserker b;
//
//	b.SetHp(20);
//	
//
//	return 0;
//}