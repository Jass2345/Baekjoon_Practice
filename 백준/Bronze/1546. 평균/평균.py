N = int(input())
G = list(map(int,input().split()))
M = max(G)

New_G = [(g / M * 100) for g in G]

result = sum(New_G) / N
print(result)