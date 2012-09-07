import sys
def fun():
	while(1):
		try:
			n=input()
		except:
			break
		count=1
		while(n!=1):
			if(n%2==1):
				n=3*n+1
			else:
				n/=2
			count+=1
		print count
	return
	
fun()
sys.exit(0)