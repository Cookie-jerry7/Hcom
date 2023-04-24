def print_formatted(number):
    # your code goes here
    for i in range(1,n+1):
        pad = n.bit_length()

        decimal = str(i).rjust(pad)
        octal = str(oct(i)[2:]).rjust(pad)
        hexxadecimal = str(hex(i)[2:]).rjust(pad).upper()
        binary = str(bin(i)[2:]).rjust(pad)
           
        print(f'{decimal} {octal} {hexxadecimal} {binary}')
    

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
