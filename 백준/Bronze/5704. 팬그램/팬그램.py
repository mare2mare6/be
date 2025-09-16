while True:
    line = input().strip()
    if line == "*":
        break

    letters = set(line)
            
    if set("abcdefghijklmnopqrstuvwxyz") <= letters:
        print("Y")
    else:
        print("N")
