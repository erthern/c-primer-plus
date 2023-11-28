#include<stdio.h>
#include<string.h>
struct boyfriend{
    char name[11];
    int height;
    int grade;
};
int main(){
    int n;
    scanf("%d",&n);
    struct boyfriend b[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d",&b[i].name,&b[i].height,&b[i].grade);
    }
    struct boyfriend a;
    strcpy(a.name,b[0].name);
    a.height=b[0].height;
    a.grade=b[0].grade;
    for(int i=1;i<n;i++){
        if(a.grade<b[i].grade){
            strcpy(a.name,b[i].name);
            a.height=b[i].height;
            a.grade=b[i].grade;
        }
        else if(a.grade==b[i].grade){
            if(a.height<b[i].height){
                strcpy(a.name,b[i].name);
                a.height=b[i].height;
            }
        }
    }
    printf("%s %d %d",a.name,a.height,a.grade);
}