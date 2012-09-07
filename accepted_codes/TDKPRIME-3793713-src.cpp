#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#define MAXK 5000001
#define MAXP 3000000
#define MAXQ 50001
//#include<iostream>

using namespace std;

vector<char> prime(MAXP,-1);
int orders[MAXK];
int counter = 1;

int main(){
	int bit,i,j,n;
	scanf("%d", &n);

	orders[counter++] = 2;
	orders[counter++] = 3;
	orders[counter++] = 5;

	int sixP[8] = {1,5,7,11,13,17,23,25};

	//find first 5000000 primes
	for (i=0; counter<=5000000; i++) {

		//for every bit
		for (bit=0; bit<8; bit++) {

			//if it is prime
			if (prime[i] & (1<<(7-bit))) {
				int temp = 6 + i*30 + sixP[bit];

				// record prime
				orders[counter++] = temp;

				//every 6k+1'th and 6k+5'th multiples of prime are reset
				int m = (MAXP*30 )/temp - 5;
				for (j = 6; j<=m; j += 6) {
					//6k+1'th multiple
					int multiple = (j+1)*temp;
					switch ((multiple - 6)%30) {
						case 1:
							prime[(multiple - 6)/30] &= ~(1<<7);
							break;
						case 5:
							prime[(multiple - 6)/30] &= ~(1<<6);
							break;
						case 7:
							prime[(multiple - 6)/30] &= ~(1<<5);
							break;
						case 11:
							prime[(multiple - 6)/30] &= ~(1<<4);
							break;
						case 13:
							prime[(multiple - 6)/30] &= ~(1<<3);
							break;
						case 17:
							prime[(multiple - 6)/30] &= ~(1<<2);
							break;
						case 23:
							prime[(multiple - 6)/30] &= ~(1<<1);
							break;
						case 25:
							prime[(multiple - 6)/30] &= ~1;
							break;
						default:
							break;
					}

					//6k+5'th multiple
					multiple = (j+5)*temp;
					switch ((multiple - 6)%30) {
						case 1:
							prime[(multiple - 6)/30] &= ~(1<<7);
							break;
						case 5:
							prime[(multiple - 6)/30] &= ~(1<<6);
							break;
						case 7:
							prime[(multiple - 6)/30] &= ~(1<<5);
							break;
						case 11:
							prime[(multiple - 6)/30] &= ~(1<<4);
							break;
						case 13:
							prime[(multiple - 6)/30] &= ~(1<<3);
							break;
						case 17:
							prime[(multiple - 6)/30] &= ~(1<<2);
							break;
						case 23:
							prime[(multiple - 6)/30] &= ~(1<<1);
							break;
						case 25:
							prime[(multiple - 6)/30] &= ~1;
							break;
						default:
							break;
					}
				}
			}
		}
	}
	int temp;
	for (i=0; i<n; i++) {
		scanf("%d",&temp);
		printf("%d\n", orders[temp]);
	}
	return 0;
}
