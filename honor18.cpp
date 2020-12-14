#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <cstddef>   //std::size_t

using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			string str;
		
			while (cin >> str)
			{
				pair<int, int> point(0, 0); 			//point.first point.second
				size_t found = str.find_first_of(';');	//找到第一个';'的位置
				int start = 0;
		
				while (found != string::npos)
				{
					string s1 = str.substr(start, found - start);
					//cout << s1 << endl;
					start = found + 1;
					found = str.find_first_of(';', found + 1);
		
					if (s1.size() > 1 && s1.size() <= 3) //合法的字符个数：2或3
					{
						char c = s1[0];
						int n = 0;
						int invalid = 0;	//数字为是否非法
		
						for (int i = 1; i < s1.size(); ++i) //数字位判断与提取，A1A
						{
							if (s1[i] >= '0' && s1[i] <= '9')
							{
								n = n * 10 + (s1[i] - '0');
							}
							else
							{
								invalid = 1;
								break;
							}
						}
		
						if (invalid == 0)
						{
							switch (c)
							{
								case 'A':
								{
									point.first -= n;
									break;
								}
		
								case 'D':
								{
									point.first += n;
									break;
								}
		
								case 'W':
								{
									point.second += n;
									break;
								}
		
								case 'S':
								{
									point.second -= n;
									break;
								}
							}
						}
					}
				}
		
				cout << point.first << ',' << point.second << endl;
			}
		
			return;
		}	
		void c_solution()
			{	
				char str[3000] = {0};
			
				while (cin.getline(str, 3000))
				{
					int X = 0, Y = 0;
					char *pointer[1000] = {0};
					pointer[0] = str;
					char *p = str;
					int i = 0;
			
					while ((p = strchr(p, ';')) != NULL)
					{
						pointer[++i] = p + 1;

						/* 先取值*p，再++，在字符串结尾打0 */
						*p++ = 0;
					}
			
					for (int j = 0; j <= i; j++)
					{
						int len = strlen(pointer[j]);
						printf("%s\n", pointer[j]);
						if ((pointer[j][0] == 'A') || (pointer[j][0] == 'S')
								|| (pointer[j][0] == 'D') || (pointer[j][0] == 'W'))
						{
							int delter = 0;
			
							if (len == 2 && pointer[j][1] >= '0' && pointer[j][1] <= '9')
							{
								delter = pointer[j][1] - '0';
							}
							else if (len == 3 && pointer[j][1] >= '0' && pointer[j][1] <= '9'
									 && pointer[j][2] >= '0' && pointer[j][2] <= '9')
							{
								delter = (pointer[j][1] - '0') * 10 + pointer[j][2] - '0';
							}
			
							switch (pointer[j][0])
							{
								case 'A':
									X -= delter;
									break;
			
								case 'D':
									X += delter;
									break;
			
								case 'S':
									Y -= delter;
									break;
			
								case 'W':
									Y += delter;
									break;
			
								default:
									break;
							}
						}
					}
			
					printf("%d,%d\n", X, Y);
				}			
				return;
			}
		
		void c_solution2()
		{	
			string str;
			int found = 0;
			int start = 0;
			pair<int, int> point(0, 0);
			string sub;
			int n = 0;
			char c;
			int invalid = 0;
			int i = 0;
			
			while (cin >> str)
			{
				found = 0;
				start = 0;
				point.first = 0;
				point.second = 0;
				found = str.find_first_of(";");
				
				while (found != string::npos)
				{
					sub = str.substr(start, found - start);
					start = found + 1;
					found = str.find_first_of(";", found + 1);

					if ((sub.size() > 1) && (sub.size() <= 3))
					{
						c = sub[0];
						n = 0;
						
						for (i = 1; i < sub.size(); i++)
						{
							if ((sub[i] >= '0') && (sub[i] <= '9'))
							{
								n = n * 10 + (sub[i] - '0');
							}
							else
							{
								invalid = 1;
							}
						}
						
						if (0 == invalid)
						{
							switch (c)
							{
								case 'A':
								{
									point.first -= n;
									break;
								}
								case 'D':
								{
									point.first += n;
									break;
								}
								case 'S':
								{
									point.second -= n;
									break;
								}
								case 'W':
								{
									point.second += n;
									break;
								}
								default:
								{
									break;
								}
							}
						}
					}
				}
				cout << point.first << ',' << point.second << endl;
			}
			return;
		}
};


int main()
{
	
	Solution s;
	s.c_solution2();
	return 0;
}





