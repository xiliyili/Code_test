#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			int number = 0;
			scanf("%d", &number);
			double ans = fun(number * 1.0);
			printf("%.1f", ans);
			return;
		}
		
		double fun(double n)
		{
			/* 命f(x) = x^3 - a，求解f(x) = x^3 - a = 0。
			利用泰勒公式展开，即f(x)在xo处的函数值为：
			f(x) = f(xo) +f'(xo)(x-xo) = xo^3-a+3xo^2(x-x0) = 0，
			解之得：x = xo - (xo^3 - a) / (3xo^2)。
			*/
			
			double x = 1.0;
		
			while (fabs(x * x * x - n) > 1e-9)
			{
				x = x - ((x * x * x - n) / (3 * x * x));
			}
		
			return x;
		}
		
		void c_solution()
		{
			double n = 0;
			double i = 0;
			int flag = 0;		
			scanf("%lf",&n);
			
			if(n>=0)
			{
				flag = 1;
			}
			else
			{
				flag = -1;
			}
			
			while(i * i * i < (n * flag))
			{
				i += 0.01;
			}
			
			printf("%.1f", i * flag);			
			return;
		}
};


int main()
{
	Solution s;
	s.c_solution();
	return 0;
}

