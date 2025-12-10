N = int(input())

base_year = 2024
base_month = 8

add = 7 * (N - 1)
total = base_month + add

year = base_year + (total - 1) // 12
month = (total - 1) % 12 + 1

print(year, month)
