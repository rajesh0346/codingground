#include <stdio.h>

#define N 8

int issafe(int x, int y, int sol[N][N])
{
    if ((x>=0 && x < 8) && (y >= 0 && y < 8) && sol[x][y]] == -1)
    {
        return 1;
    }
    return 0;
}
bool solveKT()
{
    int sol[N][N];
    int movx[N] = {2, 1, -1, -2, -2, -1,  1,  2};
    int movy[N] = {1, 2,  2,  1, -1, -2, -2, -1};
    
    initsol(sol[N][N]);
    
    
    
}
void initsol(int sol[N][N]])
{
    int i, j;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            sol[i][j] = -1;
        }
    }
}

void printsol(int sol[N][N])
{
    int i, j;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%2d ", sol[i][j])
        }
        printf("\n");
    }
}

int main()
{
    int sol[N][N];
    int movx[N];
    int movy[N];
    solve8q(0, 0, 0, sol, movx, movy);
    printsol(sol);
    return 0;
}