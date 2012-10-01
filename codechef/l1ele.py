import sys
import psyco

def main():
	s = sys.stdin.readlines()
	s[0].replace('\n','')
	k,n = (int(i) for i in s[0].split(' '))
	f = []
	for i in xrange(1,k+1):
		s[i] = s[i].replace('\n','')
		f.append(s[i])
	for i in xrange(k+1, len(s)):
		s[i] = s[i].replace('\n','')
		if len(s[i]) >= 47:
			print "Good"
		else:
			flag = 1
			for j in f:
				if j in s[i]:
					flag = 0
					print "Good"
					break
			if flag == 1:
				print "Bad"		
	return

if __name__ == "__main__":
	main()	
