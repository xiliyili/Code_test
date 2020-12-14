#include <cstddef>
#include <cstdlib>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) 
	{
        ListNode dummy(0);
		ListNode *tail = &dummy;
		
        for (div_t sum{0, 0}; sum.quot || l1 || l2; tail = tail->next) 
		{
            if (l1) 
			{ 
				sum.quot += l1->val; 
				l1 = l1->next; 
			}
			
        	if (l2) 
			{ 
				sum.quot += l2->val; 
				l2 = l2->next; 
			}
            sum = div(sum.quot, 10);
            tail->next = new ListNode(sum.rem);
        }
			
        return dummy.next;
    }
};
class Solution 
{
	public:
			ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) 
			{
	    		int x = 0, y = 0, carry = 0, sum = 0;
	    		ListNode *h = NULL;
				ListNode **t = &h; 
				
				while (l1 != NULL || l2 != NULL)
				{
			        x = getValueAndMoveNext(l1);
			        y = getValueAndMoveNext(l2);
					sum = carry + x + y;
        			ListNode *node = new ListNode(sum % 10);
			        *t = node;
			        t = &(node->next);
        			carry = sum / 10;
				}
    
				if (carry > 0) {
				    ListNode *node = new ListNode(carry % 10);
				    *t = node;
				}
    
    			return h;
			}
	private:
			int getValueAndMoveNext(ListNode* &l)
				{
				    int x = 0;
					
				    if (l != NULL)
					{
				        x = l->val;
				        l = l->next;
				    }
					
			    	return x;
				}
};

