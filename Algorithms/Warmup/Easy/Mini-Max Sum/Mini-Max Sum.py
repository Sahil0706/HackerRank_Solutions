#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    minele = arr[0]
    maxele = arr[0]
    s = 0
    for i in range(len(arr)):
        s+=arr[i]
        if(arr[i]<minele):
            minele = arr[i]
        if(arr[i]>maxele):
            maxele = arr[i]
            
    print(s-maxele,s-minele)

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
