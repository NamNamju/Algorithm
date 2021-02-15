def reconstruct(B):
	# B로부터 A를 재구성해 리턴
	# 이 함수를 작성합니다~
	C = [] # 비어있는 리스트
	A = [0] * len(B) # 0으로 초기화 된 리스트
	#A = [for i in range(len(B))]

	for i in range(len(B)) :
		C.insert(B[i],i)
	
	for j in range(len(B)) :
		A[j] = C.index(j)
	
	
	return A
	
B = [int(x) for x in input().split()]
A = reconstruct(B)
print(A)

# 1. 본인이 작성한 알고리즘의 수행시간을 간략히 분석해보자
# T(n) = 1 + 1 + n * (n + 1) + n * (1 + 1)
#      = n^2 + 3 * n + 2
# 2. 수행시간 T(n)을 Big-O료 표기해보자
# T(n) = O(n^2)