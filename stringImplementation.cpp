#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class String
{
	char a[1000];
	int len;
	public:
		void add(char);
		String()
		{
			len=0; 
			a[len]='\0';
		}
		//String operator+(String, char);
		char charAt(int);
};

void String::add(char s)
{
	a[len++] = s;
	a[len] = '\0';
}


char String::charAt(int pos)
{
	return a[pos];
}

String operator+(String s, char a)
{
	s.add(a);
	return s;
}

int main()
{
	String s;
	s.add('a');
	s = s + 'b';
	printf("%c\n",s.charAt(1));
	return 0;
}
