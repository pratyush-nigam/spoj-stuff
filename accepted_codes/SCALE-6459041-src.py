import sys
import psyco
psyco.full()

def main():
	cases = sys.stdin.readlines()
	a = []
	for i in xrange(0,20):
		a.append(3**i)
	for s in cases:
		s = s.replace('\n','') 
		n,x = (int(i )for i in s.split(' '))
		#print n, x
		su = 0
		for i in xrange(0,n):
			su += a[i]
		if x > su:
			sys.stdout.write(str(-1)+"\n")
		else:
			b = []
			while x > 0:
				b.append(x%3)
				x = x/3	
			b.append(0)
			#print b	
			c = [1]*len(b)
			ca = 0
			for i in xrange(0,len(b)):
				su = c[i]+b[i]+ca
				if su > 2:
					ca = 1
					b[i] = su%3
				else:
					ca = 0
					b[i] = su
			#print b
			f = []
			se = []
			for i in xrange(0,len(b)):
				b[i] = b[i] - 1
				if b[i] > 0:
					f.append(i+1)
				elif b[i] < 0:
					se.append(i+1)
			#print b
			#print se
			#print f
			if len(se) > 0:
				for i in xrange(0, len(se)):
					if i < len(se)-1:
						sys.stdout.write(str(se[i])+" ") 
					else:
						sys.stdout.write(str(se[i])+"\n")
			else:
				sys.stdout.write("\n")
			for i in xrange(0, len(f)):
				if i < len(f)-1:
					sys.stdout.write(str(f[i])+" ") 
				else:
					sys.stdout.write(str(f[i])+"\n")
					
if __name__ == "__main__":
	main()
