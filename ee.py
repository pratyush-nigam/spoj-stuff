import math
def arrLeader ( A ):
    hash = {}
    for i in A:
        if i in hash:
            hash[i]= hash[i] + 1
        else:
            hash[i]=1
    n = len(A)
    n = int(math.ceil(n/2))
    for i in hash:
        if hash[i] > n:
            return i
        else:
            return -1
    pass
