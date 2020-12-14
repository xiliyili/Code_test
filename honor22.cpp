#include <bits/stdc++.h>

using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			int num = 0;
			while(~scanf("%d", &num) && (num!= 0))
			{
				printf("%d\n", num / 2);
			}
			return;
		}
		void c_solution()
		{
			int num = 0;
			int count = 0;
			int temp = 0;
			
			while(1)
			{
				scanf("%d", &num);
				if (num == 0)
				{
					break;
				}
				count = 0;
				
				if (num == 1)
				{
					printf("%d\n", count);
					continue;
				}

				if (num == 2)
				{
					printf("1\n");
					continue;
				}
				
				while((num / 3))
				{
					count += num / 3;
					temp = num % 3;
					num /= 3;
					num = temp + num;
				}
				
				temp = num % 3;
				
				if (3 == (temp + 1))
				{
					count++;
				}
				
				printf("%d\n", count);
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

