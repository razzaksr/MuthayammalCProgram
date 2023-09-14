// function illustration
#include<stdio.h>

// declartion
void dollarToRupees(int);
void calculateInterest(double,int);



void main(){
    double myAmount=0.0;int myDays=0;
    printf("\nKet us know tentative amount in your account ");
    scanf("%lf",&myAmount);
    printf("\nLet us know tentative days you will keep %lf ",myAmount);
    scanf("%d",&myDays);
    calculateInterest(myAmount,myDays);
    printf("\nAfter interest calculation %lf is my balance",myAmount);

    // int ctc=0;
    // dollarToRupees(6500);// main is caller
    // printf("\nTell us dollar to be calculated to rupees: ");
    // scanf("%d",&ctc);
    // dollarToRupees(ctc);// main is caller

}
// definition
// call by value/ variable
void calculateInterest(double availableBalance,int days){
    if(days>=30&&days<=60){
        availableBalance+=(availableBalance*0.047);
    }
    else if(days>=60&&days<=90){
        availableBalance+=(availableBalance*0.057);
    }
    else if(days>=90){
        availableBalance+=(availableBalance*0.070);
    }
    else{
        printf("No Interest to be credited to account");
    }
    printf("%.2lf is updated balance",availableBalance);
}

void dollarToRupees(int dollar){
    printf("\n%f is Rupees respective to %d dollar",(dollar*82.98),dollar);
}