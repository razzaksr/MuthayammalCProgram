// basic loop under standing
#include<stdio.h>

void main(){
    // init
    int fare=0,seat=1;

    // cond
    while(seat<=30){
        printf("\nPay the fare to start your journey: ");
        scanf("%d",&fare);
        if(fare>=450){
            printf("\nYou can travel @%d",seat);
            seat++;//iter
        }
        else{
            printf("\nYou cannot travel");
        }
    }
}