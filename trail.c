#include<stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    l1:
    if(a=-1) {
        printf("hello world\n");
        printf("enter any number except=-1");
        scanf("%d", &a);
        goto l1;
    }
    else{
        printf("stop");
    }
}