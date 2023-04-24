# Enter your code here. Read input from STDIN. Print output to STDOUT

directory, name, phone = dict(), str(), ""
for i in range(int(input())):
    name, phone = input().split()
    directory[name]=phone
while(True):
    try:
        name = input()
        if name in directory: print(name+"="+directory[name])
        else: print("Not found")
    except EOFError:
        break
