s = input()

words = s.split(' ')
data = []
for word in words:
    data.insert(0, word)

print(" ".join(data))