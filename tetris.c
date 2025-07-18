#include<stdio.h>
#include<stdlib.h>

#define ROWS 18
#define COLS 10

#define BLOCK_ROW 2
#define BLOCK_COL 4

char** initiate_grid()
{
    char **grid=(char**)malloc(ROWS * sizeof(char*));
    for(int i=0;i<ROWS;i++)
    {
        grid[i]=(char*)malloc((COLS+1) * sizeof(char));
    }
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            grid[i][j]='.';
        }
        grid[i][10]='\0';
    }
    return grid;
}
void print_grid(char ** grid)
{
    printf("!|/\\/\\/\\/\\/\\|!\n");
    for(int i=0;i<ROWS;i++)
    {
        printf("!|");
        for(int j=0;j<COLS;j++)
        {
            printf("%c",grid[i][j]);
        }
        printf("|!");
        printf("\n");
        
    }
    printf("!|\\/\\/\\/\\/\\/|!\n");

}
void clr_scr()
{
    #ifdef _WIN32
    system("cls");
    #elif __linux__
    system("clear");
    #elif __APPLE__
    system("clear");
    #endif
}


void gameplay()
{
    
}

int main()
{
    /*starting making the grids and blocks*/
    char **grid=initiate_grid();


    char **bar=(char**)malloc(BLOCK_ROW * sizeof(char*));
    for(int i=0;i<2;i++)
    {
        bar[i]=(char*)malloc((BLOCK_COL+1) * sizeof(char));
    }
    bar[0][0]='#'; bar[0][1]='#'; bar[0][2]='#'; bar[0][3]='#'; bar[0][4]='\0';
    bar[1][0]='.'; bar[1][1]='.'; bar[1][2]='.'; bar[1][3]='.'; bar[1][4]='\0';


    /*ending making the grids and blocks */


    while(1)
    {
        print_grid(grid);
        gameplay();
        clr_scr();
    }
    


    /*freeing the data*/
    for (int i = 0; i < 18; i++) {
        free(grid[i]);
    }
    free(grid);
    for(int i = 0; i < 2; i++) {
        free(bar[i]);
    }
    free(bar);
    /*ending freeing the data*/
    return 0;
}