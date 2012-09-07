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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *a, *b, *c,*st;
        a = l1;
        b=l2;
        c = (ListNode *)malloc(sizeof(ListNode));
        st = c;
        int carry=0,sum;
        while(a!=NULL && b!=NULL)
        {
            sum = a->val+b->val+carry;
            ListNode *newnode;
            newnode = (ListNode *)malloc(sizeof(ListNode));
            newnode->val = sum%10;
            sum/=10;
            carry = sum;
            newnode->next = NULL;
            st->next = newnode;
            st = st->next;
            a=a->next;
            b=b->next;
        }
        if(a==NULL && b!=NULL)
        {
            while(b!=NULL){
             sum = b->val+carry;
             ListNode *newnode;
             newnode = (ListNode *)malloc(sizeof(ListNode));
             newnode->val = sum%10;
             sum/=10;
             carry = sum;
             newnode->next = NULL;
             st->next = newnode;
             st = st->next;
             b=b->next;
            }
        }
        else if(a!=NULL && b==NULL)
        {
            while(a!=NULL){
             sum = a->val+carry;
             ListNode *newnode;
             newnode = (ListNode *)malloc(sizeof(ListNode));
             newnode->val = sum%10;
             sum/=10;
             carry = sum;
             newnode->next = NULL;
             st->next = newnode;
             st = st->next;
             a=a->next;
            }
        }
        if(a==NULL && b==NULL)
        {
             if(carry>0)
             {
                 ListNode *newnode;
                 newnode = (ListNode *)malloc(sizeof(ListNode));
                 newnode->val = carry;
                 newnode->next = NULL;
                 st->next = newnode;
                 st = st->next;
             }
        }
        c = c->next;
        return c;
    }
};
