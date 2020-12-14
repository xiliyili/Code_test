#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			string str;
			while (getline(cin, str))
			{
				while (str.size() > 8)
				{
					cout << str.substr(0, 8) << endl;
					str = str.substr(8);
				}

				cout << str.append(8 - str.size(), '0') << endl;		
			}
			return;
		}
		
		void c_solution()
		{
			int len = 0;
			int i = 0;
			int count = 0;
			/* 防止后续越界 */
			char strc[101] = {0};
			while(scanf("%s", strc) != EOF)
			{
				count = 0;
				for(i = 0; i < strlen(strc); i++)
				{
					if ((i > 0) && (i % 8 == 0))
					{
						printf("\n");
						count = 0;
					}
					printf("%c", strc[i]);
					count++;
				}
				
				while (count < 8)
				{
					printf("0");
					count++;
				}
				printf("\n");
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


