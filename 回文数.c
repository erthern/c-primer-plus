#include<stdio.h>
#include<stdlib.h>
int  isPalindrome(int x) {
    int n=x,i=1,t=0;
    for(;n>=1;){
        n/=10;
        t++;
    }
    if(x<0) return 0;
    int *a=(int *)malloc(sizeof(int)*t);
    for(i=0;i<t;i++){
        a[i]=x%10;
        x/=10;
    }
    for(i=0;i<t;i++){
        if(a[i]!=a[t-i-1]) return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",isPalindrome(n));
}