def minion_game(string):
    # your code goes here
    vowels = {"A", "E", "I", "O", "U"}
    kevin, stuart = (0, 0)
    
    for i in range(len(string)):
        if string[i] in vowels:
            kevin += len(string) - i
        else:
            stuart += len(string) - i
            #print(stuart,len(string), i)

    if kevin > stuart:
        print(f"Kevin {kevin}")
    elif stuart > kevin:
        print(f"Stuart {stuart}")
    else:
        print("Draw")
    

if __name__ == '__main__':
    s = input()
    minion_game(s)
    
    # example string is "BANANA"
    # B --- 1                                A --- 1
    # BA --- 1                               AN --- 1
    # BAN --- 1                              ANA --- 1
    # BANA --- 1                             ANAN --- 1
    # BANAN --- 1                            ANANA --- 1       = 5
    # BANANA --- 1         = 6               A --- 1
    # N --- 1                                AN --- 1
    # NA --- 1                               ANA --- 1         = 3
    # NAN --- 1                              A --- 1           = 1
    # NANA --- 1           = 4
    # N --- 1
    # NA --- 1             = 2
    
    # TOTAL                = 12              TOTAL:            = 9
