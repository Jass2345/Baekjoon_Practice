S = input()

for ch in S:
    num_sum = sum(map(int, str(ord(ch))))
    print(ch * num_sum)