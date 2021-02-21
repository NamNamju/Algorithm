n = int(input())

#dp_1 -> 1x2 도미노와 2x1 도미노로만 만드는 경우
dp_1 = []
dp_1.append(0)
dp_1.append(1)
dp_1.append(2)

#dp_2 -> 모든 도미노 or L자 도미노 경우
dp_2 = []
dp_2.append(0)
dp_2.append(1)
dp_2.append(2)

for i in range(3,n+1) :
	dp_1.append(dp_1[i-1] + dp_1[i-2] + 2*dp_2[i-2]) # 총 개수
	dp_2.append(dp_1[i-1] + dp_2[i-1]) # I자 모양과 같이 채우는 경우 + L자만 있는 경우
	
print(dp_1[n]) # 답

# 점화식 : dp_1[i] = dp_1[i-1] + dp_1[i-2] + 2 * dp_2[i-2]
#         dp_2[i] = dp_1[i-1] + dp_2[i-2]
# 일단 2xn 판의 끝에 채운 것이 I자 도미노인지, 가로로 세운 I자 도미노 두개인지, L자 도미노 인지, 뒤집은 L자 도미노인지로 4가지 경우로 구별할 수 있다.
# 앞 서 말한 두 개의 경우는 dp_1에 해당하며, 뒤에 말한 두 개는 같다고 말할 수 있기 때문에 dp_2에 해당한다.
# 수행시간 : O(n)
