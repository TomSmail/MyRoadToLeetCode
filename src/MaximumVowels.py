class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        vowels = ['a', 'e', 'i', 'o', 'u']
        start = 0
        end = k - 1;
        curr = s[start:end+1]
        count = 0
        
        # intialise count
        for i in range(len(curr)):
            if (curr[i] in vowels):
                count += 1

        largest = count

        while (end < (len(s) - 1)):
            
            if (s[end + 1] in vowels):
                count += 1
            
            if (s[start] in vowels): 
                count -= 1

            largest = max(count, largest)
            start += 1
            end += 1
        return largest