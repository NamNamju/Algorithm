import random, timeit

##
## 여기에 세 가지 정렬함수를 위한 코드를...
##

def quick_sort(A, first, last) :
    global Qc, Qs
    if first >= last:
        Qc += 1
        return
    left, right = first+1, last
    pivot = A[first]
    while left <= right:
        Qc += 1
        while left <= last and A[left] < pivot:
            Qc += 1
            left += 1
        Qc += 1
        while right > first and A[right] > pivot:
            Qc += 1
            right -= 1
        Qc += 1

        Qc += 1
        if left <= right:
            Qs += 1
            A[left], A[right] = A[right], A[left]
            left += 1
            right -= 1
    Qc += 1

    A[first], A[right] = A[right], A[first]
    Qs += 1
    quick_sort(A, first, right-1)
    quick_sort(A, right+1, last)

def merge_sort(A, first, last) :
    global Mc, Ms

    Mc += 1
    if first >= last: return
    merge_sort(A, first, (first+last)//2)
    merge_sort(A, (first+last)//2 +1, last)
    merge_two_sorted_lists(A, first, last)

def merge_two_sorted_lists(A, first, last) :
    global Mc, Ms

    m = (first + last)//2
    i, j = first, m+1
    B = []
    while i <= m and j <= last:
        Mc += 1

        Mc += 1
        if A[i] <= A[j]:
            Ms += 1
            B.append(A[i])
            i += 1
        else:
            Ms += 1
            B.append(A[j])
            j +=1
    Mc += 1

    for k in range(i, m+1):
        Ms += 1
        B.append(A[k])
    for k in range(j, last+1):
        Ms += 1
        B.append(A[k])
    for i in range(first, last+1):
        Ms += 1
        A[i] = B[i - first]

def make_heap(A):  # 최댓값
    n = len(A)
    for k in range(n - 1, -1, -1):  # A[n-1] → ... → A[0]
        heapify_down(A,k, n)

def heapify_down(A, k, n):  # 최댓값
    global Hc, Hs
        # n = 힙의 전체 노드수 [heap_sort를 위해 필요함]
        # A[k]가 힙 성질을 위배한다면, 밑으로
        # 내려가면서 힙성질을 만족하는 위치를 찾는다

    while 2 * k + 1 < n:  # [❓] 조건문이 어떤 뜻인가?
        Hc += 1
        L, R = 2 * k + 1, 2 * k + 2  # [❓] L, R은 어떤 값?

        Hc += 1
        if L < n and A[L] > A[k]:
            m = L
        else:
            m = k

        Hc += 1
        if R < n and A[R] > A[m]:
            m = R  # m = A[k], A[L], A[R] 중 최댓값의 인덱스

        Hc += 1
        if m != k:  # A[k]가 최댓값이 아니라면 힙 성질 위배
            Hs += 1
            A[k], A[m] = A[m], A[k]
            k = m

        else:
            break  # 왜 break할까?
    Hc += 1

def heap_sort(A) :
    global Hc, Hs
    make_heap(A)
    n = len(A)
    for k in range(len(A) -1, -1 ,-1) :
        Hs += 1
        A[0], A[k] = A[k], A[0]
        n = n - 1
        heapify_down(A,0,n)


# 아래 코드는 바꾸지 말 것!
# 직접 실행해보면, 어떤 값이 출력되는지 알 수 있음
#

def check_sorted(A):
	for i in range(n-1):
		if A[i] > A[i+1]: return False
	return True

#
# Qc는 quick sort에서 리스트의 두 수를 비교한 횟수 저장
# Qs는 quick sort에서 두 수를 교환(swap)한 횟수 저장
# Mc, Ms는 merge sort에서 비교, 교환(또는 이동) 횟수 저장
# Hc, Hs는 heap sort에서 비교, 교환(또는 이동) 횟수 저장
#
Qc, Qs, Mc, Ms, Hc, Hs = 0, 0, 0, 0, 0, 0

n = int(input())
random.seed()
A = []
for i in range(n):
    A.append(random.randint(-1000,1000))
B = A[:]
C = A[:]

print("")
print("Quick sort:")
print("time =", timeit.timeit("quick_sort(A, 0, n-1)", globals=globals(), number=1))
print("  comparisons = {:10d}, swaps = {:10d}\n".format(Qc, Qs))
print("Merge sort:")
print("time =", timeit.timeit("merge_sort(B, 0, n-1)", globals=globals(), number=1))
print("  comparisons = {:10d}, swaps = {:10d}\n".format(Mc, Ms))

print("Heap sort:")
print("time =", timeit.timeit("heap_sort(C)", globals=globals(), number=1))
print("  comparisons = {:10d}, swaps = {:10d}\n".format(Hc, Hs))

# 진짜 정렬되었는지 check한다. 정렬이 되지 않았다면, assert 함수가 fail됨!
assert(check_sorted(A))
assert(check_sorted(B))
assert(check_sorted(C))
