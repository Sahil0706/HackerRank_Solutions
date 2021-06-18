#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'breakingRecords' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY scores as parameter.
#

def breakingRecords(scores):
    # Write your code here
    curr_max = scores[0]
    maxi,mini = 0,0
    prev = scores[0]
    for i in scores:
        if(i>curr_max):
            curr_max = i
            maxi+=1
        if(i<prev):
            prev = i
            mini+=1
        
    sol = [];
    sol.append(maxi);
    sol.append(mini);
    return sol;
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
