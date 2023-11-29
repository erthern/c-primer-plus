#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(0);
    int i=0;
    while(i<10){
        printf("%d ",rand()%100);
        i++;
    }
    return 0;
}