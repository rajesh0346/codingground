#include <stdio.h>


void printtail(FILE *fp, int n)
{
    int ch;
    long pos;
    
    fseek(fp, -1, SEEK_END);
    
    while(n > 0) {
        ch = fgetc(fp);
        if (ch == '\n') {
            n--;
        }
        if (fseek(fp, -2, SEEK_CUR)) {
            break;
        }
    }
    
    while((ch = fgetc(fp)) != EOF){
        putchar(ch);
    }
}

int main()
{
    FILE *fp = fopen("abc", "r");
    
    printtail(fp, 4);
    fclose(fp);

    return 0;
}

