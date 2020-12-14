#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	void cplus1_solution()
	{
		int num = 0;
		int i = 0;
		int count = 0;
		int temp = 0;
		
		while (cin >> num)
		{
			count = 0;
			
			for(i = 1; i <= num; i++)
			{
				if (0 == (i % 7))
				{
					count++;
				}
				else
				{
					temp = i;
					
					while (1)
					{
						if (7 == (temp % 10))
						{
							count++;
							break;
						}

						temp = temp / 10;

						if ((0 == (temp / 10)) && (7 != (temp % 10)))
						{
							break;
						}
					}
				}
			}
			cout << count <<endl;
		}

		return;
	}

	void cplus2_solution()
	{
		long int n = 0;
	
		while (cin >> n)
		{
			int num = 0;
			int i;
			string str;

			for (i = 7; i <= n; i++)
			{
				stringstream a;
				a << i;
				a >> str;
	
				if ((str.find('7') != str.npos) || (i % 7 == 0))
				{
					num++;
				}
			}
	
			cout << num << endl;
		}
	
		return;
	}
	

};

int main()
{

	Solution s;
	s.cplus2_solution();
	return 0;
}

