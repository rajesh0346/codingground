#include <stdio.h>

int substr(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    
    for (int i=0; i<N-M; i++)
    {
        for (int j=0; j<M; j++)
        {
            if (pat[j] != txt[i+j]) {
                break;
            }
            if (j==M){
                return j;
            }
        }
    }
    return 0;
}

int main()
{
    
}