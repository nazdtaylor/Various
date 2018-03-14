def main():

    # read in number to be converted from text file
    num_in = open("input3.2.txt", "r")
    numstr1 = num_in.readline().split(',')
    numstr2 = num_in.readline().split(',')
    n1 = len(numstr1)
    n2 = len(numstr2)
    num1 = [int(i) for i in numstr1]
    num2 = [int(i) for i in numstr2]

    print(num1)
    print(num2)

    # get k from text file
    k_in = num_in.readline()
    k = int(k_in)

    print(k)

    # get base for conversion
    base = 2 ** k

    # convert to base 10
    dec1 = 0
    for i in range(n1):
        dec1 += num1[i] * base ** i
    dec2 = 0
    for i in range(n2):
        dec2 += num2[i] * base ** i
    tot = dec1 + dec2
    print(dec1)
    print(dec2)
    print(tot)

    bistr = ''
    while tot > 0:
        bistr = str(tot % base)+ ',' + bistr
        tot >>= 1
    finalbi = '[' + bistr[0:len(bistr)-1] + ']'
    print(finalbi)

main()
