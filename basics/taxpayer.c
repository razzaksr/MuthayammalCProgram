#include<stdio.h>
int main()
{
    char name[100]="",profession[100]="";
    float income, tax;
    printf("enter the tax payer's name:");
    gets(name);
    printf("enter the tax player's profession:");
    gets(profession);
    printf("enter the tax payer's income:");
    scanf("%f",&income);
    if(income>5&&income<=10){
        tax=income*0.05;
        printf("\n%.1f tax need to pay",tax);
    }
    else if(income>10&&income<=15){
        tax=income*0.10;
        printf("\n%.1f tax need to pay",tax);
    }
    else if(income>15&&income<=20){
        tax=income*0.20;
        printf("\n%.1f tax need to pay",tax);
    }
    else if(income>20&&income<=30){
        tax=income*0.25;
        printf("\n%.1f tax need to pay",tax);
    }
    else if(income>30){
        tax=income*0.30;
        printf("\n%.1f tax need to pay",tax);
    }
    else{
        printf("\n%s no need to pay tax",name);
    }
}