import psyco
import sys

def main():
	t = sys.stdin.readline()
	t = t.replace('\n', '')
	t = int(t)
	s = sys.stdin.readlines()
	for i in s():
		i = i.replace('\n', '')
		n,k = (int(j) for j in i.split(' '))
		num = n**n
		

if __name__ == "__main__":
	main()
