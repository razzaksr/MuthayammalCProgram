// private travels booking

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char destination[20]="";
    char coach='\0';
    int payment=0;
    printf("----------Welcome to Sundara Travels------------\n");
    printf("Tell us your destination of the journey");
    gets(destination);
    //strlwr(destination);
    if(strcmpi(destination,"chennai")==0||
    strcmpi(destination,"chengalpat")==0||
    strcmpi(destination,"Tambaram")==0){
        printf("\nThanks for choosing %s",destination);
        printf("\nBus timings between 19.00pm to 02.30am");
    }
    else if(strcmpi(destination,"kanyakumari")==0||
    strcmpi(destination,"madurai")==0||
    strcmpi(destination,"karur")==0){
        printf("\nThanks for choosing %s",destination);
        printf("\nBus timings between 10.00am to 04.30pm");
    }
    else if(strcmpi(destination,"banglore")==0||
    strcmpi(destination,"hosur")==0){
        printf("\nThanks for choosing %s",destination);
        printf("\nBus timings between 06.00am to 11.30am\nselect Coach type(A-Ac/N-Non-Ac)");
        coach=getche();//getc(coach);//coach=getch();//coach=getchar();
        switch (coach)
        {
            case 'A':case 'a':
                printf("\nPay now to book your ticket ");
                scanf("%d",&payment);
                if(payment>=500&&strcmpi(destination,"hosur")==0){
                    printf("\nYour seat booked\nEnjoy the journey to %s",destination);
                }
                else if(payment>=680&&strcmpi(destination,"banglore")==0){
                    printf("\nYour seat booked\nEnjoy the journey to %s",destination);
                }
                else{
                    printf("\nInsufficient payment to travel in our bus");
                }
                break;
            case 'N':case 'n':
                printf("\nTicket fare is 400rs and pay now ");
                break;
            default:printf("\nInvalid Coach type");
        }
    }
    else{
        printf("\nInvalid destination %s",destination);
    }

}