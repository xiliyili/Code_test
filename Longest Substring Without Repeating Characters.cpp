#include <string>
#include <unordered_map>
#include <algorithm>
using std::max;
using std::string;
using std::unordered_map;

class Solution 
{
	public:
		int lengthOfLongestSubstring(string s) 
		{
	        int ret = 0;
			int ret1 = 0;
			int start = 0;
	        unordered_map<char, int> trace;
	        for (int i = 0; i < s.size(); i++) 
			{
	            auto found = trace.find(s[i]);
	            if (found != trace.end() && found->second >= start) 
				{
	                ret = max(ret, i - start);
	                start = found->second + 1;
	            }
	            trace[s[i]] = i;
	        }
			ret1 = s.size() - start;
			/* 1、过程中一次也未重复 */
			/* 2、过程中出现过重复，之后到末尾再也未重复 */
	        return max(ret, ret1);
	    }
};
		
#include <string.h>
#include <iostream>
#include <string>
#include <map>
using namespace std;
/*
 * Idea:
 * 
 * Using a map store each char's index.
 * 
 * So, we can be easy to know the when duplication and the previous duplicated char's index.
 * 
 * Then we can take out the previous duplicated char, and keep tracking the maxiumn length. 
 * 
 */
int lengthOfLongestSubstring1(string s) 
{
	map<char, int> m;
	int maxLen = 0;
	int lastRepeatPos = -1;
	
	for(int i=0; i<s.size(); i++)
	{
		if (m.find(s[i])!=m.end() && lastRepeatPos < m[s[i]]) 
		{
			lastRepeatPos = m[s[i]];
		}
		
		if ( i - lastRepeatPos > maxLen )
		{
			maxLen = i - lastRepeatPos;
		}
		m[s[i]] = i;
	}
	return maxLen;
}

//don't use <map>
int lengthOfLongestSubstring(string s) 
{
	const int MAX_CHARS = 256;
	int m[MAX_CHARS];
	memset(m, -1, sizeof(m));
	int maxLen = 0;
	int lastRepeatPos = -1;
	
	/* 通过字符数组来记录不重复的个数 */
	for(int i = 0; i < s.size(); i++)
	{
		if (m[s[i]] != -1 && lastRepeatPos < m[s[i]]) 
		{
			/* 记录上次重复字符索引 */
			lastRepeatPos = m[s[i]];
		}
		
		if ( i - lastRepeatPos > maxLen )
		{
			maxLen = i - lastRepeatPos;
		}
		
		/* 记录该字符索引号 */
		m[s[i]] = i;
	}
	return maxLen;
}

int main(int argc, char** argv)
{
	string s = "abcabcbb";
	cout << s << " : " << lengthOfLongestSubstring(s) << endl;

	s = "bbbbb";
	cout << s << " : " << lengthOfLongestSubstring(s) << endl;

	s = "bbabcdb";
	cout << s << " : " << lengthOfLongestSubstring(s) << endl;

	if (argc>1){
		s = argv[1];
		cout << s << " : " << lengthOfLongestSubstring(s) << endl;
	}

	return 0;
}

