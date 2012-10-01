import sys

def f(n,p):
	if n==1:
		return p
	return p*(1 - f(n-1,p)) + (1-p)*f(n-1,p)

def main():
	p = float(raw_input())
	q = int(raw_input())
	for i in xrange(0,q):
		n = int(raw_input())
		y = f(n,p)
		print "%.4f" % y

if __name__ == "__main__":
	main()
