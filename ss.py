import sys

def main():
	c = sys.stdin.readlines()
	for i in c:
		s = i.split(',')
		print s[1]

main()
