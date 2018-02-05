if __name__ == '__main__':
    test = int(input())
    while (test > 0) :
        string = input()
        count = 0
        for i in range(len(string)-3):
            if (string[i] == 'c' and string[i+1] == 'h' and string[i+2] == 'e' and string[i+3] == 'f'):
                count += 1;
            elif (string[i] == 'c' and string[i+1] == 'h' and string[i+2] == 'f' and string[i+3] == 'e'):
                count += 1;
            elif (string[i] == 'c' and string[i+1] == 'e' and string[i+2] == 'h' and string[i+3] == 'f'):
                count += 1;
            elif (string[i] == 'c' and string[i+1] == 'e' and string[i+2] == 'f' and string[i+3] == 'h'):
                count += 1;
            elif (string[i] == 'c' and string[i+1] == 'f' and string[i+2] == 'h' and string[i+3] == 'e'):
                count += 1;
            elif (string[i] == 'c' and string[i+1] == 'f' and string[i+2] == 'e' and string[i+3] == 'h'):
                count += 1;
            elif (string[i] == 'h' and string[i+1] == 'c' and string[i+2] == 'e' and string[i+3] == 'f'):
                count += 1;
            elif (string[i] == 'h' and string[i+1] == 'c' and string[i+2] == 'f' and string[i+3] == 'e'):
                count += 1;
            elif (string[i] == 'h' and string[i+1] == 'e' and string[i+2] == 'c' and string[i+3] == 'f'):
                count += 1;
            elif (string[i] == 'h' and string[i+1] == 'e' and string[i+2] == 'f' and string[i+3] == 'c'):
                count += 1;
            elif (string[i] == 'h' and string[i+1] == 'f' and string[i+2] == 'c' and string[i+3] == 'e'):
                count += 1;
            elif (string[i] == 'h' and string[i+1] == 'f' and string[i+2] == 'e' and string[i+3] == 'c'):
                count += 1;
            elif (string[i] == 'e' and string[i+1] == 'c' and string[i+2] == 'h' and string[i+3] == 'f'):
                count += 1;
            elif (string[i] == 'e' and string[i+1] == 'c' and string[i+2] == 'f' and string[i+3] == 'h'):
                count += 1;
            elif (string[i] == 'e' and string[i+1] == 'h' and string[i+2] == 'c' and string[i+3] == 'f'):
                count += 1;
            elif (string[i] == 'e' and string[i+1] == 'h' and string[i+2] == 'f' and string[i+3] == 'c'):
                count += 1;
            elif (string[i] == 'e' and string[i+1] == 'f' and string[i+2] == 'c' and string[i+3] == 'h'):
                count += 1;
            elif (string[i] == 'e' and string[i+1] == 'f' and string[i+2] == 'h' and string[i+3] == 'c'):
                count += 1;
            elif (string[i] == 'f' and string[i+1] == 'c' and string[i+2] == 'e' and string[i+3] == 'h'):
                count += 1;
            elif (string[i] == 'f' and string[i+1] == 'c' and string[i+2] == 'h' and string[i+3] == 'e'):
                count += 1;
            elif (string[i] == 'f' and string[i+1] == 'h' and string[i+2] == 'c' and string[i+3] == 'e'):
                count += 1;
            elif (string[i] == 'f' and string[i+1] == 'h' and string[i+2] == 'e' and string[i+3] == 'c'):
                count += 1;
            elif (string[i] == 'f' and string[i+1] == 'e' and string[i+2] == 'c' and string[i+3] == 'h'):
                count += 1;
            elif (string[i] == 'f' and string[i+1] == 'e' and string[i+2] == 'h' and string[i+3] == 'c'):
                count += 1;
        if (count == 0):
            print ("normal")
        else:
            print ("lovely ",count)
        test -= 1
