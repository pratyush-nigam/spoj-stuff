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
		ListNode *reverseKGroup(ListNode *head, int k) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i;

			if(k==1)
				return head;
			ListNode *st=head;
			ListNode *current;
			ListNode *prev;
			ListNode *next;
			ListNode *p = NULL;
			while(st!=NULL)
			{
				i=0;
				ListNode *begin =st;
				ListNode *end = st;
				while(1)
				{
					if(i==k)
					{
						int j = 0;
						current = begin;
						prev = NULL;
						while(j<k)
						{
							next = current->next;
							current->next = prev;
							prev = current;
							current = next;
							j++;
						}
						if(p==NULL)
						{
							head = prev;
							begin->next = end;
							p=begin;
						}
						else
						{
							p->next = prev;
							begin->next = end;
							p = begin;
						}
						break;
					}
					else if(end==NULL)
					{
						break;
					}
					else
					{
						end = end->next;
						i++;
					}
				}
				if(end!=NULL){
					st = end;
				}
				else
					break;
			}
			return head;
		}
};
