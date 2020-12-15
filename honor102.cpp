#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <cctype>

#define MAP_SORT (1)
using namespace std;

/* 创造结构体将字符数据联系起来 */
typedef struct
{
	int num;    /**< 字符ASCII码 */
	int count;  /**< 字符数量 */
} s;

class Solution
{
public:
	void cplus_solution()
	{
		string str;

		while (cin >> str)
		{
			/* 利用map的字典序排序 */
			map<char, int> mci;
			vector<string> vs;
			string temp = "";
			int maxcount = 0;

			for (int i = 0; i < str.size(); i++)
			{
				if (isalpha(str[i]) || isalnum(str[i]) || isspace(str[i]))
				{
					/* count函数可统计数目 */
					mci[str[i]] = count(str.begin(), str.end(), str[i]);
					maxcount = (maxcount > mci[str[i]]) ? maxcount : mci[str[i]];
				}
			}

			for (int i = maxcount; i > 0; i--)
			{
				map<char, int>::iterator it;

				/* map中为字典序，因此不需要后续排序 */
				for (it = mci.begin(); it != mci.end(); it++)
				{
					if (i == it -> second)
					{
						temp = temp + it -> first;
					}
#if !MAP_SORT
					if (!temp.empty())
					{
						sort(temp.begin(), temp.end());
						vs.push_back(temp);
						temp = "";
					}
#endif
				}
			}
#if !MAP_SORT

			temp = "";

			for (int i = 0; i < vs.size(); i++)
			{
				temp += vs[i];
			}
#endif

			cout << temp << endl;
#ifdef MAP_SORT

			temp = "";
#endif
		}

		return;
	}

	void cplus2_solution()
	{
		string str;

		while (cin >> str)
		{
			map<char, int> helper;

			for (auto s : str)
			{
				++helper[s];
			}

			vector<pair<char, int>> vec(helper.begin(), helper.end());
			stable_sort(vec.begin(), vec.end(), [](const pair<char, int> &p1, const pair<char, int> &p2)
			{
				return p1.second > p2.second;
			});

			for (auto p : vec)
			{
				cout << p.first;
			}

			cout << endl;
		}

		return;
	}
	void cplus3_solution()
	{
		string st;

		while (getline(cin, st))
		{
			int a[128] = {0}, i, j, b[128] = {0};

			for (i = 0; i < st.length(); ++i)
			{
				a[st[i]]++;
				b[st[i]]++;
			}
			
			/* 默认升序排列 */
			sort(a, a + 128);
			sort(st.begin(), st.end());

			for (i = 127; i >= 0; --i)
			{
				if (a[i] == 0)
				{
					break;
				}

				for (j = 0; j < st.length(); ++j)
				{
					if (b[st[j]] == a[i])
					{
						cout << st[j];
						b[st[j]] = 0;
						break;
					}
				}
			}

			cout << endl;
		}


		return;
	}
	void c_solution()
	{
		char str[1000];

		//while (gets(str))
		{

			int count[256] = {0};
			int max = 0;

			for (int i = 0; i < strlen(str); i++)
			{
				count[str[i]]++;

				if (count[str[i]] > max)
				{
					max = count[str[i]];
				}
			}

			/* 依次寻找max次数，max - 1次数，每次都是256循环  */
			while (max)
			{
				for (int i = 0; i < 256; i++)
				{
					if (count[i] == max)
					{
						printf("%c", i);
					}
				}

				max--;
			}

			printf("\n");
		}

		return;
	}
	/*解题思路*/
	/*
	1.创造结构体将字符ASCII码和数量联系起来；
	2.将结构体下标和ASCII值匹配；
	3.计算每个字符出现的次数count；
	4.将结构体根据count降序排序（注意：排序的是结构体而不是count）；
	5.将排序好的结构体中的字符ASCII码以字符依次输出，ASCII==0时停止输出。
	*/
	void c2_solution()
	{
		char str[1000] = { 0 };

		//while (gets(str))
		{
			s c[1000] = { 0 };
			int len = strlen(str);

			for (int i = 0; i < 128; i++)  //将结构体下标和num值匹配
			{
				c[i].num = i;
			}

			for (int i = 0; i < len; i++)  //计算每个字符出现的次数count
			{
				c[str[i]].count++;
			}

			for (int i = 0; i < 128; i++)  //将结构体根据count降序排序
			{
				for (int j = 0; j < 128 - i; j++)
				{
					if (c[j].count < c[j + 1].count)
					{
						s a = c[j];//此处注意是将结构体排序而不是count！
						c[j] = c[j + 1];
						c[j + 1] = a;
					}
				}
			}

			for (int i = 0; i < 128; i++)  //将排序好的结构体中的字符ASCII码以字符输出
			{
				if (c[i].count == 0)  //判断出现的字符是否输出完毕
				{
					printf("\n");
					break;
				}

				printf("%c", c[i].num);
			}
		}

		return;
	}
};

int main()
{

	Solution s;
	s.cplus2_solution();
	return 0;
}
