//gcc -o sh sh.c
//./cat script.txt | ./sh 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc , char *argv[]){
    int n=0;
    char c[4096];
    while(1){
        printf(">: ");
        fgets(c,4095,stdin);
        if(c[0]==10)break;
        if(c[0]==13)break;
        if(c[0]==0)break;
        
        n=strlen(c)-1;
        if(n<0)n=0;
        c[n]=0;
        if(strcmp(c,"exit")==0)break;
        if(strcmp(c,"EXIT")==0)break;
        if(strcmp(c,"Exit")==0)break;
        system(c);
        if (feof(stdin))break;
    }
    
    return 0;
}
