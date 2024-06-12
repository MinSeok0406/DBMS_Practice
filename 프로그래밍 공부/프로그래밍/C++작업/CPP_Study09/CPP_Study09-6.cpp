#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>

// 오늘의 주제 : 알고리즘
#include <algorithm>

int main()
{
	// 자료구조 (데이터를 저장하는 구조)
	// 알고리즘 (데이터를 어떻게 사용할 것인가?)

	// find
	// find_if
	// count
	// count_if
	// all_of
	// any_of
	// none_of
	// for_each
	// remove
	// remove_if

	srand(static_cast<unsigned int>(time(nullptr)));

	vector<int> v;

	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 100;
		v.push_back(num);
	}

	// Q1 number라는 숫자가 벡터에 체크하는 기능 (bool, 첫 등장 iterator)
	{
		int number = 50;
		bool found = false;
		vector<int>::iterator it;

		/*for (it = v.begin(); it != v.end(); ++it)
		{
			if ((*it) == number)
			{
				found = true;
			}
		}

		if (found)
		{
			cout << "찾음" << endl;
		}
		else
		{
			cout << "못 찾음" << endl;
		}*/

		vector<int>::iterator itFind = find(v.begin(), v.end(), number);	// find(시작값, 끝값, 찾는값)
		if (itFind == v.end())
		{
			cout << "못찾았음" << endl;
		}
		else
		{
			cout << "찾았음" << endl;
		}

	}

	cout << "------------------------------------------------" << endl;

	// Q2 11로 나뉘는 숫자가 벡터에 있는지 체크하는 기능 (bool, 첫 등장 iterator)
	{
		bool found = false;
		vector<int>::iterator it;
		int number = 0;

		/*for (it = v.begin(); it != v.end(); ++it)
		{
			if ((*it) % 11 == 0)
			{
				found = true;
				number++;
			}
		}

		if (found)
		{
			cout << number << "개 찾음" << endl;
		}
		else
		{
			cout << "못 찾음" << endl;
		}*/

		struct CanDivideBy11
		{
			bool operator()(int n)
			{
				return (n % 11) == 0;
			}
		};

		vector<int>::iterator itFind2 = find_if(v.begin(), v.end(), CanDivideBy11());
		if (itFind2 == v.end())
		{
			cout << "못찾았음" << endl;
		}
		else
		{
			cout << "찾았음" << endl;
		}

	}

	cout << "------------------------------------------------" << endl;

	// Q3 홀수인 숫자의 개수는? (count)
	{
		/*vector<int>::iterator it;
		int count = 0;

		for (it = v.begin(); it != v.end(); ++it)
		{
			if ((*it) % 2 != 0)
			{
				count++;
			}
		}

		cout << count << "개" << endl;*/

		struct IsOdd
		{
			bool operator()(int n)
			{
				return (n % 2) == 0;
			}
		};

		int n = count_if(v.begin(), v.end(), IsOdd());

		bool b1 = all_of(v.begin(), v.end(), IsOdd());	// 모든 데이터가 홀수입니까?
		bool b2 = any_of(v.begin(), v.end(), IsOdd());	// 홀수인 데이터가 하나라도 있습니까?
		bool b3 = none_of(v.begin(), v.end(), IsOdd());	// 모든 데이터가 홀수가 아닙니까?

	}

	cout << "------------------------------------------------" << endl;

	// Q4 벡터에 들어가 있는 모든 숫자들에 3을 곱해주세요!
	{
		/*vector<int>::iterator it;

		for (it = v.begin(); it != v.end(); ++it)
		{
			cout << (*it) << endl;
		}

		cout << "------------------------------------------------" << endl;

		for (it = v.begin(); it != v.end(); ++it)
		{
			(*it) *= 3;
			cout << (*it) << endl;
		}*/

		struct MultiplyBy3
		{
			void operator()(int& n)
			{
				n = n * 3;
			}
		};

		for_each(v.begin(), v.end(), MultiplyBy3());

	}


	// 홀수인 데이터를 일괄 삭제
	{
		/*for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		{
			if ((*it % 2) != 0)
			{
				it = v.erase(it);
			}
		}*/

		v.clear();

		v.push_back(1);
		v.push_back(4);
		v.push_back(3);
		v.push_back(5);
		v.push_back(8);
		v.push_back(2);

		// 1 4 3 5 8 2
		// 4 8 2 5 8 2

		//remove(v.begin(), v.end(), 4);

		struct IsOdd
		{
			bool operator()(int n)
			{
				return (n % 2) == 0;
			}
		};

		/*vector<int>::iterator it = remove_if(v.begin(), v.end(), IsOdd());
		v.erase(it, v.end());*/
		
		v.erase(remove_if(v.begin(), v.end(), IsOdd()), v.end());


	}




	return 0;
}