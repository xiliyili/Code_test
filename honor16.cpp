#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

inline int max_(int a, int b)
{
	return a > b ? a : b;
}

class Solution
{
	public:
		void cplus_solution()
		{
			int N, m;
			cin >> N >> m;
			/* 由于价格是10的整数倍，处理下以降低空间/时间复杂度 */
			N /= 10;
			/* 以vector定义动态二维数组，并进行静态初始化，限制行数为61（物品个数），每一行填充一个长度为3的全0vector元素 */
			vector<vector<int> > prices(61, vector<int>(3, 0)); 	   // 价格
			vector<vector<int> > priceMultiplyPriority(61, vector<int>(3, 0));		// 重要程度
		
			for (int i = 1; i <= m; ++i)
			{
				int a, b, c;
				cin >> a >> b >> c;
				a /= 10;
				b *= a;
		
				if (c == 0)
				{
					prices[i][0] = a;
					priceMultiplyPriority[i][0] = b;
				}
				else
				{
					if (prices[c][1] == 0)
					{
						prices[c][1] = a;
						priceMultiplyPriority[c][1] = b;
					}
					else
					{
						prices[c][2] = a;
						priceMultiplyPriority[c][2] = b;
					}
				}
			}
		
			// 使用分组背包
			vector<vector<int> > dp(m + 1, vector<int>(N + 1, 0));
		
			for (int i = 1; i <= m; ++i)
			{
				for (int j = 1; j <= N; ++j)
				{
					int a = prices[i][0], b = priceMultiplyPriority[i][0];
					int c = prices[i][1], d = priceMultiplyPriority[i][1];
					int e = prices[i][2], f = priceMultiplyPriority[i][2];
					dp[i][j] = j >= a ? max(dp[i - 1][j - a] + b, dp[i - 1][j]) : dp[i - 1][j];
					dp[i][j] = j >= (a + c) ? max(dp[i - 1][j - a - c] + b + d, dp[i][j]) : dp[i][j];
					dp[i][j] = j >= (a + e) ? max(dp[i - 1][j - a - e] + b + f, dp[i][j]) : dp[i][j];
					dp[i][j] = j >= (a + c + e) ? max(dp[i - 1][j - a - c - e] + b + d + f, dp[i][j]) : dp[i][j];
				}
			}
		
			cout << dp[m][N] * 10 << endl;
			return;
		}
		
		
		void c_solution()
		{
			/*
			f(N, m) = max(
				f(N, m-1),
				f(N-v1, m-1) + w1,
				f(N-v2-v1, m-1) + w1+w2,
				f(N-v3-v2-v1, m-1) + w1+w2+w3
			)
			*/
			
			int i, j;
			int max;
			int N, m;
			int val, pri, wgt, maj;
			
			while (scanf("%d%d", &N, &m) == 2)
			{
				int dp[3001] = { 0 };
				int v[61][3] = { 0 };
				int w[61][3] = { 0 };
				int tmp;
				N /= 10;
			
				for (i = 1; i <= m; ++i)
				{
					scanf("%d%d%d", &val, &pri, &maj);
					val /= 10;
					wgt = val * pri;
			
					if (!maj)
					{
						v[i][0] = val;
						w[i][0] = wgt;
					}
					else
					{
						if (!v[maj][1])
						{
							v[maj][1] = val;
							w[maj][1] = wgt;
						}
						else
						{
							v[maj][2] = val;
							w[maj][2] = wgt;
						}
					}
				}
			
				for (i = 1; i <= m; ++i)
				{
					for (j = N; v[i][0] && (j >= v[i][0]); --j)
					{
						dp[j] = max_(dp[j], dp[j - v[i][0]] + w[i][0]);
			
						if (v[i][1])
						{
							tmp = v[i][0] + v[i][1];
			
							if (j >= tmp)
							{
								dp[j] = max_(dp[j], dp[j - tmp] + w[i][0] + w[i][1]);
							}
						}
			
						if (v[i][2])
						{
							tmp = v[i][0] + v[i][1] + v[i][2];
			
							if (j >= tmp)
							{
								dp[j] = max_(dp[j], dp[j - tmp] + w[i][0] + w[i][1] + w[i][2]);
							}
						}
					}
				}
			
				printf("%d\n", dp[N] * 10);
			}
		}
};


int main()
{
	
	Solution s;
	s.cplus_solution();
	return 0;
}




