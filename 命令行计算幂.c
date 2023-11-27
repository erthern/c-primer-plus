#include<stdio.h>
int main(int argc, char *argv){
    int i,t=1;
    if(argc<3) return 0;
    double d =(double)argv[1];
    for(i=0;i<(int)argv[2];i++){
        t+=d;
    }
    printf("%d",t);
    return 1;
}