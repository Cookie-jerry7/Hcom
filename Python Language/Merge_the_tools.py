def merge_the_tools(string, k):
    # your code goes here
    Nums=len(string)/k
    for i in range(int(Nums)):
        Toprint=[]
        val=i*k
        for j in range(k):
            if string[val+j] not in Toprint:
                Toprint.append(string[val+j])
        print(''.join(Toprint))

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
