jinho = input().strip()
n = int(input().strip())

count = 0

for _ in range(n):
    friend = input().strip()
    if friend == jinho:
        count += 1
print(count)
