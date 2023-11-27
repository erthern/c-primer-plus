#include<stdio.h>
int  isPalindrome(int x) {
    int n=x,i=1,t=0;
    if(x<0)return 0;
    while(n>0){
        t=t*10+n%10;
        n/=10;
    }
    return x==t;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",isPalindrome(n));
}