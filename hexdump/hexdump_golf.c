int main(int a,char*v[]){int c,n,t=0;FILE*p=fopen(v[1],"r");while(c!=EOF){char l[81]={0};sprintf(l,"%08X ",t);for(n=0;n<16&&c!=EOF;++n){c=fgetc(p);sprintf(l+9+n*3,"%02X ",c);l[58+n]=(c>31&&c<124)?c:'.';}l[57]=' ';puts(l);t+=16;}}
