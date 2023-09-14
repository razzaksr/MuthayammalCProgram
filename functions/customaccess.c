// access the custom Header file

// #include "myHeader.h"
#include "myHeader.h"


void main(){

    

    char wish='\0';
    int userAmount=0, received=0;

    

    printf("\nEnter what you wanted to perform ");
    scanf("%c",&wish);
    printf("%c",wish);
    switch (wish)
    {
        case 'w':case 'W':goto withdraw;break;
        case 'd':case 'D':deposit();break;
        default:printf("invalid option");
    }

    return;
    withdraw:
        printf("\nenter the amount to withdraw ");
        scanf("%d",&userAmount);
        received=withdraw(userAmount);
        printf("\n%d Received",received);
}