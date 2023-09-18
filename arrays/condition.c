// condition based read and update

#include<stdio.h>
void filter(float[],int);
void itr(float[],int);
void list(float[]);

void main(){
    float ctc[10]={8.9,12.5,9.2,10.5,6.4,8.2,4.7,2.5,21.8,13.5};
    filter(ctc,9);
    itr(ctc,10);
    list(ctc);
}

void list(float arr[]){
    for(int index=0;index<10;index++){
        printf("%.1f ",arr[index]);
    }
    printf("\n");
}

void itr(float arr[],int criteria){
    for(int index=0;index<10;index++){
        if(arr[index]>=criteria){
            arr[index]-=(arr[index]*0.075);
        }
    }
}
void filter(float arr[],int required){
    for(int index=0;index<10;index++){
        if(arr[index]>=required){
            printf("%.1f ",arr[index]);
        }
    }
    printf("\n");
}