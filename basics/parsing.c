// type parsing

#include<stdio.h>

void main(){
    char myDetails[100]="Razak 10.8 32";
    char myName[20]="";int age=0;double experience=0.0;
    //printf("%s",myDetails);
    sscanf(myDetails,"%s %lf %d",myName,&experience,&age);
    printf("Name : %s\nMy Experience %lf\nMy Age %d",myName,experience,age);
}