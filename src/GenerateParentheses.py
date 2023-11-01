from typing import List

class Solution:
    def generateParenthesisHelper(self, closing: int, opening: int, prev: str) -> List[str]:
        prev_list = []
        if opening == 0 and closing == 0:
            return [prev]
        if opening != 0:
            p = prev + "("
            prev_list = prev_list + self.generateParenthesisHelper(closing + 1, opening - 1, p)
        if closing != 0:
            p = prev + ")"
            prev_list = prev_list + self.generateParenthesisHelper(closing - 1 , opening , p)
        return prev_list

    def generateParenthesis(self, n: int) -> List[str]:
        return self.generateParenthesisHelper(0, n, '')