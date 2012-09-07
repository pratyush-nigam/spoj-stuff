import sys

def mergesort(a):
	if len(a) < 2:
		return a
	l = []
	r = []
	for i in xrange(0,len(a)):
		if i < len(a)/2:
			l.append(a[i])
		else:
			r.append(a[i])
	l = mergesort(l)
	r = mergesort(r)
	a = []
	j = 0
	k = 0
	while j<len(l) and k<len(r):
		if(l[j] < r[k]):
			a.append(l[j])
			j+=1
		else:
			a.append(r[k])
			k+=1
	if(j==len(l)):
		while k<len(r):
			a.append(r[k])
			k+=1
	else:
		while j<len(l):
			a.append(l[j])
			j+=1
	return a
s = raw_input()
a = s.split(' ')
a = mergesort(a)
print a
