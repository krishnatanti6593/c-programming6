#include<stdio.h>
int main(){
    int a,b;
    printf("enter the number of coloum");
    scanf("%d",&a);
    printf("enter the number of row");
    scanf("%d",&b);

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}