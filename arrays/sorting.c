// sorting array using selection sort

#include<stdio.h>

void list(float[]);
void selection(float[]);

void main(){
    float ctc[10]={8.9,12.5,9.2,10.5,6.4,8.2,4.7,2.5,21.8,13.5};
    list(ctc);
    selection(ctc);
    list(ctc);
}

void selection(float arr[]){
    for(int select=0;select<10;select++){
        for(int compare=select+1;compare<10;compare++){
            // swap
            if(arr[select]<arr[compare]){
                arr[select]*=arr[compare];
                arr[compare]=arr[select]/arr[compare];
                arr[select]/=arr[compare];
            }
        }
    }
}

void list(float arr[]){
    for(int index=0;index<10;index++){
        printf("%.1f ",arr[index]);
    }
    printf("\n");
}