#include<stdio.h>

#define ROWS    18
#define COLS    11
#define SROWS   2
#define SCOLS   4


char grid[ROWS][COLS];

char shape[SROWS][SCOLS];

void initialise_shape()
{
    char s1[SROWS][SCOLS]
}


void initiate_grid ()
{
    for (int i = 0; i < 18; i++)
    {
        for (int j = 0; j < COLS - 1; j++)
        {
            grid[i][j] = '.';
        }
        grid[i][COLS - 1] = '\0';
    }
}

void print_grid ()
{
    for (int i = 0; i < ROWS; i++)
    {
        printf ("%s", grid[i]);
        printf ("\n");
    }

}

int main (void)
{
    char grid[ROWS][COLS];
	initiate_grid (grid);
    print_grid (grid);

    return 0;
}