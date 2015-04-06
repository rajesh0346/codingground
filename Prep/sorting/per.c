#include <stdio.h>
void swap(char *str, int i, int j)
{
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

void printperm(char *str, int s, int n)
{
    int i;
    if(s == n){
        printf("%s\n", str);
        return;
    }
    for(i=s; i<=n; i++){
        swap(str, i, s);
        printperm(str, s+1, n);
        swap(str, i, s);
    }
}

int main()
{
    char str[] = "ABCD";
    printperm(str, 0, 3);
    return 0;
}