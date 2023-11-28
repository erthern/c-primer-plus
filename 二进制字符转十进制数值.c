#include <string.h>
#include <stdio.h>
int change(char *a){
    int i;
    int n = strlen(a);
    int num;
    for(i = 0; i < n; i++){
        if(a[i] == '1') break;
    }
    n-=i;
    printf("%d",n);
    return 0;
}
int main(){
    char a[100];
    scanf("%s",a);
    change(a);
    return 0;
}