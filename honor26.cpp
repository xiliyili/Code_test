#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>

using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			string str;
			int i = 0;
			int j = 0;
			
			while(getline(cin, str))
			{
				vector<char> s1;
				
				for(j = 0; j < 26; j++)
				{
					for(i = 0; i < str.size(); i++)
					{
						if ((str[i] == 'a' + j) || (str[i] == 'A' + j))
						{
							s1.push_back(str[i]);
						}
					}
				}

				
				for (i = 0, j = 0; i < str.size(); i++)
				{
					if (((str[i] >= 'a') && (str[i] <= 'z'))
						|| ((str[i] >= 'A') && (str[i] <= 'Z')))
					{
						str[i] = s1[j++];
					}
				}

				cout << str <<endl;
			}
			return;
		}
		void c_solution()
		{			
			char str[3000];
			int i = 0;
			int j = 0;
			
			while(cin.getline(str, 3000))
			{
				char s1[3000];
				
				for(j = 0; j < 26; j++)
				{
					for(i = 0; i < strlen(str); i++)
					{
						if ((str[i] == 'a' + j) || (str[i] == 'A' + j))
						{
							s1[i] = str[i];
						}
					}
				}

				
				for (i = 0, j = 0; i < strlen(str); i++)
				{
					if (((str[i] >= 'a') && (str[i] <= 'z'))
						|| ((str[i] >= 'A') && (str[i] <= 'Z')))
					{
						str[i] = s1[j++];
					}
				}

				printf("%s\n", str);
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


