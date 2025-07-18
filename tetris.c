#include<stdio.h>
#include<stdlib.h>

void initiate_grid(char ** grid)
{
    for(int i=0;i<18;i++)
    {
        for(int j=0;j<10;j++)
        {
            grid[i][j]='.';
        }
        grid[i][10]='\0';
    }
}
void print_grid(char ** grid)
{
    printf("!|/\\/\\/\\/\\/\\|!\n");
    for(int i=0;i<18;i++)
    {
        printf("!|");
        for(int j=0;j<10;j++)
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


int main()
{
    char **grid=(char**)malloc(18 * sizeof(char*));
    for(int i=0;i<18;i++)
    {
        grid[i]=(char*)malloc(11 * sizeof(char));
    }

    initiate_grid(grid);

    while(1)
    {
        print_grid(grid);
        clr_scr();
    }
    



    for (int i = 0; i < 18; i++) {
        free(grid[i]);
    }
    free(grid);
    return 0;
}