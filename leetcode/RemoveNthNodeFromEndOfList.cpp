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
		ListNode *removeNthFromEnd(ListNode *head, int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(head==NULL)
				return head;

			ListNode *f=head;
			ListNode *b=head;
			ListNode *prev=NULL;
			int i=0;
			while(i<n)
			{
				f = f->next;
				i++;
			}
			while(f!=NULL)
			{
				prev = b;
				b = b->next;
				f = f->next;
			}
			if(prev!=NULL)
			{
				prev->next = b->next;
				free(b);
			}
			else
			{
				head = head->next;
			}
			return head;
		}
};
