#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    int n=0;
    int a=0;
    int s=1;
    int c=0;
    int i=0;
    if (argc>3){
        s=atoi(argv[3]);
        c=atoi(argv[2]);
        a=atoi(argv[1]);
    }else{
        if (argc>2){
            a=atoi(argv[1]);
            c=atoi(argv[2]);
        }else{
            if (argc>1){
                 c=atoi(argv[1]);
            }else{
                return 1;
            }
        }
    }
    
    if (s>0){
        
        for(i=a;i<c;i=i+s)printf("%d ",i);
    }else{
        if(s==0){
            return 1;
        }else{
            for(i=a;i>c;i=i+s)printf("%d ",i);
        }
    }
    return 0;
}