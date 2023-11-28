#include<stdio.h>
#include<string.h>
struct good {
    char name[11];
    double price;
    int weight;
};
int main(){
    int n;
    scanf("%d",&n);
    struct good g[n];
    for(int i=0;i<n;i++){
        scanf("%s %lf %d",g[i].name,&g[i].price,&g[i].weight);
    }
    struct good a;
    strcpy(a.name,g[0].name);a.price = g[0].price;a.weight = g[0].weight;
    for(int i=1;i<n;i++) {
        if(g[i].weight>a.weight){
            a.weight=g[i].weight;
            a.price=g[i].price;
            strcpy(a.name,g[i].name);
        }
        else if(g[i].weight==a.weight){
            if(g[i].price>a.price){
                a.price=g[i].price;
                strcpy(a.name,g[i].name);
            }
        }
    }
    printf("%s %.2lf %d",a.name,a.price,a.weight);
}