import sys
import math

def prod(seq):
	res = 1
	for e in seq:
		res *= e
	return res

def nck(n,k):
	return prod(xrange(n-k+1, n+1)) // prod(xrange(1, k+1))

def main():
	#y = sys.stdin.readlines()
	y = raw_input()
	#for i in y:
		#i = i.replace('\n','')
	(m,n,t,p) = [int(j) for j in y.split(' ')]
	total = int(math.ceil(float(p)/t))
	count = 0.0
	for i in xrange(total,p+1):
		count = count  + ((nck(p,i)*nck(m-p,n-i))/float(nck(m,n)))
	print '%0.10f' %count
	return

if __name__ == "__main__":
	main()
