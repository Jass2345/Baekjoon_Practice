L = int(input())
W = list(input())
Plus = 0
for i in range(L):
    Plus += (ord(W[i]) - 96) * 31**i
print(Plus)