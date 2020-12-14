#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Solution
{
	public:
		void c_solution()
		{
			char c[1000] = {0};
			int len = 0;
			int i = 0;
			
			while (scanf("%s", c) != EOF)
			{
				len = strlen(c);
				
				for (i = len - 1; i >= 0; i--)
				{
					printf("%c", c[i]);
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




