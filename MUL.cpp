#include<cstdio>
#include<string>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
void multiply(string num1, string num2) {
	vector<int> num;
        int i,j,n=num1.size(),m=num2.size();
        for(i=0;i<n+m;i++)
            num.push_back(0);
        for(i=n-1;i>=0;i--)
        {
            int t,carry;
            for(j=m-1;j>=0;j--)
            {
                t = num[i+j+1] + carry + ((num1[i]-'0')*(num2[j]-'0'));
                carry = t/10;
                num[i+j+1] = t%10;
            }
            num[i+j+1]=carry;
        }
        i = 0;
        while(num[i]==0 && i<n+m-1)
            i++;
        string s="";
        while(i<n+m){
	printf("%d",num[i]);
            s.push_back((num[i++]+'0'));
	}
printf("\n");
cout << s << endl;
        return;
}
int main()
{
	int g;
	scanf("%d\n",&g);
	while(g--)
	{
		string n1,n2;
		cin >> n1 >> n2;
		multiply(n1,n2);
	}
	return 0;
}    
