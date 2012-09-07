import sys
import psyco
psyco.full()
def main():
	e = sys.stdin.readline()
	s = sys.stdin.readlines()
	for i in s:
		x,y = (int(j) for j in i.split(' '))
		sys.stdout.write(str(x*y)+"\n")

if __name__ == "__main__":
	main()
