#include <stdio.h>
#include <stdlib.h>

int main(int a, char *v[])
{
    int c,t = 0;
    FILE *p=fopen(v[1], "r");
    while (c!=EOF)
    {
        char l[81]={' '};
        for (int n=0;n<16&&c!=EOF;++n) {
            c = fgetc(p);
            sprintf(l,"%08X",t);
            sprintf(l+10+n*3,"%02X",(unsigned char)c);
            l[10+n*3+2]=' ';
            sprintf(l+60+n,(c>31&&c<124)?"%c":".",c);
            l[60+n+1]=' '; 
        }
        l[8]=l[9]=l[58]=l[59]=' ';
        printf("%s\n", l);
        t+=16;
    }
    fclose(p);
}
