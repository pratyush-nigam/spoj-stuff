import sys

def quicksort(a):
	if len(a)<4:
		return a 
	p = a[len(a)-1]
	ls = []
	gr = []
	eq = []
	eq.append(p)
	for i in xrange(0,len(a)-1):
		if a[i] < p:
			ls.append(a[i])
		elif a[i] > p:
			gr.append(a[i])
		else:
			eq.append(a[i])
	
	return quicksort(ls)+eq+quicksort(gr)
s = sys.stdin.readline()
s = s.replace('\n','')
a = []
for i in s.split(' '):
	a.append(int(i))	
a = quicksort(a)
print a
