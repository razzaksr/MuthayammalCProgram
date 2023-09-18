// recursion demo

#include<stdio.h>

// declaration
void access();
void calculateSum(int,int);

void main(){
    //access();
    calculateSum(10,0);
}

void calculateSum(int limit,int sum){
    if(limit>0){
        int userGiven=0;
        limit--;
        printf("\nEnter the next  umber to be sum ");
        scanf("%d",&userGiven);
        sum+=userGiven;
        calculateSum(limit,sum);
    }
    else{
        printf("\nSum valus is %d",sum);
    }
}

void access(){
    printf("\nAccess called");
    access();// recursion
}