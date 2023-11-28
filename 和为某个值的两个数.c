#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i;
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    int s;
    scanf("%d", &s);
    int t,temp=0;
    for(i=0;i<n;i++){
        for(t=i+1;t<n;t++){
            if(num[i]+num[t]==s) {
                temp++;
                break;
            }
        }
        if(temp) break;
    }
    if(num[i]>num[t]){
        s=num[i];
        num[i]=num[t];
        num[t]=s;
    }
    if(temp>0) printf("%d %d\n",num[i],num[t]);
    else printf("Not found");
            
}