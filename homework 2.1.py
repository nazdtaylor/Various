def main():
    
    # get input as txt file make it into an array
    text_num = open("input1.1.txt", "r")
    bi_str = text_num.read().split(',')

    # get length of number and make input into integers
    bi_len = len(bi_str)
    bi_num = [int(i) for i in bi_str]
    dec = 0

    # convert binary to decimal
    for i in range(1,bi_len + 1):
        dec = dec + bi_num[i-1] * 2 ** (bi_len-i)
    sdec = str(dec)

    # flip output to get into correct format
    adec = [int (i) for i in sdec]
    print(list(reversed(adec)))
    text_num.close()
    
main()
