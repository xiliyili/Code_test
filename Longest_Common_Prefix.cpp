#include <string> 
#include <vector>
using std::string; using std::vector;

class Solution 
{
public:
    string longestCommonPrefix(vector<string> &strs) 
	{
        if (strs.empty())
		{
			return "";
		}
		
        for (size_t i = 0; i < strs.front().size(); ++i) 
		{
			/* 
			
			vector<string> &strs;
			for (const auto &s : strs)
			{
			//
			}
			
			It's actually a C++11 feature called "range-based for-loops".
			
			近似等价于：
			
			// Let's assume this vector is not empty.
			
			vector<string> strs;
			 
			const vector<string>::iterator end_it = strs.end();
			 
			for (vector<string>::iterator it = strs.begin(); it != end_it; ++it) 
			{
			  const string& s = *it;
			  // Some code here...
			}

			*/
			
            for (const auto &str : strs)
            {
				if (i == str.size() || str.at(i) != strs.front().at(i))
				{
					return strs.front().substr(0, i); 
				}     
            }
        }
		
		return strs.front();
    }
};

