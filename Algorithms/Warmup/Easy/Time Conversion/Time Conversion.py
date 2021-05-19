#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    hour = s[0:2]
    ispm = s[8:]
    iHour = int(hour)
    if( ispm == "PM" ):
        if( iHour != 12 ):
           iHour += 12

        hour = str(iHour)
    
    if( ispm == "AM" ):
        if( iHour == 12 ):
           hour = "00"
        elif( iHour < 10 ):
           hour = "0" + str(iHour)
        else:
           hour = str(iHour)

    return hour + s[2:8]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
