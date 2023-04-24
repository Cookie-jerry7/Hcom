def count_substring(string, sub_string):
    count = 0
    for i in range(len(string)):
      if i == string.find(sub_string,i,len(string)):
        count += 1
    else:
        pass
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
