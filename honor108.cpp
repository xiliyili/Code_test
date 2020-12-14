#include <iostream>
#include <stdio.h>

using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			/* 更相减陨术求最大公约数，被减数、减数、差之间较小的两个数相减，直到减数与被减数相等 */
			/* num1 / 最大公约 *     num2 = 最小公倍数 */
			int a = 0;
			int b = 0;
			int max_div = 0;
			cin >> a >> b;
			
			max_div = method(a, b);
				
			cout << a * b / max_div << endl;
			return;
		}
		
		int method(int a, int b)
		{
			if (a == b)
			{
				return a;
			}

			if (a < b)
			{
				int differ = b - a;
				return method(a, differ);
			}
			else
			{
				int differ = a - b;
				return method(b, differ);
			}
		}
		
		void c_solution()
		{
			int a = 0;
			int b = 0;
			scanf("%d, %d", &a, &b);

			for (int i = a; i < a * b; i++)
			{
				if (!(i % a) && !(i % b))
				{
					printf("%d\n", i);
					break;
				}
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




