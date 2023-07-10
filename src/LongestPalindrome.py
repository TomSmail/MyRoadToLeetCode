class Solution:
    def longestPalindromHelper2(self, s: str, index: int, offset: int) -> str: 
        if (offset != 0):
            palindrome = s[index] + s[index]
        else:
            palindrome = s[index]
        for i in range(len(s)):
            left = (index - (i + 1)) 
            right = (index + (i + 1) + offset)
            print(left, right)
            if( left < 0) or (right > len(s) - 1):
                return palindrome
            elif s[left] == s[right]:
                palindrome = palindrome + s[left]
                palindrome = s[right] + palindrome
            else:
                return palindrome
        return palindrome

    def longestPalindromeHelper(self, s: str, index: int) -> str:
        palindrome = self.longestPalindromHelper2(s, index, 0)
        palindrome2 = ""
        if index < (len(s) - 1):
            if s[index + 1] == palindrome:
                palindrome2 = self.longestPalindromHelper2(s, index, 1)
        if len(palindrome) > len(palindrome2):
            return palindrome
        else:
            return palindrome2

    def longestPalindrome(self, s: str) -> str:
        largest_len = 0
        largest = ""
        for i in range(len(s)):
            palindrome = self.longestPalindromeHelper(s, i)
            if len(palindrome) > largest_len:
                largest_len = len(palindrome)
                largest = palindrome
        return largest

