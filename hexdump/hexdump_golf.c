#include <stdio.h>
#include <stdlib.h>

int main(int a, char *v[])
{
    int c,t=0;
    FILE *p=fopen(v[1],"r");
    while (c!=EOF)
    {
        char l[81]={' '};
        sprintf(l,"%08X ",t);
        for (int n=0;n<16&&c!=EOF;++n) {
            c = fgetc(p);
            sprintf(l+9+n*3,"%02X",(unsigned char)c);
            l[11+n*3]=' ';
            sprintf(l+57+n,(c>31&&c<124)?"%c":".",c);
            l[58+n]=' ';
        }
        printf("%s\n",l);
        t+=16;
    }
    fclose(p);
}
