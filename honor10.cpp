#include <stdio.h>
#include <string.h>
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

class Solution
{
	public:	
		void c_solution()
		{
			char c[1000] = {0};
			int a[128] = {0};
			int len = 0;
			int i = 0;
			int count = 0;
			
			while(cin.getline(c, 1000))
			{
				count = 0;
				memset(a, 0 ,sizeof(a));
				len = strlen(c);
				
				for (i = 0; i < len; i++)
				{
					if ((c[i] > 0) && c[i] < 127)
					{
						a[c[i]]++;
					}
				}

				for(i = 0; i < 128; i++)
				{
					if (a[i] > 0)
					{
						count++;
					}
				}
				
				printf("%d\n", count);
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



