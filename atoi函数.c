#include<stdio.h>
#include<string.h>
#include<ctype.h>
int atoi1(char *a){//基本条件
    int num=0;
    int i,t=0;
    int len=strlen(a);
    for(i=0; i<len; i++){
        if(a[i]>='0'&&a[i]<='9'){
            num=num*10+a[i]-'0';
        }
        else t++;
    }
    if(t!=0) return 0;
    else return num;
}
int atoi2(char *a){//字符控制函数
    int num=0;
    int i,t=0;
    int len=strlen(a);
    for(i=0; i<len; i++){
        if(isdigit(a[i])){//isdigit只能处理字符
            num=num*10+a[i]-'0';
        }
        else t++;
    }
    if(t!=0) return 0;
    else return num;
}
int main(){
    char arr[]="789";
    printf("%d",atoi2(arr));
}