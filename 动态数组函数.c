#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    printf("how many words do you want to eater");
    scanf ("%d",&n);
    char word[20];
    char *arr=(char*)malloc(sizeof(double)*n);
    for(int i=0; i<n; i++){
        gets(word);
        strcat(arr, word);
    }
    int **adr[n],t=0;
    adr[t]=&arr[0];
    int len=strlen(arr);
    for(int i=0; i<len; i++){
        if(arr[i]==0||arr[i]=='\0'){
            adr[t]=&arr[i];
            t++;
        }
        if(t==n) break;
    }
    for(t=0; t<n; t++){
        printf("%s\n",adr[t]);
    }
}