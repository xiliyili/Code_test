#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			string str;
			getline(cin, str);
			reverse(str.begin(), str.end());
			cout << str << endl;
			return;
		}
		
		void c_solution()
		{
			char a[100] = {0};
			char b[100] = {0};
			int j = 0;
			
			while(cin.getline(a, 100))
			{
				j = 0;
				
				for (int i = strlen(a) - 1; i >= 0; i--)
				{
					b[j] = a[i];
					j++;
				}
				
				printf("%s\n", b);
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

