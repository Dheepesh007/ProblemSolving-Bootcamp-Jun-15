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
    total_sum = sum(arr)
    min_val = min(arr)
    max_val = max(arr)
    
    # Calculate min and max sums of 4 elements
    min_sum = total_sum - max_val
    max_sum = total_sum - min_val
    
    # Print the two space-separated values as required
    print(min_sum, max_sum)
if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
