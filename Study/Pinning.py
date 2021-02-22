def pin(A):
	# code here
	pin, count = 0, 0
	for i in range(len(A)):
		if A[i][0] > pin : 
			pin = A[i][1]
			count += 1
			
	return count

# 리스트 A에 구간 n개를 저장 후, pin 함수를 불러 리턴 값을 출력한다

n = int(input())

B = []

for i in range(n) :
	A = []
	start, end = map(int, input().split())
	A.append(start)
	A.append(end)
	B.append(A)

B.sort(key = lambda x : x[1])

print(pin(B))

# 먼저 sort함수로 오른쪽 끝 점(b) 기준으로 작은 순으로 막대를 정렬한다.
# for 함수를 돌려서 만약에 왼쪽 끝 점(a)이 pin을 꽂는 지점 보다 클 경우
# pin을 꽂을 수 없다고 판단하고 pin을 오른쪽 끝 점(b)로 옮겨서 꽂는다.(count)
# 
# 수행시간 : 간략하게 나타내면 2n + n*logn이기 때문에
#           T(n) = O(nlogn) 이다.
