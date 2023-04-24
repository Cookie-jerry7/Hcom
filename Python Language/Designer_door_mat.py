import math
k = input().split()
n = int(k[0])
m = int(k[1])
c = ".|."
x = 2
for i in range(1, n+1):
    if i==math.floor(n/2)+1:
        print("WELCOME".center(m,'-'))
    else:
        if i<math.floor(n/2)+1:
            print((c*((2*i)-1)).center(m,'-'))
        else:
            print((c*((2*(i-x))-1)).center(m,'-'))
            x += 2
