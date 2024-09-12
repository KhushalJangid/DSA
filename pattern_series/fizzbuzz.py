i=1
f=1
b=1
while i<=100:
    if f==3 and b==5:
        print("fizzbuzz")
        f=0
        b=0
    elif f==3 or b==5:
        if f==3:
            print("fizz")
            f=0
        if b==5:
            print("buzz")
            b=0
    else:
        print(i)
    f+=1
    b+=1
    i+=1
