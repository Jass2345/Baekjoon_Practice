L = int(input())
W = input()
Plus = 0
for i in range(L):
    Plus += (ord(W[i]) - 96) * 31**i
Plus %= 1234567891
print(Plus)