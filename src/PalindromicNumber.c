#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
bool isPalindrome(int x){
    if (x < 0) {
        return false;
    } 
    // Convert number to string
    char str_x[(int)((ceil(log10(x))+1)*sizeof(char))];
    sprintf(str_x, "%d", x);
    str_x[(int)((ceil(log10(x)))*sizeof(char))] = '\0';
    int left = 0;
    int right = str_x[(int)((ceil(log10(x)) + 1)*sizeof(char))];
    while (left < right) {
        if (str_x[left] != str_x[right]) {
            return false;
        }
        right --;
        left ++;
    }
    return true;
}

int main(void) {
    isPalindrome(123454321);
    return 0;
}