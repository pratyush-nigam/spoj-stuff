import sys
import operator
def prod(seq):
	res = 1
	for e in seq:
		res *= e
	return res

def nck(n,k):
	return prod(xrange(n-k+1, n+1)) // prod(xrange(1, k+1))

def ncr(n, k):
	k = min(k, n-k)
	if r == 0: 
		return n
	num = reduce(operator.mul, xrange(n, n-r, -1))
	denom = reduce(operator.mul, xrange(1, r+1))
	return num//denom



n = int(raw_input())

for i in xrange(0,n):
	st = raw_input()
	(n,r) =	[int(i) for i in st.split(' ')]
	print ncr(n,r)%142857
