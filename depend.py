import sys
import psyco
psyco.full()

def main():
	p = {} #all the packages dependencies
	S = [] #Set of packages which dont depend on any1
	st = sys.stdin.readlines()
	#p,S = (sp(s,p,S) for s in st)
	for s in st:
		s = s.replace('\n','')
		l = s.split(' ')
		a = l[0]
		l.remove(a)
		l.remove('0')
		l = list(set(l))
		if len(l) == 0:
			S.append(a)
		else:
			p[a] = l
	count = 0
	while len(S)>0:
		n = S[0]
		S.remove(n)
		count += 1
		for i in p:
			#print i,p[i]
			if n in p[i]:
				p[i].remove(n)
				if len(p[i])==0:
					S.append(i)
		#print S
					
	sys.stdout.write(str(count)+"\n")

if __name__ == "__main__":
	main()
