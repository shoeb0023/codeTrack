
    for i in range(n):
      if i + 1 < n and value[s[i]] < value[s[i + 1]]:
        ans -= value[s[i]]
      else:
        ans += value[s[i]]

    return ans


    # this is test for animation  test 2
    ans = 0
    n = len(s)
  def romanToInt(self, s: str) -> int:
    value = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

