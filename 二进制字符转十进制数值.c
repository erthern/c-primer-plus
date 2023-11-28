#include <string.h>
#include <stdio.h>
int change(char *a){
    int i;
    int n = strlen(a);
    int nums[n];
    int num=0;
    for(i = 0; i < n; i++){
        nums[i]=-1;
        if(a[i]=='1') nums[i]=n-1-i;
    }
    for(i = 0; i < n; i++){
        if(nums[i]==-1) continue;
        num+=pow1(nums[i]);
    }
    return num;
}
int pow1(int n){
    int i;
    int res = 1;
    for(i = 0; i < n; i++){
        res *= 2;
    }
    return res;
}
int main(){
    char a[100];
    scanf("%s",a);
    printf("%d",change(a));
    return 0;
}