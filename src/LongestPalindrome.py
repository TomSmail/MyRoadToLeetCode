class Solution:
    def longestPalindrome(self, s: str) -> str:
        letter_lists = {}
        # initilaise letter-index dict
        longest_start = 0
        longest_end = 0
        for i in range(len(s)):
            if s[i] in letter_lists:
                index_list = letter_lists[s[i]]
                index_list.append(i)
                letter_lists[s[i]] = index_list
            else:
                letter_lists[s[i]] = [i]
        for j in range(len(s)):
            start = j
            for k in range(len(letter_lists[s[j]])):
                end = letter_lists[s[j]][k]
                og_end = end
                og_start = start
                pal = False
                while(end > start):
                    if s[end] != s[start]:
                        pal = False
                        break
                    else:
                        pal = True
                        end -= 1
                        start += 1
                if pal:
                    if (longest_end - longest_start) < (og_end - og_start):
                        longest_end = og_end
                        longest_start = og_start
        return s[longest_start: longest_end + 1]