//#include <iostream>
//using namespace std;
//
//// ������ ���� : �����ڿ� �Ҹ���
//
//// [������(Constructor)�� �Ҹ���(Destructor)]
//// Ŭ������ '�Ҽ�'�� �Լ����� ��� �Լ���� ��
//// �� �߿��� ������ Ư���� �Լ� 2���� �ִµ�, �ٷ� [����]�� [��]�� �˸��� �Լ���
//// - ����(ź��) -> ������ (������ ���� ����)
//// - ��(�Ҹ�) -> �Ҹ��� (���� 1����)
//
//// [�Ͻ���(Implicit) ������]
//// �����ڸ� ��������� ������ ������,
//// �ƹ� ���ڵ� ���� �ʴ� [�⺻ ������]�� �����Ϸ��� ���� �ڵ����� �������
//// -> �׷��� �츮�� �����(Explicit)���� �ƹ� ������ �ϳ� �����
//// �ڵ����� ��������� [�⺻ ������]�� �� �̻� ��������� ����
//
//
//// class�� ������ ���赵
//class Knight
//{
//public:
//    // [1] �⺻ ������ (���ڰ� ����)
//    Knight()
//    {
//        cout << "Knight() �⺻ ������ ȣ��" << endl;
//
//        m_hp = 100;
//        m_attack = 10;
//        m_posX = 0;
//        m_posY = 0;
//    }
//    
//    // [2] ���� ������ (�ڱ� �ڽ��� Ŭ���� ���� Ÿ���� ���ڷ� ����)
//    // (�Ϲ������� '�Ȱ���' �����͸� ���� ��ü�� �����Ǳ� ����Ѵ�)
//    Knight(const Knight& knight)
//    {
//        m_hp = knight.m_hp;
//        m_attack = knight.m_attack;
//        m_posX = knight.m_posX;
//        m_posY = knight.m_posY;
//    }
//
//    // [3] ��Ÿ ������
//
//    // �� �߿��� ���ڸ� 1���� �޴� [��Ÿ ������]��
//    // [Ÿ�� ��ȯ ������]��� �θ��⵵ ��
//
//    // ������� �뵵�θ� ����� ��!
//    explicit Knight(int hp)
//    {
//
//        cout << "Knight(int) ������ ȣ��" << endl;
//
//        m_hp = hp;
//        m_attack = 10;
//        m_posX = 0;
//        m_posY = 0;
//    }
//
//    Knight(int hp, int attack, int posX, int posY)
//    {
//        m_hp = hp;
//        m_attack = attack;
//        m_posX = posX;
//        m_posY = posY;
//    }
//
//    // �Ҹ���
//    ~Knight()
//    {
//        cout << "Knight() �Ҹ��� ȣ��" << endl;
//    }
//
//
//
//
//    // ��� �Լ� ����
//    void Move(int y, int x);
//    void Attack();
//
//    void Die()
//    {
//        m_hp = 0;
//        cout << "Die" << endl;
//    }
//
//public:
//    // ��� ����
//    int m_hp;
//    int m_attack;
//    int m_posY;
//    int m_posX;
//
//};
//
//void Knight::Move(int y, int x)
//{
//    m_posY = y;
//    m_posX = x;
//    cout << "Move" << endl;
//}
//
//void Knight::Attack()
//{
//    cout << "Attack : " << m_attack << endl;
//}
//
//void HelloKnight(Knight k)
//{
//    cout << "Hello Knight" << endl;
//}
//
//int main()
//{
//
//    Knight k1(100, 10, 0, 0);
//    //k1.m_hp = 100;
//    //k1.m_attack = 10;
//    //k1.m_posY = 0;
//    //k1.m_posX = 0;
//
//    Knight k2(k1);     // ���� ������
//
//    Knight k3 = k1;    // ���� ������
//
//    Knight k4;  // ������
//    k4 = k1;    // ����
//
//
//    k1.Move(2, 2);
//    k1.Attack();
//    k1.Die();
//
//    // �Ͻ��� ����ȯ -> �����Ϸ��� �˾Ƽ� �ٲ�ġ��
//    int num = 1;
//
//    float f = (float)num;   // ����� < �츮�� �ڵ�� num�� float �ٱ��Ͽ� ������� �ֹ��ϰ� ����
//    double d = num;         // �Ͻ��� << ���� ���ߴµ� �����Ϸ��� �˾Ƽ� ó���ϰ� ����
//
//    Knight k5;
//    k5 = (Knight)1;
//
//    HelloKnight((Knight)5);
//
//    return 0;
//}