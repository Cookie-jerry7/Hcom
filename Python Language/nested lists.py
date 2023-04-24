if __name__ == '__main__': 
    records = [] 
    scores = set() 
    sc=[] 
    names = [] 
    for i in range(int(input())): 
        name = input() 
        score = float(input()) 
        records.append([name,score]) 
        scores.add(score)

for i in scores:
    sc.append(i)
sc.sort()
for name,score in records:
    if sc[1] == score:
        names.append(name)
        names.sort()
for value in names:
    print(value)
                
