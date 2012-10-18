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
		ListNode *partition(ListNode *head, int x) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			ListNode *s = head;
			ListNode *st = NULL;
			ListNode *prev=NULL;
			int flg=1;
			while(s!=NULL)
			{
				if(s->val >= x && flg==1)
				{
					st = prev;
					flg=0;
					break;
				}
				prev = s;
				s = s->next;
			}
			ListNode *p = prev;
			ListNode *y = s;
			while(y!=NULL)
			{
				if(y->val < x)
				{
					ListNode *tmp = y;
					p->next = y->next;
					y = y->next;
					if(st==NULL)
					{
						tmp->next = head;
						head = tmp;
						st = tmp;
					}
					else
					{
						tmp->next = st->next;
						st->next = tmp;
						st = st->next;
					}

				}
				else
				{
					p = y;
					y = y->next;
				}
			}

			return head;
		}
};
