// no of debits and charges

#include<stdio.h>

void main(){
    int current=0, debitCount=0, previous=0;
    for(int transaction=1;transaction<=10;transaction++){
        printf("\nLet us know the current balance: ");
        scanf("%d",&current);
        if(current<previous){
            debitCount++;
        }
        previous=current;
    }
    debitCount-=3;
    if(debitCount>0){
        printf("\n%d is charges for %d debits",(debitCount*20),debitCount);
    }
}