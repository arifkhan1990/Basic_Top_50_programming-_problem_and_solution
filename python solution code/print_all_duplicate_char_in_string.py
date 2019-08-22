def countDuplicateChar(s, dataArr):
    for i in s:
        dataArr[ord(i)] += 1
    return dataArr

def printDuplicateChar(s):
    dataArr = [0]*256
    dataArr = countDuplicateChar(s, dataArr)

    ch = 0

    for i in dataArr:
        if int(i) > 1:
            print (chr(ch))
        ch += 1

s = input()
print (printDuplicateChar(s))