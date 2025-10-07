T = int(input())

for _ in range(T):
    quiz = input().strip()
    count = 0
    total = 0

    for ch in quiz:
        if ch == 'O':
            count += 1
            total += count
        else:
            count = 0

    print(total)
