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
  # Total sum of all 5 elements
    total_sum = sum(arr)

# Minimum sum excludes the largest element
    min_sum = total_sum - max(arr)
    
  # Maximum sum excludes the smallest element
    max_sum = total_sum - min(arr)

    print(f"{min_sum} {max_sum}")
    
if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
