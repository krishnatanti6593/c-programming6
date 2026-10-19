#include<stdio.h>
int main(){
    int d,a=0,b=1,sum,c=0;
    printf("enter the number");
    scanf("%d",&d);
    for(int i=0;i<=d;i++){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}