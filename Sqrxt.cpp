#include<cstdio>
#include<cmath>
using namespace std;
double sqrt1(double num) {
	double i = 0, j = num, mid;

	if(j < 1) j = 1;

	mid = (i+j)/2;

	while(fabs(mid*mid-num) > 0.00001) {
		if(mid*mid > num) j = mid;
		else i = mid;

		mid = (i+j)/2.0;
	}

	return mid;
}

double sqrt2(double x) {
	// Start typing your C/C++ solution below
	// DO NOT write int main() function
	if(x==1 || x==0)
		return x;
	double l=0,r=(x/2)+1,m;
	while(r-l > 0.001)
	{
		m = l + (r-l)/2;
		if(m*m == x)
			return m;
		else if(m*m < x)
			l = m;
		else
			r = m;
	}
	return l;
}

int main()
{
	double y = sqrt1(2);
	printf("%lf\n",y);
	y = sqrt2(2);
	printf("%lf\n",y);
	return 0;
}
