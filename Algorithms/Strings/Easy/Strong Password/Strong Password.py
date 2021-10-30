#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumNumber' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. STRING password
#

def minimumNumber(n, password):
    # Return the minimum number of characters to make the password strong
    has_number = True
    has_lower = True
    has_upper = True
    has_special = True
    special_characters = "!@#$%^&*()-+"
    i=0
    while( (i<n) and (has_number or has_lower or has_upper or has_special) ):
        if(password[i] >= 'a' and password[i] <= 'z'):
            has_lower = False
        elif(password[i] >= 'A' and password[i] <= 'Z'):
            has_upper = False
        elif(password[i] >= '0' and password[i] <= '9'):
            has_number = False
        else:
            for j in special_characters:
                if(j==password[i]):
                    has_special = False
                    break;
        i+=1
    ans = 0
    if(has_lower):
        ans+=1
    if(has_upper):
        ans+=1
    if(has_number):
        ans+=1
    if(has_special):
        ans+=1
    if(n<6):
        ans = max(ans, 6 - n)
    return ans

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    password = input()

    answer = minimumNumber(n, password)

    fptr.write(str(answer) + '\n')

    fptr.close()
