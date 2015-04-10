#include <stdio.h>

int coinchange(int S[], int m, int n)
{
    if (n==0){
        return 1;
    }
    if (m<0 && n>0){
        return 0;
    }
    return (coinchange(S, m-1, n) + coinchange(S, m, n-S[m]));
}

int main()
{
    int S[] = {1, 2, 3};
    
    printf("no of ways %d\n", coinchange(S, 2, 10));
    
    return 0;
}