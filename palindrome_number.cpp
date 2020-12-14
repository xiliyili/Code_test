#include <stdio.h>

class Solution 
{
	public:
    	bool isPalindrome(int x) 
		{
        	if (x < 0) 
			{
            	return false;
        	}
        
	        int len = 1;
	        for (len = 1; (x / len) >= 10; len *= 10 );
	        
	        while (x != 0 )
			{
	            int left = x / len;
	            int right = x % 10;
				
	            if(left != right)
				{
	                return false;
	            }
				
	            /* %为去除首位，/10操作为去除末位 */
	            x = (x % len) / 10;
				
				/* 原字符去除了首位和末位，相当于缩放了100倍 */
	            len /= 100;
	        }
	        return true;
    	}
    
	    bool isPalindrome2(int x) 
	    {
	        return (x >= 0 && x == reverse(x));
	    }

	private:    
	    int reverse(int x) 
		{
	        int y=0;
			int n;
	        while( x != 0 )
			{
	            n = x % 10;
	            y = y * 10 + n;
	            x /= 10;
	        }
	        return y;
	    }
};



int main()
{
    Solution s;
    printf("%d is %d\n", 0, s.isPalindrome(0) );
    printf("%d is %d\n", -101, s.isPalindrome(-101) );
    printf("%d is %d\n", 1001, s.isPalindrome(1001) );
    printf("%d is %d\n", 1234321, s.isPalindrome(1234321) );
    printf("%d is %d\n", 2147447412, s.isPalindrome(2147447412) );
    printf("%d is %d\n", 2142, s.isPalindrome(2142) );
}

class Solution 
{
	public:
    	bool isPalindrome(int x) 
		{	
        	if (x < 0) 
			{
				return false;
			}
			
        	long rev = 0;
        	int origin = x;
			
			/* 同样为赋值 */
			/* long rev{0}, origin{x}; */
       		do 
			{
            	rev = rev * 10 + x % 10;
        	} while (x /= 10);
			
        	return rev == origin;
    }
};

