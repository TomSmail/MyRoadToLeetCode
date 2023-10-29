class Solution:
    def longestPalindrome(self, s: str) -> str:
        longest_palindrome_num = 0
        longest_palindrome = ''
        for i in range(len(s)):
            palindrome = s[i]
            offset = 1
            continuous = True
            while(continuous):
                if i + offset < len(s):
                    if s[i] == s[i + offset]:
                        palindrome = palindrome + s[i + offset]
                        offset += 1
                    else:
                        continuous = False
                else:
                    continuous = False
            print(palindrome)
            l = i - 1 
            r = i + offset
            same = True
            palindrome_num = offset
            while(l >= 0 and r < len(s) and same):
                if (s[l] == s[r]):
                    palindrome = s[l] + palindrome + s[r]
                    palindrome_num += 2
                    l -= 1
                    r += 1
                else:
                    same = False
            if longest_palindrome_num < palindrome_num:
                longest_palindrome_num = palindrome_num
                longest_palindrome = palindrome
        return longest_palindrome

