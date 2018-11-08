#define s sprintf
int main(int a,char*v[]){int c,n,t=0;FILE*p=fopen(v[1],"r");while(c!=EOF){char l[81]={0};s(l,"%08X ",t);for(n=0;n<16&&c!=EOF;++n){c=fgetc(p);s(l+9+n*3,"%02X",(unsigned)c);l[11+n*3]=' ';s(l+57+n,(c>31&&c<124)?"%c":".",c);l[58+n]=' ';}printf("%s\n",l);t+=16;}}
