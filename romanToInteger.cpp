#include <iostream>
#include <string>
using namespace std;

int romanCharToInt(char ch)
{
    int d = 0;
	
    switch(ch)
	{
        case 'I':  
            d = 1;  
            break;  
        case 'V':  
            d = 5;  
            break;  
        case 'X':  
            d = 10;  
            break;  
        case 'L':  
            d = 50;  
            break;  
        case 'C':  
            d = 100;  
            break;  
        case 'D':  
            d = 500;  
            break;  
        case 'M':  
            d = 1000;  
            break;  
    }
    return d;
}

int romanToInt(string s) 
{
    if (s.size() <= 0)
	{
		return 0;
    }
	
    int result = romanCharToInt(s[0]);
	
    for (int i=1; i<s.size(); i++)
	{
        int prev = romanCharToInt(s[i-1]);
        int curr = romanCharToInt(s[i]);
		
		/* if left<right such as : IV(4), XL(40), IX(9) ... */
		/* 两个字符拼成1个数，因此减去前一次多加的小字符 */
        if (prev < curr) 
		{
            result = result - prev + (curr-prev);
        }
		else
		{
            result += curr;
        }
    }
    return result;
}

int main(int argc, char**argv)
{
    string s("XL");
    if (argc>1){
        s = argv[1];
    }
    cout << s << " : " << romanToInt(s) << endl;
    return 0;
}

#include <string>
using std::string;

class Solution 
{
	public:
	    int romanToInt(string s) 
		{
	        int res = 0;
	        for (auto iter = s.rbegin(); iter != s.rend(); ++iter)
	        {
	            switch (*iter)
	            {
					/* 题目输入仅可为IV、IX、XL、XC、CD、CM */
	                case 'I': 
						res += res >= 5 ? -1 : 1; 
						break;
	                case 'V': 
						res += 5; 
						break;
	                case 'X': 
						res += 10 * (res >= 50 ? -1 : 1); 
						break;
	                case 'L': 
						res += 50; 
						break;
	                case 'C': 
						res += 100 * (res >= 500 ? -1 : 1); 
						break;
	                case 'D': 
						res += 500; 
						break;
	                case 'M': 
						res += 1000; 
						break;
	            }
	        }
	        return res;
	    }
};

