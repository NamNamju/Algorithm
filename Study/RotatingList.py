# 뼈대 코드가 없으니 입력 처리 코드도 직접 작성할 것!
def rotateList(A, first, last, x) :
	
	mid = (last + first) // 2
	if A[mid] == x: # x의 위치를 찾음
		return mid
	
	elif A[mid] > A[first]: # 맨 앞 원소 값 < 중간 원소 값
		if A[mid] > x >= A[first] : # 범위 안에 있으므로 앞쪽 탐색
			return rotateList(A, first, mid, x)
		else : # 뒤쪽 탐색
			return rotateList(A, mid+1, last, x)
		
	elif A[mid] < A[first]: # 맨 앞 원소 값 > 중간 원소 값
		if A[mid] < x <= A[last] : # 범위 안에 있으므로 뒤쪽 탐색
			return rotateList(A, mid+1, last, x)
		else: # 앞쪽 탐색
			return rotateList(A, first, mid, x)

A = list(map(int,input().split()))
x = min(A)
answer = rotateList(A, 0, len(A), x) # 최솟값의 위치를 찾는다

if answer == 0: # 최솟값의 위치가 제일 앞
	print(0)
else:
	print(len(A)-answer)


# 질문. 본인의 알고리즘의 비교횟수를 분석한 후, Big-O로 표기해보자
# 대답. O(logN)
'''
첫 시행 후에는 N / 2, 두번째 시행 후에는 N / 2^2 ... K번째 시행 후에는 (1/2)^K * N 이 되고, 결국 이 값은 1에 수렴하게 된다.
양 변에 2^K를 곱해주면 N = 2^K가 되고, log2를 취해주면 log2(N) = K가 된다.
결국 Big-O는 O(logN) 이 된다.

'''
 