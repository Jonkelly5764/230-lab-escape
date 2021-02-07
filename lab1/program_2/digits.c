#include <stdio.h>

// This program is supposed to accept a number as input if it's all nines. If
// the number isn't all nines, or if the input contains non-digits, it will be
// rejected.

int validate_digit(int digit) {
    if(digit < 0 || digit > 9) return 0; //not a digit!
    return digit == 9;//only correct digits are good
}

int main(int argc, char **argv) {
    int c;
    while(1) {
        printf("please enter a number: ");
        int alldigits = 1;
        while((c = getc(stdin))) {
            if(c == '\n') break;
            if(c == EOF) {
                printf("exiting...\n");
                return 0;
            }
            c = c - '0';
            alldigits = alldigits && validate_digit(c);
        }
        if(alldigits) {
            printf("those were some good digits!\n");
            return 0;
        } else {
            printf("please try again\n");
        }
    }
}
