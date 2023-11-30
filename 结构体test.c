#include<stdio.h>
struct name{
    char name[20];
    char familyname[20];
};
struct student{
    struct name st;
    float grade[3];
    float ave;
};
#define CSIZE 4
int main()
{
    struct student s[CSIZE];
    int i;
    float sum=0;
    for(i=0;i<CSIZE;i++)
    {
        scanf("%s %s %f %f %f",s[i].st.name,s[i].st.familyname,&s[i].grade[0],&s[i].grade[1],&s[i].grade[2]);
        s[i].ave=(s[i].grade[0]+s[i].grade[1]+s[i].grade[2])/3;
        sum+=s[i].ave*3;
    }
    for(i=0;i<CSIZE;i++)
    {
        printf("%s %s %.2f %.2f %.2f %.2f\n",s[i].st.name,s[i].st.familyname,s[i].grade[0],s[i].grade[1],s[i].grade[2],s[i].ave);
    }
    printf("%f",sum);
    return 0;
}