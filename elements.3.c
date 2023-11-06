// c program to capture the elements from the user
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of an Array:\n");
    scanf("%d",&size);
    int numbers[size];

    for(int i=0;i<size;i++){
        printf("Enter the element in index:%d\n",i);
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d",numbers[i]);
    }
}