N = int(input())

if N % 2024 == 0:
    if N <= 100000:
        print("Yes")
    else:
        print("No")
else:
    print("No")