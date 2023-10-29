from typing import List
class Solution:
    mapping: dict = {'2': ['a', 'b', 'c'], '3': ['d', 'e', 'f'], '4': ['g', 'h', 'i'], '5': ['j', 'k', 'l'], '6': [ 'm', 'n', 'o', ], '7': ['p', 'q', 'r', 's'], '8': ['t', 'u', 'v'], '9': ['w', 'x', 'y', 'z'] }
    
    def letterCombinationsHelper(self, digits: str, prev: List[str]) -> str:
        if digits != '':
            letters = self.mapping[digits[0]] 
            new_prev: List = []
            for string in prev:
                for letter in letters:
                   new_prev.append(string + letter) 
            return self.letterCombinationsHelper(digits[1:], new_prev)
        
        if prev == [""]:
            return []
        else:
            return prev


    def letterCombinations(self, digits: str) -> List[str]:
        return self.letterCombinationsHelper(digits, [''])