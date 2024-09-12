n = int(input("Types of flowers : "))
p = list(range(1,n+1))
l = len(p)

tempArr = []

if l%5 ==0:
    print(f"Oasis has to pay {int(l/5)} units.")
else:
    for i in range(0,l,5):
        tempArr.append(p[i:i+5])

    print(f"Oasis has to pay {len(tempArr)} units.")