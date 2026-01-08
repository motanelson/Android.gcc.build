//gcc -o expr expr.c
// ./expr 5 '+' 5 '/' 3
#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[]){
    int n=0;
    int t=0;
    char *a;
    int b;
    if (argc<2)return 1;
    if (argc<3){
        printf("%s",argv[1]);
        return 0;
    }
    t= argc & 1;
    if (t!=0)return 1;
    t=atoi(argv[1]);
    for (n=2;n<argc;n++){
        a=argv[n];
        if(argc<n)return 1;
        n++;
        b=atoi(argv[n]);
        if (a[0]=='/' || a[0]=='/'){
            t=t/b;
            
        }
        if (a[0]=='*'){
            t=t*b;
             
        }

        if (a[0]=='-'){
            t=t-b;
             
        }

        if (a[0]=='+'){
            t=t+b;
            
        }
        if(argc<n+1)return 1;
    }
    printf("%d",t);
    return 0;
}
