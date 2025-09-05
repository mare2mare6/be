H, M = map(int, input().split())

if M >= 45:
    M -= 45
else:
    M += 15
    H = 23 if H == 0 else H - 1

print(H, M)
