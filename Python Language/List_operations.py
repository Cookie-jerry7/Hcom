if __name__ == '__main__':
    N = int(input())
    the_list =[]
    for x in range(N):
        k = input().split(" ")
        if k[0]=="insert":
            the_list.insert(int(k[1]),int(k[2]))
        elif k[0]=="print":
            print(the_list)
        elif k[0]=="remove":
            the_list.remove(int(k[1]))
        elif k[0]=="append":
            the_list.append(int(k[1]))
        elif k[0]=="sort":
            the_list.sort()
        elif k[0]=="pop":
            the_list.pop()
        else:
            the_list.reverse()
        
