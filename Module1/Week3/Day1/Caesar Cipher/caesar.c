#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()  {
    string key = get_string("");
    int length = strlen(key);
    for (int it = 0; it < length; it++) {
        if (key[it] >= '0' && key[it] <= '9')   {
            continue;
        }
        if (strchr(key, '\n') != NULL) {
            printf("Invalid key \n");
            return 1;
        }
        printf("Usage ./caesar key \n");
        return 1;
    }
    string text = get_string("plain text: ");
    int num_rotations = (atoi(key)) % 26;
    printf("cyphertext: ");
    for (int i = 0; text[i] != '\0'; i++)   {
        printf("%c", text[i] + num_rotations);
    }
    printf("\n");
    return 0;
}