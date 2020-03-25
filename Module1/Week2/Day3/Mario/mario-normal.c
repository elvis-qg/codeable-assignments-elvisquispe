#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    while (1) {
        printf("Height: ");
        scanf("%d", &height);
        if (height > 0 && height < 9) break;
    }
    int spaces;
    int hashes;
    for (int i = 1; i < height + 1; ++i) {
        spaces = height - i;
        hashes = i;
        while(spaces > 0) {
            printf(" ");
            spaces--;
        }
        while(hashes > 0) {
            printf("#");
            hashes--;
        }
        printf("\n");
    }
}

