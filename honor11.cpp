#include <iostream>
#include <stdio.h>
using namespace std;

class Solution
{
	public:
		void c_solution()
		{
			int num = 0;
			int trans = 0;
			while (scanf("%d", &num) != EOF)
			{
				while (num != 0)
				{
					trans = num % 10;
					printf("%d", trans);
					num /= 10;
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



