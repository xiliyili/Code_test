#include <stdio.h>

using namespace std;

class Solution
{
	public:
		void c_solution()
		{
			int n = 0;
			int m = 0;
			int a[10] = {0};
			int i = 0;
			
			while(scanf("%d", &n) != EOF)
			{
				/* 清空，保证可循环输入 */
				for (i = 0; i < 10; i++)
				{
					a[i] = 0;
				}
				
				m = 0;
				
				while(0 != n)
				{
					if (a[n % 10] == 0)
					{
						a[n % 10]++;
						m = m * 10 + n % 10;
					}
					n /= 10;
				}

				printf("%d", m);
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



