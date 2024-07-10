
# def max_games_won(n, moves):
#     wins = 0
#     for i in range(1, n):
#         if moves[i] == moves[i-1]:
#             if i < n-1 and moves[i] != moves[i+1]:
#                 wins += 1
#                 i += 1
#         else:
#             wins += 1
#     return wins


# t = int(input())

# for _ in range(t):
#     n = int(input())
#     moves = input().strip()
#     print(max_games_won(n, moves))

