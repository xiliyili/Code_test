#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <string.h>
#include <math.h>
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
			char c[1000] = {0};
			int i = 0;
			int num = 0;
			while(scanf("%s", c) != EOF)
			{
				num = 0;
				for (i = strlen(c) - 1; i >= 0; i--)
				{
					if (('0' <= c[i]) && ('9' >= c[i]))
					{
						num += (c[i] - 48) * pow(16, strlen(c) - 1 - i);
					}
					else if (('A' <= c[i]) && ('F' >= c[i]))
					{
						num += (c[i] - 55) * pow(16, strlen(c) - 1 - i);
					}
					else
					{
					}
				}
				
				printf("%d\n", num);
			}
			return;
		}
		void c_solution2()
		{
			int c = 0;
			
			while(scanf("%x", &c) != EOF)
			{
				printf("%d\n", c);
			}
			
			return;
		}
};
int main()
{
	Solution s;
	s.c_solution2();
	return 0;
}
