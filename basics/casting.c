// Casting: implcit, explicit

#include<stdio.h>

void main(){
    // char board=89;int myPin='v';
    // printf("My board is %d and myPin is %c",board,myPin);

    int myBalance=2500;double myAccount=6700.550;

    myAccount-=myBalance;
    printf("Available is %lf",myAccount);
    myBalance-=300.5;
    printf("Available is %d",myBalance);
    
}