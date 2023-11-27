#include<stdio.h>
double pow(double x,int n){
    int i;
    double res = 1;
    for(i = 0; i < n; i++){
        res *= x;
    }
    return res;
}
int main(){
    int n;
    double x;
    scanf("%lf",&x);
    scanf("%d",&n);
    printf("%.lf\n",pow(x,n));
    return 0;
}