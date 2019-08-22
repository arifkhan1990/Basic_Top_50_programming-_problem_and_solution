
def checkAnargram(s1, s2):
    l1, l2 = len(s1), len(s2)

    if l1 != l2:
        return False
    val = 0
    for i in range(0,l1):
        val ^=  ord(s1[i])
        val ^=  ord(s2[i])
    return val == 0


s1 = input()
s2 = input()
if(checkAnargram(s1,s2)):
    print("Yes")
else:
    print("No")