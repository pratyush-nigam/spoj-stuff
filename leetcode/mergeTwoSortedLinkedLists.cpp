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
		ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			ListNode *s1,*s2,*l3,*s3;
			s1=l1;
			s2=l2;
			l3=(ListNode*)malloc(sizeof(ListNode));
			s3=l3;
			while(s1!=NULL && s2!=NULL)
			{
				if(s1->val < s2->val)
				{
					s3->next = s1;
					s1 = s1->next;
					s3 = s3->next;
				}
				else
				{
					s3->next = s2;
					s2 = s2->next;
					s3 = s3->next;
				}
			}
			if(s1==NULL)
				s3->next = s2;
			else if(s2==NULL)
				s3->next = s1;
			l3=l3->next;
			return l3;
		}
};

