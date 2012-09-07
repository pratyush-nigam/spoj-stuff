import sys
#import psyco
#psyco.full()

def number(n):
	n1 = 1
	d = {}
	li = []
	li.append(n1)
	d[1] = 	li
	t = 1
	while 1:
		l = []
		for i in d:
			for j in xrange(0,len(d[i])):
				if d[i][j]%n==0:
					return d[i][j]
				l.append(d[i][j]*10+0)
				l.append(d[i][j]*10+1)
		d[t+1] = l
		t = t+1

		

def main():
	e = sys.stdin.readline()
	s = sys.stdin.readlines()
	for n in s:
		n = n.replace('\n','')
		n = int(n)
		num = n
		flag = 0
		while num > 0:
			if num%10 == 1 or num%10 == 0:
				num = num/10
			else:
				flag = 1
				break
		if flag == 1:
			n1 = number(n)
			sys.stdout.write(str(n1)+"\n")
		elif flag == 0:
			sys.stdout.write(str(n)+"\n")	

if __name__ == "__main__":
	main()
