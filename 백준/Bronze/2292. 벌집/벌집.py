N = int(input())
step = 1
floor = 1

while N > floor:
    floor += 6 * step
    step += 1
print(step)