#include <iostream>
#include <stdio.h>

using namespace std;

class Solution
{
	public:
		void c_solution()
		{
			int n;
			int count = 0;
			scanf("%d\n", &n);
			
			while(n != 0)
			{
				if(n % 2 == 1)
				{
					count++;
				}

				n /= 2;
			}

			printf("%d\n", count);
			
			return;
		}
};


int main()
{
	
	Solution s;
	s.c_solution();
	return 0;
}




