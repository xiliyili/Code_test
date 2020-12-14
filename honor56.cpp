#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	void cplus_solution()
	{
		int num = 0;
		int i = 0;
		int j = 0;
		int sum = 0;
		int valid = 0;
		int temp = 0;

		while (cin >> num)
		{
			valid = 0;

			for (i = 6; i <= num; i++)
			{
				temp = sqrt(i);
				sum = 1;

				for (j = 2; j <= temp; j++)
				{
					if (i % j == 0)
					{
						sum += j;
						sum += (i / j);
					}
				}

				if (sum == i)
				{
					valid++;
				}
			}

			cout << valid << endl;
		}

		return;
	}

	void c_solution()
	{
		return;
	}
};

int main()
{
	Solution s;
	s.cplus_solution();
	return 0;
}
