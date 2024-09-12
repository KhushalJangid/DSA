# odd height
h =11

# first half
stars = 1
for i in range(h,0,-2):
    spaces = int((i-1)/2)
    print(" "*spaces,"*"*stars)
    stars += 2
    
# second half
stars = h -2
for i in range(1,int((h+1)/2)):
    spaces = i
    print(" "*spaces,"*"*stars)
    stars += -2