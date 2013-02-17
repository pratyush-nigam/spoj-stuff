#!/usr/bin/python

def fun(a):
	l = []
	for i in xrange(0,len(a)):
		if(a[i]>0)
			l.push_back(i)
	l.sort()
	return l[len(l)-1]

# Head ends here
def printNextMove(player, player1Mancala, player1Marbles, player2Mancala, player2Marbles):
	if player1 == 1:    
		print fun(player1Marbles)
	else:
		print fun(player2Marbles)

# Tail starts here
player = input()
mancala1 = input()
mancala1_marbles = [int(i) for i in raw_input().strip().split()]
mancala2 = input()
mancala2_marbles = [int(i) for i in raw_input().strip().split()]
print printNextMove(player, mancala1, mancala1_marbles, mancala2, mancala2_marbles)
