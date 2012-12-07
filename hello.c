#include<stdio.h>
void f(char *x) {

	x++;

	*x = 'a';

}

int main() {

	char str[5];
       	scanf("%s",str);
	//char *str = "hello";
	f(str);

	printf("%s", str);

}
