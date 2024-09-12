arr = [1,2,3,4,5]
l = len(arr) + 1
tempArr = []
for i in range(-1,-l,-1):
    tempArr.append(arr[i])
    
arr = tempArr
print(arr)