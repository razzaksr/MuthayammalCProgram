// passing and changing the values of array in another function
// call by address/ reference

#include<stdio.h>

void alter(int);
void read(int[],int,int);
void modify(int[]);

void main(){
    int bikeMileages[10]={45,35,60,90,25,50,55,30,25,44};
    alter(bikeMileages[3]);
    read(bikeMileages,10,0);
    modify(bikeMileages);
    read(bikeMileages,10,0);
}

void modify(int arr[]){
    printf("array receievd\n");
    arr[0]+=5;
    printf("array's 0th index has changed\n");
}

void read(int arr[],int size,int current){
    if(current<size){
        printf("%d\n",arr[current]);
        current++;
        read(arr,size,current);
    }
}

void alter(int receive){
    printf("%d received @ alter function\n",receive);
    receive*=2;
    printf("%d has doubled after the new version\n",receive);
}