//#include <iostream>
//using namespace std;
//#include <vector>
//#include <list>
//#include <deque>
//#include <map>
//#include <set>
//
//// ������ ���� : ���� ����
//
//int main()
//{
//	srand(static_cast<unsigned int>(time(nullptr)));
//
//	vector<int> v;
//
//	for (int i = 0; i < 100; i++)
//	{
//		int num = rand() % 100;
//		v.push_back(num);
//	}
//
//	// Q1 number��� ���ڰ� ���Ϳ� üũ�ϴ� ��� (bool, ù ���� iterator)
//	{
//		int number = 50;
//		bool found = false;
//		vector<int>::iterator it;
//
//		for (it = v.begin(); it != v.end(); ++it)
//		{
//			if ((*it) == number)
//			{
//				found = true;
//			}
//		}
//
//		if (found)
//		{
//			cout << "ã��" << endl;
//		}
//		else
//		{
//			cout << "�� ã��" << endl;
//		}
//
//		/*for (int i = 0; i < v.size(); i++)
//		{
//			int data = v[i];
//			if (data == number)
//			{
//				found = true;
//				it = v.begin() + i;
//				break;
//			}
//		}*/
//
//	}
//
//	cout << "------------------------------------------------" << endl;
//
//	// Q2 11�� ������ ���ڰ� ���Ϳ� �ִ��� üũ�ϴ� ��� (bool, ù ���� iterator)
//	{
//		bool found = false;
//		vector<int>::iterator it;
//		int number = 0;
//
//		for (it = v.begin(); it != v.end(); ++it)
//		{
//			if ((*it) % 11 == 0)
//			{
//				found = true;
//				number++;
//			}
//		}
//
//		if (found)
//		{
//			cout << number << "�� ã��" << endl;
//		}
//		else
//		{
//			cout << "�� ã��" << endl;
//		}
//
//	}
//
//	cout << "------------------------------------------------" << endl;
//
//	// Q3 Ȧ���� ������ ������? (count)
//	{
//		vector<int>::iterator it;
//		int count = 0;
//
//		for (it = v.begin(); it != v.end(); ++it)
//		{
//			if ((*it) % 2 != 0)
//			{
//				count++;
//			}
//		}
//
//		cout << count << "��" << endl;
//
//	}
//
//	cout << "------------------------------------------------" << endl;
//
//	// Q4 ���Ϳ� �� �ִ� ��� ���ڵ鿡 3�� �����ּ���!
//	{
//		vector<int>::iterator it;
//
//		for (it = v.begin(); it != v.end(); ++it)
//		{
//			cout << (*it) << endl;
//		}
//
//		cout << "------------------------------------------------" << endl;
//
//		for (it = v.begin(); it != v.end(); ++it)
//		{
//			(*it) *= 3;
//			cout << (*it) << endl;
//		}
//
//	}
//
//
//	return 0;
//}