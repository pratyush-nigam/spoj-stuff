#include<stdio.h>

static int swapOddEvenBits(int x) {
	return (((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1));
}


int main() {
	unsigned int a, b = 0xaaaaaaaa, c = 0x55555555;
	printf("enter the number: \n");
	scanf("%d", & a);
	int i = a;
	a = ((a & b) >> 1) | ((a & c) << 1);
	printf("%d %d\n", a,swapOddEvenBits(i));
}
