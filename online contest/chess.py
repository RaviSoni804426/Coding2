# t=int(input())
# for i in range(t):
#     n,m,p=map(int,input().split())
#     if n*m*p==0:print("0")
#     elif 2*n==m+p:print("-1")
#     else:
#         if 
#         print("NO")



def calculate_max_draws(t, test_cases):
    results = []
    
    for _ in range(t):
        p1, p2, p3 = test_cases[_]
        total_points = p1 + p2 + p3
        
        if total_points % 2 != 0:
            results.append(-1)
        else:
            draws = total_points // 2 - max(p1, p2, p3)
            if draws < 0 or draws > min(p1, p2, p3):
                results.append(-1)
            else:
                results.append(draws)
    
    return results

t = int(input())
test_cases = [list(map(int, input().split()))]
results = calculate_max_draws(t, test_cases)
for result in results:
    print(result)

