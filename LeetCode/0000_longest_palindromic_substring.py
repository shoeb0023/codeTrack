class Solution:
    def longestPalindrome(self, s: str) -> str:
        if not s or len(s) < 1:
            return ""
        
        start = 0
        end = 0
        
        def expand_around_center(left: int, right: 
        int) -> int:
            while left >= 0 and right < len(s) and s
            [left] == s[right]:
                left -= 1
                right += 1
            # Return the length of the palindrome 
            found
            # (right - 1) - (left + 1) + 1 simplifies 
