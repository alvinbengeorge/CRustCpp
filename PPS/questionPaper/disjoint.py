set1 = set(map(int, input("Enter numbers for set1: ").split()))
set2 = set(map(int, input("Enter numbers for set2: ").split()))

if set1.isdisjoint(set2):
    print("Sets are disjoint")
else:
    print("Sets are not disjoint")