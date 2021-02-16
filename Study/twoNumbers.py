import math

def guess_two_missing_numbers(n, S, T):
	num_sum = ((1 + n) * n) / 2 - S # 1부터 n까지의 합 공식 이용, T(n) = c1(상수 시간)
	num_sq = (n * (n + 1) * (2 * n + 1)) / 6 - T  # 1부터 n까지의 제곱의 합 공식 이용, T(n) = c2(상수 시간)
	num_mul = (num_sq - num_sum ** 2) / 2 # (a + b) ^ 2 = a^2 + b^2 - 2*a*b, T(n) = c3(상수 시간)
	num_minus = math.sqrt(num_sum**2 + 4 * num_mul) # (a - b) ^ 2 = (a + b)^2 - 4*a*b, T(n) = sqrt(n)
	
	a = (int)((num_sum + num_minus) / 2)
	b = (int)(num_sum - a)
	
	if (a > b) :
		temp = a
		a = b
		b = temp
	
	return a, b  # a < b are two missing numbers

n = int(input())
S, T = [int(x) for x in input().split()]
a, b = guess_two_missing_numbers(n, S, T)
print(a, b)

# T(n) = sqrt(n) + c
#      = O(sqrt(n))