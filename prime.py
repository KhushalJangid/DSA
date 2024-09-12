num = int(input("Enter an integer : "))

if num<2:
    print(f"{num} is not a prime number.")
    exit()

i = 2

while i<=(num/2):
    if (num%i == 0):
        if num == i:
            print(f"{num} is a prime number.")
            break
        else:
            print(f"{num} is not a prime number.")
            break
    else:
        i+=1
else:
    print(f"{num} is a prime number.")