
def QuickSelect(L, k) :
	p = L[0] # pivot
	A = []
	B = []
	M = []
	
	for x in L:
		if x < p :
			A.append(x)
		elif x > p : 
			B.append(x)
		else: 
			M.append(x)
	
	if len(A) >= k:
		return QuickSelect(A,k)
	elif len(A)+len(M) < k:
		return QuickSelect(B,k-len(A)-len(M))
	else:
		return p
	

n,k = map(int,input().split())
L = list(map(int,input().split()))
print(QuickSelect(L,k))
	