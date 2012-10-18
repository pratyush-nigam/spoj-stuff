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
		ListNode *deleteDuplicates(ListNode *head) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			//set<int> s;
			ListNode *st=head;
			ListNode *prev=NULL;
			int flg=1;
			while(st!=NULL)
			{
				if(st->next!=NULL && st->val==st->next->val)
				{

					while(st->next!=NULL && st->val==st->next->val)
					{
						st->next = st->next->next;
					}
					if(head == st)
					{
						head = head->next;
						st = head;
					}
					else
					{
						prev->next = st->next;
						st = st->next;
					}
				}
				else
				{
					prev=st;
					st = st->next;
				}

			}
			return head;
		}
};
