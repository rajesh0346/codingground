
#include <stdio.h>
#include <string.h>

int getcnt(char *str)
{
    char temp = *str;
    int count = 0;
    while(temp == *str) {
        str++;
        count++;
    }
    return count;
}

int printcnt(char *str, int count)
{
    int tcount = count;
    int cnt = 0, tcnt = 0;
    
    
    if (count == 1) {
        return 0;
    }
    
    tcount = count;
    while(tcount){
        tcount = tcount/10;
        cnt++;
    }
    
    tcnt = cnt;
    while(count){
        str[--cnt] = 48 + count % 10;
        count = count / 10;
    }
    
    return tcnt;
}

void compress(char *str, int n)
{
    int i = 0, j = 0;
    int count = 0;
    
    while(i < n){
        count = getcnt(&str[i]);
        str[j++] = str[i];
        j += printcnt(&str[j], count);
        i += count;
    }
    str[j] = '\0';
}

int main()
{
    char arr[]  = "aaaabbbcccddeeffggg";
    char arr1[] = "aaaa";
    
    compress(arr, strlen(arr));
    printf("%s\n", arr);

    return 0;
}

