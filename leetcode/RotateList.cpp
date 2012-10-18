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
		ListNode *rotateRight(ListNode *head, int k) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(head==NULL||k==0)
				return head;
			int i=1,n=0;
			ListNode *s=head;
			while(s!=NULL)
			{
				s = s->next;
				n++;
			}
			k = k%n;
			if(k==0)
				return head;
			ListNode *st=head;
			ListNode *b = st;
			ListNode *p = NULL;
			while(st->next!=NULL)
			{
				if(i>=k)
				{
					p = b;
					b = b->next;
					st = st->next;
				}
				else
				{
					st = st->next;
				}
				i++;
			}
			if(p!=NULL)
			{
				st->next = head;
				head = b;
				p->next= NULL;
			}
			return head;
		}
};
