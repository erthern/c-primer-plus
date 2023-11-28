#include<stdio.h>//'0' 48
#include<string.h>
#include<ctype.h>
int main(){
    char a[1001],b[1001];
    gets(a);
    gets(b);
    char c[1001];
    int len1 = strlen(a);
    int len2 = strlen(b);
    int i,t;
    int s=0;
    if(len1 < len2){
        i=len2-1;
        t=len1-1;
        while(i >= 0){
        c[i]=b[i]+s;
        if(t>=0) c[i]+=a[t]-48;
        if(c[i]>57) {
            c[i]-=10;
            s++;
        }
        else s=0;
        i--;
        t--;
    }
    }
    else{
        i=len1-1;
        t=len2-1;
        while(i >= 0){
        c[i]=a[i]+s;
        if(t>=0) c[i]+=b[t]-48;
        if(c[i]>57) {
            c[i]-=10;
            s++;
        }
        else s=0;
        i--;
        t--;
    }
    }
    if(s) printf("1");
    puts(c);
}