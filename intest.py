import sys
import psyco
psyco.full()

def main():
	try:
		s = sys.stdin.readline()
		s = s.replace('\n','')
		n,k = (int(i) for i in s.split(' '))
		#print n,k
		count = 0
		s = sys.stdin.readlines()
		for i in s:
			t = int(i) 
			if t%k == 0:
				count = count +1
			
		sys.stdout.write(str(count)+"\n")
	except:
		return

if __name__ == "__main__":
	main()
