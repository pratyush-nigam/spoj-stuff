import sys
def t():
	f=input()
	for g in range(0,f):
		s=raw_input()
		b,c,d=(int(i) for i in s.split(' '))
		a=(2*c)-(b+d)
		print a
	return 0
t()
sys.exit(0)