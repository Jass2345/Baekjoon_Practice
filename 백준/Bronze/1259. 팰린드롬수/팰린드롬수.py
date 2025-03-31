while(1):
    N = list(input())
    stack = 0
    if N[0] == '0':
        quit()
    for i in range(len(N)):
        if N[i] == N[len(N)-i-1]:
            stack += 1
    if stack == len(N):
        print("yes")
    else:
        print("no")