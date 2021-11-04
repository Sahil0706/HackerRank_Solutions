#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pangrams' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def pangrams(s):
    # Write your code here
    s = s.lower()
    arr = []
    for i in range(0,26):
        arr.append(0)
    for i in s:
        if(i != ' '):
            arr[ord(i)-ord('a')]=1
        #print(i)
    s_sum = sum(arr)
    if(s_sum == 26):
        return "pangram"
    return "not pangram"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = pangrams(s)

    fptr.write(result + '\n')

    fptr.close()
