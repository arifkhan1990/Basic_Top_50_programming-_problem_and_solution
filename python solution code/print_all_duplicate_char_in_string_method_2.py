from collections import Counter

def findDuplicateChar(s):
    data = Counter(s)
    j = -1

    for i in data.values():
        j += 1
        if i > 1:
            print(data.keys()[j],)

s = input()
findDuplicateChar(s)