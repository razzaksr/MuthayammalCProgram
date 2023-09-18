// multi dimensional

#include<stdio.h>

void bookSeats(int[5][20],int);
void printChart(int[5][20]);

void main(){
    int passengersAge[5][20];
    bookSeats(passengersAge,3);
    printChart(passengersAge);
}
void printChart(int tickets[5][20]){
    for(int coach=0;coach<5;coach++){
        for(int seat=0;seat<20;seat++){
            printf("%d ",tickets[coach][seat]);
        }
        printf("\n");
    }
}
void bookSeats(int book[5][20],int coach){
    int  age=0;
    while(coach<5){
        for(int seat=0;seat<20;seat++){
            printf("\nEnter the passegnger age: ");
            scanf("%d",&age);
            book[coach][seat]=age;
        }
        coach++;
    }
}