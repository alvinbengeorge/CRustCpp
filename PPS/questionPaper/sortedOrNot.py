l = list(map(int, input("Enter numbers: ").split()))
print(l == sorted(l) or l == sorted(l, reverse=True))