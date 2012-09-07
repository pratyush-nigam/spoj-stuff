import sys

def reverse():
	s = raw_input()
	l = s.split(' ')
	r = '' 
	l.reverse()
	for i in l:
		r = r + i + ' '
	print r

reverse() 
