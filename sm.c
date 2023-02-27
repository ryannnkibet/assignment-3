/*a program to output half a pyramid with the letter w using for loop*/
#include <stdio.h>

int main() {
    char letter = 'W';  // Change this to the letter you want to output

    for (int i = 0; i < 5; i++) {  // Change the number of rows as needed
        for (int j = 0; j <= i; j++) {
            printf("%c ", letter);
        }
        printf("\n");
    }
    return 0;
}