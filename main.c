#include<stdio.h>

int main() {
    int i, j, k = 6;
    
    for (i = 0; i < 20; i++) {
        for (j = 0, k; j < 20; j++, k++) {
            if ((i + j == 10 && i < 10) || (j - i == 9 && i < 10) || (j == 1 && i > 10) || (j == 18 && i > 10) || (i == 10 && j > 0 && j < 19) || (i == 19 && j > 0 && j < 19) || (j == 7 && i > 12) || (j == 12 && i > 12) || (i == 13 && j > 6 && j < 13)) {
                printf("*");
            } else {
                printf(" ");
            }
        } //inner for
        printf("\n");
    } //outer for

    return 0;
}
