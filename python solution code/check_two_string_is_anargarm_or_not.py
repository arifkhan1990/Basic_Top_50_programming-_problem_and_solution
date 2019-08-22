x = 256
def checkAnargram(s1, s2):
    l1 , l2 = len(s1), len(s2)

    if l1 != l2:
        return False
    
    data = [0] * 256

    for i in s1:
        data[ord(i)] += 1
    for i in s2:
        data[ord(i)] -= 1

    for i in range (x):
        if data[i]:
            return False
    return True

s1 = input()
s2 = input()
if(checkAnargram(s1,s2)):
    print("yes")
else:
    print("No")