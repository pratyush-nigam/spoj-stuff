import sys
def fun():
	s=raw_input()
	a,b=(int(i) for i in s.split(' '))
	flag=0
	if(a==0):
		if(b==0):
			flag=1
	while(flag!=1):
		print a**b
		s=raw_input()
		a,b=(int(i) for i in s.split(' '))
		flag=0
		if(a==0):
			if(b==0):
				flag=1
	return 0
fun()
sys.exit(0)
