N, M = map(int, input().split())
C = list(map(int, input().split()))
T = 0

for i in range(N):
  for j in range(i + 1, N):
    for k in range(j + 1, N):
      if C[i] + C[j] + C[k] > T and C[i] + C[j] + C[k] <= M:
        T = C[i] + C[j] + C[k]
print(T)