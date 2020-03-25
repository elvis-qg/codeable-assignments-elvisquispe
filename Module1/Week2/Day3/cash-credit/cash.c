#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    float cash; 
    while (1) {
        cash = get_float("Customer money owed: ");
        if (cash > 0) break; 
    }
    int cents = round (cash * 100);
    int num_coins = 0;
    int temp = 0;
    while (1) {
        if (cents >= 25) {
            temp = cents / 25;
            num_coins += temp;
            if (cents % 25 == 0) break;
            cents = cents - temp * 25;
        }
        if (cents >= 10) {
            temp = cents / 10;
            num_coins += temp;
            if (cents % 10 == 0) break;
            cents = cents - temp * 10; 
        }
        if (cents >= 5) {
            num_coins += cents / 5;
            if (cents % 5 == 0) break;  
        }
        num_coins += cents % 5;
        break; 
    }
    printf("%d coins \n", num_coins);
}
