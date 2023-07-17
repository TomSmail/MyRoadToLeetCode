#include <stdlib.h>
#include <stdio.h>
int divide(int dividend, int divisor) {
    int pos_dividend = abs(dividend);
    int pos_divisor = abs(divisor);
    int counter = 0;
    while(pos_dividend > pos_divisor) {
        counter ++;
        pos_dividend -= pos_divisor;
    }

    if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0) ) {
        return counter;
    } else {
        return -counter;
    }
}

int main(void) {
    printf("%d", divide(10, 3));
    return 0;
}