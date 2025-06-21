#include<stdio.h>

#define ROWS    18
#define COLS    11

void initiate_grid (char grid[ROWS][COLS])
{
    for(int i = 0; i < 18; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            grid[i][j] = '.';
        }
        grid[i][10] = '\0';
    }
}

void print_grid (char grid[ROWS][COLS])
{
    for(int i=0; i < 18; i++)
    {
        printf ("%s", grid[i]);
        printf ("\n");
    }

}

int main (void)
{
    char grid[18][11];
	initiate_grid (grid);
    print_grid (grid);

    return 0;
}
