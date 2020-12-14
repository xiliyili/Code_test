#include <bits/stdc++.h>

using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			return;
		}
		
		void c_solution()
		{	
			int n = 0;
			while(scanf("%d", &n) != EOF)
			{
				if ((1 == n) || (2 == n))
				{
					printf("-1\n");
				}
				else if(0 == (n % 4))
				{
					printf("3\n");
				}
				else if(1 == (n % 2))
				{
					printf("2\n");
				}
				else
				{
					printf("4\n");
				}
			}
			return;
		}
};

int main()
{
	
	Solution s;
	s.c_solution();
	return 0;
}


