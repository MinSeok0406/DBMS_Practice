#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int cnt = 0, n = 0, k = 0, sum = 0, b = 0;

	vector<int> v;

	cin >> n;

	while (n != cnt)
	{
		cin >> k;

		if (k == 0)
		{
			v.pop_back();
		}
		else
		{
			v.push_back(k);
		}
		cnt++;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		sum += (*it);
	}

	cout << sum << endl;

	return 0;
}