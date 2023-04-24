if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    l=[]
    for x in arr:
        if x not in l:
            l.append(x)
            
    l.remove(max(l))
    print(max(l))
