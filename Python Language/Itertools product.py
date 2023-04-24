from itertools import product

a = list(map(lambda i: int(i), list(input().split())))
b = list(map(lambda i: int(i), list(input().split())))

print(*(product(a,b)))
