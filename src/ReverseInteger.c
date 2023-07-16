#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int reverse(int x) {

    // special cases
    if ( x == 0) {
        return 0;
    } else if ( x == 1) {
        return 1;
    } else if ( x == - 1) {
        return - 1;
    }

    char char_int[(int)(ceil(log(abs(x))/log(10)) + 2) * sizeof(char)];
    char reverse_char[(int)(ceil(log(abs(x))/log(10)) + 2) * sizeof(char)];
    int reverse = (ceil(log(abs(x))/log(10))) - 1;

    bool negative = false;

    if (x < 0) {
        reverse ++;
        negative = true;
    }

    if (x % 10 == 0) {
        reverse ++;
    }

    //printf("%d\n", reverse);
    //printf("x = %d\n", x);

    sprintf(char_int, "%d", x);
    
    char_int[(int)(ceil(log(abs(x))/log(10)) + 1)] = '\0';
    reverse_char[(int)(ceil(log(abs(x))/log(10)) + 1)] = '\0';

   
    printf("strlen: %lu\n", strlen(char_int));
    for (int i = 0; i < strlen(char_int); i++) {
        printf("%s %d\n", "i: ", i);
        if (char_int[reverse] == '-') {
            reverse --;
        } else {
            reverse_char[i] = char_int[reverse--];
            printf("%s\n", reverse_char);
        }
    }

    int reverse_int = atoi(reverse_char);

    //printf("%d\n", reverse_int);

    if (negative) {
        reverse_int = - reverse_int;
    }
    
    return reverse_int;
 
}

int main(void) {
    printf("%d\n", reverse(1));
    // printf("%s\n", "BASED.");
}