N = int(input())

count = 0

for _ in range(N):
    s = input()          
    days = int(s[2:])    # "D-" 다음 숫자만 추출
    if days <= 90:       
        count += 1

print(count)