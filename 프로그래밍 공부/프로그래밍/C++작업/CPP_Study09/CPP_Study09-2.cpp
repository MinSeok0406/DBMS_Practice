//#include <iostream>
//using namespace std;
//#include <vector>
//#include <list>
//#include <deque>
//// ������ ���� : deque
//
//// vector : ���� �迭
//// [             ]
//
//// list : ���� ���� ����Ʈ
//// [ ] <-> [ ] <-> [ ] <-> [ ]
//
//// deque : double-ended queue ��ũ
//// [    ]
//// [    ]
//
//
//int main()
//{
//	// ������ �����̳� (Sequence Container)
//	// �����Ͱ� ���� ������� �����Ǵ� ����
//	// vector list deque
//
//	/*deque<int> dq;
//
//	dq.push_back(1);
//	dq.push_front(2);
//	cout << dq[0] << endl;*/
//
//	// vector�� ���������� �迭 ������� ����
//	// �ٸ� �޸� �Ҵ� ��å�� �ٸ���
//
//	// vector
//	// [1  1   1]
//
//	// deque
//	// [1   1    1]
//	// [1   1    1]
//
//	vector<int> v(3, 1);		// 3���� ���� ����� �ű⿡ 1�� �ִ´�.
//	deque<int> dq(3, 1);		// 3���� ���� ����� �ű⿡ 1�� �ִ´�.
//
//	v.push_back(2);
//	v.push_back(2);
//
//	dq.push_back(2);
//	dq.push_back(2);
//
//	dq.push_front(3);
//	dq.push_front(3);
//
//	// - deque�� ���� ����
//	// - �߰� ����/���� (BAD / BAD)
//	// - ó��/�� ����/���� (GOOD / GOOD)
//	// - ���� ���� (GOOD)
//
//	dq[3] = 10;
//	cout << dq[3] << endl;
//
//
//
//	return 0;
//}