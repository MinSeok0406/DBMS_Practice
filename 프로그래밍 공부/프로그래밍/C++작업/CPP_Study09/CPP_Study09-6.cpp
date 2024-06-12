#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>

// ������ ���� : �˰���
#include <algorithm>

int main()
{
	// �ڷᱸ�� (�����͸� �����ϴ� ����)
	// �˰��� (�����͸� ��� ����� ���ΰ�?)

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

	// Q1 number��� ���ڰ� ���Ϳ� üũ�ϴ� ��� (bool, ù ���� iterator)
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
			cout << "ã��" << endl;
		}
		else
		{
			cout << "�� ã��" << endl;
		}*/

		vector<int>::iterator itFind = find(v.begin(), v.end(), number);	// find(���۰�, ����, ã�°�)
		if (itFind == v.end())
		{
			cout << "��ã����" << endl;
		}
		else
		{
			cout << "ã����" << endl;
		}

	}

	cout << "------------------------------------------------" << endl;

	// Q2 11�� ������ ���ڰ� ���Ϳ� �ִ��� üũ�ϴ� ��� (bool, ù ���� iterator)
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
			cout << number << "�� ã��" << endl;
		}
		else
		{
			cout << "�� ã��" << endl;
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
			cout << "��ã����" << endl;
		}
		else
		{
			cout << "ã����" << endl;
		}

	}

	cout << "------------------------------------------------" << endl;

	// Q3 Ȧ���� ������ ������? (count)
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

		cout << count << "��" << endl;*/

		struct IsOdd
		{
			bool operator()(int n)
			{
				return (n % 2) == 0;
			}
		};

		int n = count_if(v.begin(), v.end(), IsOdd());

		bool b1 = all_of(v.begin(), v.end(), IsOdd());	// ��� �����Ͱ� Ȧ���Դϱ�?
		bool b2 = any_of(v.begin(), v.end(), IsOdd());	// Ȧ���� �����Ͱ� �ϳ��� �ֽ��ϱ�?
		bool b3 = none_of(v.begin(), v.end(), IsOdd());	// ��� �����Ͱ� Ȧ���� �ƴմϱ�?

	}

	cout << "------------------------------------------------" << endl;

	// Q4 ���Ϳ� �� �ִ� ��� ���ڵ鿡 3�� �����ּ���!
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


	// Ȧ���� �����͸� �ϰ� ����
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