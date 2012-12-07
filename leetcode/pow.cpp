class Solution {
	public:
		double pow(double x, int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int flg = 0;
			if(n<0){
				n = -n;
				flg = 1;
			}
			int i;
			double res=1.0,tmp=x;
			for(i=n;i>0;i=i/2)
			{
				if(i%2==1)
					res = res*tmp;
				tmp = tmp * tmp;
			}
			if(flg == 1)
				res = 1/res;
			return res;
		}
};
