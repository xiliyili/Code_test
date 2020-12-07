#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			int N = 0;
			int value = 0; 
			set<int> m_set;
			
			while(cin >> N)
			{
				m_set.clear();
				
				while(N--)
				{
					cin >> value;
					m_set.insert(value);
				}
				
				for(set<int>::iterator it = m_set.begin(); it != m_set.end(); it ++)
				{
					cout << *it << endl;
				}
			}
			
			return;

		}
		
		void c_solution()
		{
			int n = 0;
			int a = 0;
			int i = 0;
			int num[1001] = {0};
			while (~scanf("%d", &n))
			{
				memset(num, 0, sizeof(num));
				for (i = 0; i < n; i++)
				{
					scanf("%d", &a);
					num[a] = 1;
				}
				for (i = 0; i < 1001; i++)
				{
					if (1 == num[i])
					{
						printf("%d\n", i);
					}
				}
			}
			return;
		}
};


int main()
{
	Solution s;
	s.cplus_solution();
	return 0;
}

