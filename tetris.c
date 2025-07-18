#include<stdio.h>

#define ROWS    18
#define COLS    11
#define S_ROWS   2
#define S_COLS   4


char grid[ROWS][COLS];
char shape[S_ROWS][S_COLS];

void shape_A (void)
{
    for (int i = 0; i < S_COLS - 1; i++)
        shape[0][i] = '.';
    for (int i = 0; i < S_COLS - 1; i++)
        shape[1][i] = '#';
        
}

void initiate_grid (void)
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

void print_grid (void)
{
    for (int i = 0; i < ROWS; i++)
    {
        printf ("%s", grid[i]);
        printf ("\n");
    }

}

int main (void)
{
    shape_A();
    initiate_grid();
    printf("%s",shape);

    return 0;
}