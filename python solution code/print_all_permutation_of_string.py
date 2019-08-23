
def permutation(s, st, ed):
    if st == ed - 1:
        print(''.join(s))
        return
    for i in range(ed):
        s[st], s[i] = s[i], s[st]
        permutation(s, st+1, ed)
        s[st], s[i] = s[i], s[st]


s = input()
permutation(list(s),0,len(s))