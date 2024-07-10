 def max_score(l,r):
    dp = [0] * (r + 1)
    for x in range(r, l - 1, -1):
        for p in range(2, x /2 + 1): 
            if x % p == 0:
                dp[x] = max(dp[x], dp[x /p] + 1)
    return dp[l]

t = int(input())
for _ in range(t):
   l, r = map(int, input().split())
    print(max_score(l, r))