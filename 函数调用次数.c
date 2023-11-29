#include<stdio.h>
#include<stdlib.h>
#include<time.h>
static int t=0;
int use(int a){
    t++;
    return t;
}
int main(){
    int i;
    for(i=0;i<20;i++){
        printf("   %d",use(i));
    }
    return 0;
}