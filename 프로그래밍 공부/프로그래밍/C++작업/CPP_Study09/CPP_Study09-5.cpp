//#include <iostream>
//using namespace std;
//#include <vector>
//#include <list>
//#include <deque>
//#include <map>
//#include <set>
//
//// 오늘의 주제 : 연습 문제
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
//	// Q1 number라는 숫자가 벡터에 체크하는 기능 (bool, 첫 등장 iterator)
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
//			cout << "찾음" << endl;
//		}
//		else
//		{
//			cout << "못 찾음" << endl;
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
//	// Q2 11로 나뉘는 숫자가 벡터에 있는지 체크하는 기능 (bool, 첫 등장 iterator)
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
//			cout << number << "개 찾음" << endl;
//		}
//		else
//		{
//			cout << "못 찾음" << endl;
//		}
//
//	}
//
//	cout << "------------------------------------------------" << endl;
//
//	// Q3 홀수인 숫자의 개수는? (count)
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
//		cout << count << "개" << endl;
//
//	}
//
//	cout << "------------------------------------------------" << endl;
//
//	// Q4 벡터에 들어가 있는 모든 숫자들에 3을 곱해주세요!
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