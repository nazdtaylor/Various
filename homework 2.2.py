def main():

    # read in number to be converted from text file
    num_in = open("input2.1.txt", "r")
    numstr = num_in.readline().split(',')
    n = len(numstr)
    num = [int(i) for i in numstr]

    # get k from text file
    k_in = num_in.readline()
    k = int(k_in)

    # get base for conversion
    base = 2 ** k

    # convert to base 10
    dec = 0
    for i in range(n):
        dec += num[i] * base ** i

    # convert to binary and output in proper format
    bistr = ''
    while dec > 0:
        bistr = str(dec % 2)+ ',' + bistr
        dec >>= 1
    finalbi = '[' + bistr[0:len(bistr)-1] + ']'
    print(finalbi)
    
main()
