class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:

        letter = coordinates[0];
        number = ord(coordinates[1]) - 48;
        # a = 1, b = 2 etc
        letter_number = ord(letter) - 96;
        return ((letter_number + number) % 2 != 0);