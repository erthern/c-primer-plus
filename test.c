#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<112; i++){
        n+=4;
        printf("%d\t",n);
        if(i%5==4){ printf("\n");
    }
}
}