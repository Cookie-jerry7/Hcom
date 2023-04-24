def print_rangoli(size):
    # your code goes here
    # considering size = 5
    
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    pattern = alphabet[:size] 
    
    
    r_len = size * 2 - 1 
    c_len = 2 * r_len - 1  
    size_until_mid = (r_len-1)//2
    
    down = []
    
    # top               beginning to mid
    for i in range(1, size_until_mid + 1):
        r_part = pattern[len(pattern) - i:]  
        l_part = r_part[::-1] [:i-1]         
        all_part = l_part + r_part   
        joining = "-".join(all_part)         
        final = joining.center(c_len,'-') 
        
        down.append(final)     # adding to list (for bottom part)
        print(final)
    
    # middle
    print("-".join(pattern[::-1]+pattern[1:]))
    
    # down           mid to down (same length as begin to mid)   
    for _ in range(size_until_mid):
        print(down.pop()) 
    
    

if __name__ == '__main__':
	n = int(input())
    print_rangoli(n)
