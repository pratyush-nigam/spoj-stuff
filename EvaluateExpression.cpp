#include<string>
#include<vector>
#include<algorithm>
#include<iostream>
#include<stack>
using namespace std;
int evalexp(string s)
{
	stack <int> st;
	int i=0,sum;
	while(i<s.size())
	{
		if(s[i]==' ')
			i++;
		else if('0' <= s[i] && s[i] <= '9')
		{
			int j=0,flg=1,num=0;
			/*if(i-1>=0 && s[i-1]=='-')
			{
				flg = 0;
			}*/	
			while(i+j < s.size() && '0' <= s[i+j] && s[i+j]<='9')
			{
				num = num*10 + (s[i+j]-'0');
				j++;
			}
			/*if(flg==0)
			{
				num = -num;
			}*/
			st.push(num);
			i = i+j;
			//sum = sum 
		}
		else if(s[i]=='/')
		{
			int a,b;
			a = st.top();
			st.pop();
			b = st.top();
			st.pop();
			sum = b/a;
			st.push(sum);
			i++;
		}
		else if(s[i]=='+')
		{
			int a,b;
			a = st.top();
			st.pop();
			b = st.top();
			st.pop();
			sum = a+b;
			st.push(sum);
			i++;
		}
		else if(s[i]=='*')
		{
			int a,b;
			a = st.top();
			st.pop();
			b = st.top();
			st.pop();
			sum =  a*b;
			st.push(sum);
			i++;
		}
		else if(s[i]=='-')
		{
			int a,b;
			a = st.top();
			st.pop();
			b = st.top();
			st.pop();
			sum = a-b;
			st.push(sum);
			i++;
		}
	}
	return st.top();
}

int prec(char c)
{
	if(c=='/')
		return 4;
	if(c=='*')
		return 3;
	else
		return 1;

}

string postfix(string s)
{
	int i=0;
	string y="";
	stack<char> st;
	while(i<s.size())
	{
		if(s[i]=='(')
		{
			int j=1,flg=1;
			while(flg!=0)
			{
				if(s[i+j]=='(')
					flg++;
				if(s[i+j]==')')
					flg--;
				j++;
			}
			//cout << "->"  << s.substr(i+1,j-2) << " " << j << endl;
			y = y + postfix(s.substr(i+1,j-2));
			i = i+j+1;
		}
		else
		{
			if('0'<=s[i] && s[i]<='9')
			{
				int j = 0;
				while(i+j < s.size() && '0'<=s[i+j] && s[i+j]<='9')
				{
					y = y + s[i+j];
					j++;
				}
				//cout << i+j << endl;
				y = y + ' ';
				i = i + j;
			}
			else if(st.empty())
			{
				st.push(s[i]);
				i++;
			}
			else if(prec(st.top()) <= prec(s[i]))
			{
				st.push(s[i]);
				i++;	
			}
			else
			{
				while(!st.empty() && prec(st.top()) > prec(s[i]))
				{
					y = y + st.top();
					st.pop();
				}
				y = y + ' ';
				st.push(s[i]);
				i++;
			}
		}
	}
	while(!st.empty())
	{
		y = y + st.top();
		st.pop();
	}
	return y;
}

int main()
{
	string s;
	cin >> s;
	cout << postfix(s) << endl;
	cout << evalexp(postfix(s)) << endl;
	return 0;
}
