#include<stdio.h>
int main()
    {
             char ch[5] = {'1','2','3','4','5'};
             char *p = (char *)(&ch+1);
            char *q = &ch+1;
           printf("%d     %c    %c\n",sizeof(ch),*(p-1),*q);
		return 0;
       }
