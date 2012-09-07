#include<stdio.h>
#include<string.h>
int main()
{
    while(1)
    {
    	char s[1000000];
    	scanf("%s",s);
	if(strcmp(s,"BYE")==0)
		break;
        printf("%s",s);
        int i=0;
 	    long long int num1=0,num2=0,num=0;
		while(i<strlen(s)  && isdigit(s[i]))
		{
			char c[3];
			int j;
			for(j=0;j<3;j++)
				if(i+j < strlen(s))
					c[j]=s[i+j];
				else
					break;
			c[3]='\0';
			if(strcmp(c,"063")==0)
				num=num*10;
			else if(strcmp(c,"010")==0)
				num=num*10+1;
			else if(strcmp(c,"093")==0)
				num=num*10+2;
			else if(strcmp(c,"079")==0)
				num=num*10+3;
			else if(strcmp(c,"106")==0)
				num=num*10+4;
			else if(strcmp(c,"103")==0)
				num=num*10+5;
			else if(strcmp(c,"119")==0)
				num=num*10+6;
			else if(strcmp(c,"011")==0)
				num=num*10+7;
			else if(strcmp(c,"127")==0)
				num=num*10+8;
			else if(strcmp(c,"111")==0)
				num=num*10+9;
			i+=3;
		}
		i++;
		num1=num;
		//printf("%d\n",num);
		num=0;
		while(i<strlen(s) && isdigit(s[i]))
		{
			char c[3];
			int j;
			for(j=0;j<3;j++)
				c[j]=s[i+j];
			c[j]='\0';	
	//		printf("%s\n",c);
			if(strcmp(c,"063")==0)
				num=num*10;
			else if(strcmp(c,"010")==0)
				num=num*10+1;
			else if(strcmp(c,"093")==0)
				num=num*10+2;
			else if(strcmp(c,"079")==0)
				num=num*10+3;
			else if(strcmp(c,"106")==0)
				num=num*10+4;
			else if(strcmp(c,"103")==0)
				num=num*10+5;
			else if(strcmp(c,"119")==0)
				num=num*10+6;
			else if(strcmp(c,"011")==0)
				num=num*10+7;
			else if(strcmp(c,"127")==0)
				num=num*10+8;
			else if(strcmp(c,"111")==0)
				num=num*10+9;
			i+=3;
		}
		i=0;
		num2=num;
		//printf("%d\n",num);
		num=num1+num2;
		//printf("%d\n",num);
		if(num>0){
		//int rev=(int)log10(num)+1;
        	int a[10000];
		while(num>0)
		{
			a[i]=(num%10);
			num/=10;
 		    i++;	
		}
        i--;
		while(i>=0)
		{
			int rem=a[i];
			i--;
			if(rem==0)
				printf("063");
			else if(rem==1)
				printf("010");
			else if(rem==2)
				printf("093");
			else if(rem==3)
				printf("079");
			else if(rem==4)
				printf("106");
			else if(rem==5)
				printf("103");
			else if(rem==6)
				printf("119");
			else if(rem==7)
				printf("011");
			else if(rem==8)
				printf("127");
			else if(rem==9)
				printf("111");
		}
        }
        else
        printf("063");
		printf("\n");                
    }
    return 0;
}

