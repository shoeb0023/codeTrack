import math


class Solution:

  def sameMod(self, arr: list[int]) -> int:
    n = len(arr)
    g = 0

    # Find the GCD of differences from the first element
    for i in range(1, n):
      g = math.gcd(g, abs(arr[i] - arr[0]))

    # If all elements are equal, 'g' remains 0 (infinitely many valid k values)
    if g == 0:
      return -1

    # Count the positive divisors of g
    count = 0
    i = 1
    while i * i <= g:
      if g % i == 0:
        count += 1

        # If i and g // i are distinct divisors, count both
        if i != g // i:
          count += 1
      i += 1

    return count