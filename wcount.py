import sys
import psyco
psyco.full()
#import math

def factorial(n):
	if n==0:
		return 1
	elif n==1:
		return 1
	else:
		return n*factorial(n-1)

def main():
	t = sys.stdin.readline()
	cases = sys.stdin.readlines()
	for case in cases:
		case = case.replace('\n','')
		l = len(case)
		l = factorial(l)
		a = {}
		for i in case:
			if i in a:
				a[i] = a[i] + 1
			else:
				a[i] = 1
		for i in a:
			if a[i] > 1:
				l = int(l/factorial(a[i]))
		l = l%(10**9 + 7)
		sys.stdout.write(str(l)+"\n")

if __name__ == "__main__":
	main()
