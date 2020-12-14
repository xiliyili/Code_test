#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>

using namespace std;

class Solution
{
	public:
		void cplus_solution()
		{
			return;
		}
		
		int bit_trans(int num)
		{
			int a[4] = {0};
			if (num >= '0' && num <= '9')
			{
				num = num - '0';
			}
			
			else if (num >= 'a' && num <= 'f')
			{
				num = num - 'a' + 10;
			}
			
			else if (num >= 'A' && num <= 'F')
			{
				num = num - 'A' + 10;
			}
			else
			{
				return num;
			}
			
			a[0] = (num >> 3) & 1;
			a[1] = (num >> 2) & 1;
			a[2] = (num >> 1) & 1;
			a[3] = num & 1;		
			num = a[0] | (a[1] << 1) | (a[2] << 2) | (a[3] << 3);
			
			if (num >= 10)
			{
				num += 'A' - 10;
			}
			else
			{
				num += '0';
			}
			
			return num;
		}
		void c_solution()
		{			
			char str1[3000] = {0};
			char str2[3000] = {0};
			while (scanf("%s %s", str1, str2) != EOF)
			{
				int len = strlen(str1) + strlen(str2);
				char str3[6000] = {0};
				strcat(str3, str1);
				strcat(str3, str2);
				char temp;
				
				for (int i = 0; i < len - 2; i += 2)
				{
					for(int j = 0; j < len - 2 - i; j += 2)
					{
						if (str3[j] > str3[j + 2])
						{
							temp = str3[j];
							str3[j] = str3[j + 2];
							str3[j + 2] = temp;
						}
					}
				}
				
				for (int i = 1; i < len - 1; i += 2)
				{
					for(int j = 1; j < len - 1 - i; j += 2)
					{
						if (str3[j] > str3[j + 2])
						{
							temp = str3[j];
							str3[j] = str3[j + 2];
							str3[j + 2] = temp;
						}
					}
				}
				
				for(int i = 0; i < len; i++)
				{
					printf ("%c", bit_trans(str3[i]));
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



