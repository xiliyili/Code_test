#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

class Solution
{
	public:	
		void c_solution()
		{
			float i = 0;
			scanf("%f", &i);
			printf("%d\n", (int)(i + 0.5));
			return;
		}
};


int main()
{
	Solution s;
	s.c_solution();
	return 0;
}
