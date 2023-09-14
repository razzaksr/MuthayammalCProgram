// Consider this is CDM cum ATM machine where you can perform both 
//debit and credit

#include<stdio.h>

int machineBalance=200000;

int withdraw(int cash){
    if(cash<=machineBalance){
        machineBalance-=cash;
        return cash;
    }
    return -1;
}

void deposit(){
    char *ptr;
    int amount=0;
    printf("\nFill the tray to deposit your amount ");
    scanf("%d",&amount);
    machineBalance+=amount;
    printf("%d has deposited so available is %d",amount,machineBalance);
}