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
		void c_solution()
		{
			long a = 0;
			int i = 0;
			
			while(scanf("%ld", &a) != EOF)
			{
				for (i = 2; i <= sqrt(a); i++)
				{
					while(0 == (a % i))
					{
						printf("%d ", i);
						a /= i;
					}
				}
			}
			
			if (a > 1)
			{
				printf("%d ", a);
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

