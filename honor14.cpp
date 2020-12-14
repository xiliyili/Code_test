#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			int num = 0;
			int i = 0;
			string str;
			vector<string> str1;
			vector<string>::iterator it;
			
			while (cin >> num)
			{
				str1.clear();
				
				for (i = 0; i < num; i++)
				{
					cin >> str;
					str1.push_back(str);
				}

				sort(str1.begin(), str1.end());

				for (it = str1.begin(); it != str1.end(); it++)
				{
					cout << *it << endl;
				}
			}

			return;
		}
		
		void c_solution()
		{
			int n;
			scanf("%d", &n);
			
			/* c语言字符串为二维数组 */
			char str[n][101];
			char a[101];
			int i = 0;
			int j = 0;
			
			for (i = 0; i < n; i++)
			{
				scanf("%s", str[i]);
			}
		
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n - 1 - i; j++)
				{
					if (strcmp(str[j], str[j + 1]) > 0)
					{
						/* 冒泡排序，大数下沉，后续不需要再比较 */
						strcpy(a, str[j + 1]);
						strcpy(str[j + 1], str[j]);
						strcpy(str[j], a);
					}
				}
			}
		
			for (i = 0; i < n; i++)
			{
				printf("%s\n", str[i]);
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



