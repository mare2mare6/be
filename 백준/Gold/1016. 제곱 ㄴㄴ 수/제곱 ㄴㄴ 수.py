import math

min_val, max_val = input().split()
min_val = int(min_val)
max_val = int(max_val)

range_size = max_val - min_val + 1

square_free = []
for k in range(range_size):
    square_free.append(True)

limit = int(math.isqrt(max_val)) + 1 

for i in range(2, limit):
    sq = i * i
    first = ((min_val + sq - 1) // sq) * sq
    for j in range(first, max_val + 1, sq):
        square_free[j - min_val] = False

count = 0
for x in square_free:
    if x:
        count += 1

print(count)
