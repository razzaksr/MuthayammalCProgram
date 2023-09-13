// find max and min

#include<stdio.h>

void main(){
    int number=0, max=0;

    for(int count=10;count<=20;count++){
        printf("\nEnter the number: ");
        scanf("%d",&number);
        if(number>max){
            max=number;
        }
    }
    printf("\n%d is maximum number of 10 inputs",max);
}