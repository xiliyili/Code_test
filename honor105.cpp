#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			return;
		}
		
		void c_solution()
		{
			int sum = 0;
			int cnt1 = 0;
			int cnt2 = 0;
			int num = 0;
			float ave = 0.0;
			
			while(scanf("%d", &num) != EOF)
			{
				if (num > 0)
				{
					sum += num;
					cnt2++;
					
					/* 仅对sum做转换即可，后续cnt2会整形提升 */
					/* 未做初始化，在最后对ave赋值时，需要对cnt2进行0的判断，(cnt2>0)?((float) sum / cnt2):0; */
					ave = (float)sum / cnt2;

				}
				else
				{
					cnt1++;

				}
			}
			printf("%d\n%0.1f\n", cnt1, ave);
			return;
		}
};

int main()
{
	
	Solution s;
	s.c_solution();
	return 0;
}


