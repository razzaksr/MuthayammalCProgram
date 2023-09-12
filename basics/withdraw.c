// basic withdraw

#include<stdio.h>

void main(){
    char accountHolder[20]="";int accountNumber=0, desiredCash=0;
    float accountBalance=0.0F;
    printf("Tell us Your KYC account number, balance");
    scanf("%d%f",&accountNumber,&accountBalance);
    fgets(accountHolder,sizeof(accountHolder),stdin);
    printf("\nKindly verify your KYC %s\t%d\t%f",
    accountHolder,accountNumber,accountBalance);

    printf("Valid amount to withdraw ");
    scanf("%d",&desiredCash);

    accountBalance-=desiredCash;
    //accountBalance=accountBalance-desiredCash;

    printf("Your account statement after the transaction of %d is %s\t%d\t%f",
    desiredCash,accountHolder,accountNumber,accountBalance);
    
}