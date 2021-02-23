import numpy as np
from numpy import inf

def relax(u, v):
	if dp[u] + graph[u][v] < dp[v] :
		dp[v] = graph[u][v] + dp[u] # 선택된 노드를 거쳐서 인접노드로 가는 비용 계산
		decreaseKey(v)
	
def heapify_up(k) :
	while k > 0 and dp[Q[(k - 1) // 2]] > dp[Q[k]]:
		Q[k], Q[(k - 1) // 2] = Q[(k - 1) // 2], Q[k]
		k = (k - 1) // 2
		
def heapify_down(k,n): # 최솟값
	# n = 힙의 전체 노드수 [heap_sort를 위해 필요함]
	# A[k]가 힙 성질을 위배한다면, 밑으로
	# 내려가면서 힙성질을 만족하는 위치를 찾는다
	#n = len(Q)
	while 2 * k + 1 < n:
		L, R = 2 * k + 1, 2 * k + 2
		if L < n and dp[Q[L]] < dp[Q[k]]:
			m = L
		else:
			m = k
		if R < n and dp[Q[R]] < dp[Q[m]]:
			m = R  # m = A[k], A[L], A[R] 중 최솟값의 인덱스
		if m != k:  # A[k]가 최솟값이 아니라면 힙 성질 위배
			Q[k], Q[m] = Q[m], Q[k]
			k = m
		else:
			break
		
def delete_min(): #최소힙에서 min delete
	if len(Q) == 0: return None
	key = Q[0]
	Q[0], Q[len(Q) - 1] = Q[len(Q) - 1], Q[0]
	Q.pop()  # 실제로 리스트에서 delete!
	heapify_down(0, len(Q))  # len(self.A) = n-1
	return key
	
def decreaseKey(v):
	for i in range(len(Q)) :
		if Q[i] == v:
			heapify_up(i)
			
def Dijkstra() :
	dp[0]=0 # 탐색 시작하는 노드의 최소비용은 0
	while not len(Q) == 0: # 힙이 비어있지 않다면, O(n)
		u = delete_min() 
		# 힙의 가장 위에는 가장 적은 비용을 가진 node의 정보가 들어있다.
		# O(logn)
		
		for v in range(len(graph[u])) : # O(m)
			if graph[u][v] != 0:
				relax(u,v) # O(logn)
			
			
n = int(input()) # num of nodes
m = int(input()) # num of edges

graph = [[0]*n for _ in range(n)] # n x n
Q = [] # min heap
dp = [inf]*n

connect = [0]*n

for i in range(m):
	u, v, w = [int(c) for c in input().split()]
	graph[u][v] = w
	connect[u] += 1
	
for i in range(n):
	if connect[i] != 0:
		Q.append(i)

Dijkstra()

for d in dp:
	print(d if d != inf else "inf", end=' ')
	
# 전체 수행시간 = O((n + m)logn)