// placing the grocery order
#include<stdio.h>

void main(){
    char customerName[50]="", customerAddress[50]="", customerEmail[50]="";
    int customerContact=0;

    printf("\nKindly enter the name, address, email and contact number to make order");
    // scanf("%s%s%s%d",customerName,customerAddress,
    // customerEmail,&customerContact);
    // gets(customerName);
    // gets(customerAddress);
    // gets(customerEmail);

    fgets(customerName,sizeof(customerName),stdin);
    fgets(customerAddress,sizeof(customerAddress),stdin);
    fgets(customerEmail,sizeof(customerEmail),stdin);
    
    scanf("%d",&customerContact);

    //printf("\nThanks %s for signing up AMAZON with %s to delivery address %s and contact number %d",customerName,customerEmail,customerAddress,customerContact);
    printf("\nThanks Signing Up AMAZON with following %d contact number and below details",customerContact);
    puts(customerName);
    puts(customerAddress);
    puts(customerEmail);

}