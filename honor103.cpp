#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			/*  牛客运行失败，编译器运行成功 */
			vector<int> num ;
			int n = 0;
			int max_len = 0;
			int temp = 0;
			
			while((cin >> n))
			{
				for (int i = 0; i < n; i++)
				{
					cin >> temp;
					num.push_back(temp);
				}
				
				max_len = max_up_str(num);
				cout << max_len <<endl;
			}

			return;
		}

		int max_up_str(vector<int> &num)
		{
			int n = num.size();
			int res = 1;
			vector<int> dp(n, 0);

			for (int i = 1; i < n; i++)
			{
				dp[i] = 1;
				for (int j = 0; j < i; j++)
				{
					if (num[j] < num[i])
					{
						dp[i] = (dp[i] > (dp[j] + 1)? dp[i]: (dp[j] + 1));
					}
				}
				res = ((res > dp[i])? res: dp[i]);
			}
			
			return res;
		}
		
		void c_solution()
		{
			int size;
			int a[10000] = {0};
			a[0] = -1;
			int n;
			int count = 0;
			int t;
		
			while (scanf("%d", &n) != EOF)
			{
				count = 0;
		
				for (int i = 0; i < n; ++i)
				{
					scanf("%d", &t);
		
					if (t > a[count])
					{
						a[++count] = t;
					}
					else
					{
						/* 从头开始寻找小元素并替换，类似替换栈顶元素的思想 */
						for (int j = 1; j <= count; ++j)
						{
							if (a[j] >= t)
							{
								a[j] = t;
								break;
							}
						}
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



