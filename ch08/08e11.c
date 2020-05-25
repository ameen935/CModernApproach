/*
 * Ch08 Ex11 | C Programming, A Modern Approach
 *
 * Write a program fragment that declares an 8x8 char array named checker_board
 * and then uses a loop to store the following data into the array (one
 * character per array element):
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R  
 * R B R B R B R B
 * B R B R B R B R  
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 *
 * Hint: The element in row i, column j, should be the letter B if i + j is an
 * even number.
 */

#include <stdio.h>
#include <stdlib.h>
#define ROWS 8
#define COLS 8

int main(void)
{
    int i, j;
    char checker_board[8][8]={'0'};
    for (i=0;i<ROWS;i++)
    {
        for (j=0;j<COLS;j++)
        {
            printf("%c", (i+j)%2==0 ? 'B' : 'R');
        }
        printf("\n");
    }
    return 0;
}
