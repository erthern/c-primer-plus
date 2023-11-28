#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double a=100,b=100;
    for(int i=1;i<n+1;i++){
        a*=1.001;
        if(i%5<4&&i%5>0) b*=1.002;
        else b*=0.999;
    }
    printf("%lf,%lf",a,b);
}