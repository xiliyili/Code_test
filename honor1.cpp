#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;
class Solution
{
	public:
		int cplus_solution()
		{
			
			string s1;
			vector<string> str;
			int len = 0;
			
			while(cin >> s1)
			{
				str.push_back(s1);
			}
			
			len = str.back().size();
			cout << len << endl;
			return 0;
		}
		void c_solution()
		{
			char s1[1000];
			while(scanf("%s", s1) != EOF)
			{
				;
			}
			printf("%d\n", strlen(s1));
			return;
		}
};

int main()
{
	Solution S;
	S.c_solution();
	return 0;
}

