chess = [1, 1, 2, 2, 2, 8]

a = list(map(int,input().split()))

for i in range(0, 6):
    print(chess[i] - a[i], end=' ')