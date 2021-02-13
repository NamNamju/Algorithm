def two_max(A, left, right):
	# M = 가장 큰 값, m = 두 번째로 큰 값
	# 주의: 입력에 따라 M과 m이 같을 수도 있다
	# 1. base case
	if left == right: # 범위에 해당하는 값이 하나 뿐일 때
		return A[left], None # 가장 큰 값만 정의되므로, 두 번째 큰 값은 None으로 표시해 리턴
	
	mid = (left+right)//2
	# 2. 재귀적으로 left ... mid에 대해 가장 큰 값 L1과 두 번째로 큰 값 L2 계산
	# 3. 재귀적으로 mid+1 ... right에 대해 가장 큰 값 R1과 두 번째로 큰 값 R2 계산
	# 4. L1, L2, R1, R2로부터 left ... right에 대한 M, m을 계산 
	#   (L2와 R2가 None일 수 있음을 유의)
	# 여기서부터 코드 작성
	if len(A) == 2:
		if A[0] > A[1] : return A[0],A[1]
		else: return A[1],A[0]
		
	else:
		
		Lm_0, Lm_1 = two_max(A,left,mid)
		Rm_0, Rm_1 = two_max(A,mid+1,right)

	if Lm_0 >=Rm_0 :	
		if Lm_1 == None:
			M = Lm_0
			m = Rm_0
		else :
			if Rm_0 >= Lm_1 :
				M = Lm_0
				m = Rm_0
			else: 
				M = Lm_0
				m = Lm_1
	else:
		if Rm_1 == None:
			M = Rm_0
			m = Lm_0
		else :
			if Lm_0 >= Rm_1 :
				M = Rm_0
				m = Lm_0
			else: 
				M = Rm_0
				m = Rm_1
	
	return M, m
	
# n개의 정수를 읽어 A에 저장
A = list(map(int,input().split()))
M, m = two_max(A, 0, len(A)-1)
print(M,m)

# 아래 물음에 대한 자신의 생각을 주석 형태로 서술하세요~
# Q1: 이 알고리즘의 수행시간 T(n)의 점화식은?
# A1: T(n) = 1 (k = 0)
#     T(n) = 4 (k = 1)
#     T(n) = 2*T(n/2) + 5 (k >= 2) 이다.
#
# Q2: T(n)의 점화식을 전개한 후 Big-O로 표기하면?
# A2: O(n)
#
# Q3: 이 알고리즘의 (최학의 경우의) 비교 횟수를 최대한 정확히 분석해보면
# A3: T(n) = 2*T(n/2) + 5이다. 이하 상수인 5를 C2라고 설정하겠다. 그러면,
#     T(n) = 2*{2*T(n/2^2) + C2} + C2
#          = 2^2*T(n/2^2) + 2*C2+ C2
#          = 2^2*{2*T(n/2^3) + C2} + 2*C2 + C2
#          = 2^3*T(n/2^3) + 2^2*C2 + 2*C2 + C2
#          = ...
#          = 2^k*T(n/2^k) + (1 + 2 + ... + 2^(k-1))*C2
#          = 2^k*T(n/2^k) + (2^k - 1)*C2
#          = n*T(1) + (n - 1)*C2
#          = 4*n + (n - 1)*5
#          = 9*n - 5
#      결국 T(n) = 9*n - 5 이다.
#
#