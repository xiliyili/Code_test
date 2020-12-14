#include <iostream>
#include <stdio.h>
#include <map>

#define MAX_KEY 1000

using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			map<int, int> m;
			int i = 0;
			int n = 0;
			cin >> n;
			map<int, int>::iterator it;
			
			for(i = 0; i < n; i++)
			{
				pair<int, int> tmp;
				cin >> tmp.first;
				cin >> tmp.second;
				if (m.find(tmp.first) != m.end())
				{
					m[tmp.first] += tmp.second;
				}
				else
				{
					m[tmp.first] = tmp.second;
				}
			}
			
			for(it = m.begin(); it != m.end(); it++)
			{
				cout << it->first << " " << it->second << endl;
			}
			return;
		}
		
		void c_solution()
		{			  

			int array[MAX_KEY] = {0};
			int key = 0;
			int value = 0;
			int count = 0;
			while (scanf("%d", &count) != EOF)
			{
				for(int i = 0; i < count; ++i)
				{
					scanf("%d", &key);
					scanf("%d", &value);
					array[key] += value;
				}
				for(int i = 0; i < count; ++i)
				{
					if(array[i])
					{
						printf("%d %d\n", i, array[i]);
					}
				}
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


