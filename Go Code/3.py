arr = [3,1,2,2,1,2,3,3]
n = len(arr)
k = 4
v = int(n/k)

s = set(arr)
tempArr = []

for i in s:
    if arr.count(i) > v:
        tempArr.append(i)
    pass

print(tempArr)
