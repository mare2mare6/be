n = int(input())
arr = list(map(int, input().split()))

min_val = min(arr)
max_val = max(arr)

N = min_val * max_val

print(N)
    
    # 최대*최소는 답.
