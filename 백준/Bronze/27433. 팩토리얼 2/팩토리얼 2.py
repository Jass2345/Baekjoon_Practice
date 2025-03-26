N = int(input())
NR = N
RESULT = 1
for i in range(0,NR):
    RESULT *= N
    N -= 1
print(RESULT)