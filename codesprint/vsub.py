def longsub(a):
	n = len(a)
	q = zeros(n)//new array
	for k in xrange(0,n):
		m = 0
		for j in xrange(0,k):
			if a[k]>a[j]:
