#include<stdio.h>
#include<conio.h>

void initiate_grid(char **grid)
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
void print_grid(char **grid)
{
    for(int i=0;i<18;i++)
    {
        printf("%s",grid[i]);
        printf("\n");
    }

}
int main()
{
    char grid[18][11];

    getch();
    return 0;
}