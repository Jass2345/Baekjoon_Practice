C = int(input())
count = [0] * C
result = 0
for i in range(C):
    W = list(input())
    for j in range(0, len(W)):
        if W[j:j+3] == ['f', 'o', 'r']:
            count[i] += 1
        elif j <= len(W) - 5 and W[j:j+5] == ['w', 'h', 'i', 'l', 'e']:
            count[i] += 1
result = max(count)
print(result)