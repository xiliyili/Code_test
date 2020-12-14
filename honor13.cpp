#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			string str;
			vector<string> str1;
			vector<string>::iterator it;
			
			while (cin >> str)
			{	
				str1.push_back(str);
				getchar();
			}
			
			for(it = str1.end() - 1; it != str1.begin(); it--)
			{
				cout << *it << " ";
			}

			cout << *it << endl;
			
			return;
		}
		
		void cplus2_solution()
		{
			string str;
			
			while (getline(cin, str))
			{
				int index1 = 0;
				int index2 = str.size();
			
				for (int i = str.size() - 1; i >= 0; i--)
				{
					if (str[i] == ' ')
					{
						index1 = i;
						cout << str.substr(index1 + 1, index2 - index1) << ' ';
						index2 = i - 1;
					}
				}
			
				cout << str.substr(0, index2 + 1) << endl;
			}

			return;
		}
		
		void c_solution()
		{
			char str[10000];
			int a, len, i;
			cin.getline(str, 10000);
			len = strlen(str);
		
			for (i = len - 1; i >= 0; i--)
			{
				if (str[i] == ' ')
				{
					a = i + 1;
		
					while (str[a] != ' ')
					{
						if (a == len)
						{
							break;
						}
		
						printf("%c", str[a]);
						a++;
					}
		
					printf(" ");
				}
			}
		
			i = 0;
		
			while (str[i] != ' ')
			{
				printf("%c", str[i]);
				i++;
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



