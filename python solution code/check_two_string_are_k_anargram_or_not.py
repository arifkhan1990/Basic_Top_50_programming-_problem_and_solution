
def anargramCheck(s1, s2, k):
    l1, l2 = len(s1), len(s2)
    if l1 != l2:
        return False
    data = [0] * 26
    cnt = 0

    for i in range(l1):
        data[ord(s1[i]) - ord('a')] += 1
    
    for i in range(l2):
        if(data[ord(s2[i]) - ord('a')] > 0):
            data[ord(s2[i]) - ord('a')] -= 1
        else:
            cnt += 1
        if( cnt > k):
            return False
    return True



s1 = input()
s2 = input()
k = int(input())

if(anargramCheck(s1, s2, k)):
    print("YES")
else:
    print("NO")