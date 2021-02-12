import time, random

def evaluate_n2(A, x):
	sum = 0
	for i in range(len(A)):
		a = 1
		for j in range(i):
			temp = x
			a = a * temp
		sum += A[i] * a
	return sum
	# code for O(n^2)-time function
	
def evaluate_n(A, x):
	sum = A[0]
	temp = x
	for i in range(1,len(A)):
		sum += A[i]*x
		x *= temp
		
	return sum
	# code for O(n)-time function
	
random.seed()		# random 함수 초기화
n = input()
n = int(n)
# n 입력받음
A = [random.randint(-999,999) for i in range(n)]
'''for i in range(n):
	ran_num = random.randint(-999,999)
	A.append(ran_num)
	'''
	
x = random.randint(-99,99)
#print(A)
# 리스트 A를 randint를 호출하여 n개의 랜덤한 숫자로 채움

evaluate_n(A,x)
# evaluate_n2 호출
# evaluate_n 호출
before_n2 = time.clock()
evaluate_n2(A,x)
after_n2 = time.clock()

before_n = time.clock()
evaluate_n(A,x)
after_n = time.clock()

print(after_n2 - before_n2, after_n - before_n)
# 두 함수의 수행시간 출력