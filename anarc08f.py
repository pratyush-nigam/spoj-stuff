import sys

def dijkstra(G,start,dest=None):
	D = {}	# dictionary of final distances
	Q = {}  # est.dist. of non-final vert.
	for i in G.iterkeys():
		Q[i] = 10000
		D[i] = 10000
		#print i
	Q[start] = 0
	#print dest 
	while Q!=None:
		L = sorted(Q.iteritems(),key=lambda (k,v): (v,k))	
		
		if L:
			v = L[0][0]
		else:
			break
		D[v] = Q[v] 
		#print Q
		if v == dest:
			break		
		del Q[v]
		for w in G[v]:
			x = D[v] + w[0]
			if x < D[w[1]]:
				D[w[1]] = x
				Q[w[1]] = x

	return D 
	
def ss(n,c,r,index):
	try: 
		s = sys.stdin.readline()
		s = s.replace('\n','')
		cars = s.split(' ')
		tow = cars[0]
		roads={}
		for i in xrange(0,r):
			try: 
				road = sys.stdin.readline()
				road = road.replace('\n','')
				road = road.replace(' ','')
				if '>' in road:
					lis = []
					i=None
					if '<' in road:
						i = road.split('<')
						j = road.split('-')
						lis.append(int(j[1]))
					else:
						i = road.split('-')
						lis.append(int(i[2]))
					k = road.split('>')
					lis.append(k[1])
					if roads.has_key(i[0]):
						roads[i[0]].append(lis)
					else:
						roads[i[0]] = [] 
						roads[i[0]].append(lis)
				if '<' in road:
					lis = []
					i = road.split('<')
					k = road.split('-')
					d = None
					#print k
					#lis.append(int(k[1]))
					if '>' in road:
						j = road.split('>')
						lis.append(int(k[1]))
						d = j[1]
					else:
						lis.append(int(k[1]))
						d = k[3]
					lis.append(i[0])
					if roads.has_key(d):
						roads[d].append(lis)
					else:
						roads[d] = []
						roads[d].append(lis)
			except: break
		#print roads
		total = 0
		for i in xrange(1,len(cars)):
			D1= dijkstra(roads,tow,cars[i])
			D2= dijkstra(roads,cars[i],tow)
			total = total + D1[cars[i]] + D2[tow]
		st = str(index) + ". " + str(total)
		stdout.write(st+"\n")
	except: 
		return

def shortest():
	i = 1
	while(1):
		try:
			s = sys.stdin.readline()
			s = s.replace('\n','')
			n,c,r = (int(i) for i in s.split(' '))
			if n==0 and r==0 and c==0:
				return
			else:
				ss(n,c,r,i)
			i=i+1
		except:
			break
	return
			
shortest()
sys.exit(0)	
