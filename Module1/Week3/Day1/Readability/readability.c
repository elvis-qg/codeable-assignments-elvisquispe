#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main() {
    string text  = get_string("Text: ");
    int letters = 0, words = 0, sentences = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >='A' && text[i] <= 'Z')) {
            char letter = text[i];
            letters++;
            continue;
        }
        if (text[i] == ' ') words++;
        if (text[i] == '.' || text[i] == '?' || text[i] == '!') sentences++;
    }
    words++;
    float L = (float)letters * 100 / words;
    float S = (float)sentences * 100 / words;
    double index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1) {
        printf ("Before Grade 1");
        return 0;
    }
    if (index >= 16) {
        printf("Grade 16+");
        return 0;
    }
    printf ("ddd \n");
    printf ("Grade %d \n", (int)index);
}