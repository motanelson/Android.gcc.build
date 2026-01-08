//gcc -o sed sed.c
// cat hello.txt | ./sed "hello" "hi"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char *argv[]){
    int n=0;
    FILE *f1;
    char *a;
    char *c;
    char *d;
    char *p;
    char *pp;
    char *ppp;
    int l=0;
    char b[4096]="";
    //puts("ok");
    if (argc<3)return 0;
    c=argv[1];
    d=argv[2];
    l=strlen(c);
    //puts("ok");
    while(1){
        b[0]=0;
        
        fgets(b,4095,stdin);
        if(strstr(b,c)==NULL){
          printf("%s",b);
        }else{
            p=b;
            pp=b;
            while(1){
               pp=strstr(p,c);
               ppp=pp+l;
               pp[0]=0;
               printf("%s%s",p,d);
               pp=ppp;
               p=ppp;
               if(strstr(p,c)==NULL){
                  printf("%s",p);
                  break;
               } 
            }
        }
        if(feof(stdin))return 0;
    }   
  
    return 0;
}
