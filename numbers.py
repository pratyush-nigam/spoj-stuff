import sys
def main():
	s = raw_input()
	l = []
	for i in s.split(' '):
		l.append(int(i))
	for i in xrange(0,len(l)):
		if(l[i]!=i+1):
			tmp = l[i]
			l[i] = l[l[i]-1 ]
			l[l[i]-1] = tmp 
	for i in xrange(0,len(l)):
		if(l[i]!=i+1):
			tmp = l[i]
			l[i] = l[l[i]-1]
			l[l[i]-1] = tmp 
	print l	

main()
sys.exit(0)
