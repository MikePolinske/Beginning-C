// Porgram 2.7 Division with float values
#include <stdio.h>

int main(void)
{
    float plank_length = 10.0f;         // In feet
    float piece_count = 4.0f;           // Number of equal pieces
    float piece_length = 0.0f;          // Length of a pice in feet

    piece_length = plank_length / piece_count;
    printf("A %8.2f plank foot can be cut into %5.0f pieces %6.2f feet long.\n",
                        plank_length, piece_count, piece_length);
    return 0;
}