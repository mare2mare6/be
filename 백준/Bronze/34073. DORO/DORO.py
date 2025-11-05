n = int(input())
sentence = input().split()

result = [word + "DORO" for word in sentence]

print(" ".join(result))
