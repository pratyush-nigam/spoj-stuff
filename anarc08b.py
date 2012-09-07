import sys
import psyco
psyco.full()
def pri():
	try: s=sys.stdin.readline()
	except: return
	s = s.replace('\n','')
	while(s!="BYE"):
		i=0
        	num1=0
		num2=0
		num=0;
		while(s[i] is not '+' and i<len(s)):
			c=""
			for j in range(0,3):
				if i+j < len(s):
					c=c+s[i+j];
				else:
					break
	#	print c
			if(c=="063"):
				num=num*10;
			elif(c=="010"):
				num=num*10+1;
			elif(c=="093"):
				num=num*10+2;
			elif(c=="079"):
				num=num*10+3;
			elif(c=="106"):
				num=num*10+4;
			elif(c=="103"):
				num=num*10+5;
			elif(c=="119"):
				num=num*10+6;
			elif(c=="011"):
				num=num*10+7;
			elif(c=="127"):
				num=num*10+8;
			elif(c=="111"):
				num=num*10+9;			
			i=i+3;
		i= i + 1;
		num1=num;
	#print num
		num=0;	
		while(s[i]!='='):
			c=""
			for j in range(0,3):
				c=c+s[i+j];
	#	print c
			if(c=="063"):
				num=num*10;
			elif(c=="010"):
				num=num*10+1;
			elif(c=="093"):
				num=num*10+2;
			elif(c=="079"):
				num=num*10+3;
			elif(c=="106"):
				num=num*10+4;
			elif(c=="103"):
				num=num*10+5;
			elif(c=="119"):
				num=num*10+6;
			elif(c=="011"):
				num=num*10+7;
			elif(c=="127"):
				num=num*10+8;
			elif(c=="111"):
				num=num*10+9;			
			i= i + 3;
		num2=num;
		res=num1+num2
		st=""
		if(res==0):
			sys.stdout.write(s+"063")
		else:
			while(res>0):
				rem=res%10
				res/=10
				if(rem==0):
					st="063"+st
				elif(rem==1):
					st="010"+st	
				elif(rem==2):
					st="093"+st	
				elif(rem==3):
					st="079"+st	
				elif(rem==4):
					st="106"+st	
				elif(rem==5):
					st="103"+st	
				elif(rem==6):
					st="119"+st	
				elif(rem==7):
					st="011"+st	
				elif(rem==8):
					st="127"+st	
				elif(rem==9):
					st="111"+st	
			sys.stdout.write(s+st+"\n")	
		try: s=sys.stdin.readline()
		except: break
pri()
sys.exit(0)

