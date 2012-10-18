/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
	public:
		/*ListNode *reverse(ListNode* m, ListNode *n)
		  {
		  ListNode * next, current,prev;
		  prev=NULL;
		  current = m;
		  while(current!=n)
		  {
		  next = current->next;
		  current->next = prev;
		  prev = current;
		  current = next;
		  }
		  return prev;
		  }*/
		ListNode *reverseBetween(ListNode *head, int m, int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i=1;
			ListNode *ms;
			ListNode *s=head;
			ListNode* p=NULL;
			ListNode *current;
			ListNode *prev;
			ListNode *next;
			while(s!=NULL)
			{
				if(i==m)
				{
					current = s;
					prev=NULL;
					ms = s;
					while(i<=n)
					{
						next = current->next;
						current->next = prev;
						prev = current;
						current = next;
						i++;
					}
					if(p==NULL)
						head = prev;
					else
						p->next = prev;
					ms->next = next;
					break;
				}
				else
				{
					p=s;
					s = s->next;
					i++;
				}
			}
			return head;
		}
};
