S = str(input())
SS = 0
sum = 0


for i in range(len(S)):
    
    SS = ord(S[i]) // 100
    sum += SS
    SS = ord(S[i]) % 100
    sum += SS // 10
    sum += SS % 10
    for j in range(0,sum):
        print(S[i], end='')
        if j == sum - 1:
            print()
        
    
    sum = 0