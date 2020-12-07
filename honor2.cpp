
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>

using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			string str;
			char str2;
			getline(cin, str);
			cin >> str2;
			int num = 0;
			
			for (string::iterator it = str.begin(); it != str.end(); ++it)
			{
				if ((*it == str2) || (*it == str2 + 32) || (*it == str2 - 32))
				{
					num++;
				}
			}
			cout << num << endl;
			return;
		}
		void c_solution()
		{
			char c[1000] = {0};
			char str;
			int i = 0;
			int num = 0;
			/* 编译器报错 */
			//gets(c);
			scanf("%c", &str);
			
			for(i = 0; i < strlen(c); i++)
			{	
				if ((c[i] == str) || (c[i] == (str + 32)) || (c[i] == (str - 32)))
				{
					num++;
				}
			}
			
			printf("%d\n", num);
			return;
		}
};
		
int main()
{
	Solution s;
	s.cplus_solution();
	return 0;
}
