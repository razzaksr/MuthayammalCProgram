// linear search in array using pointers

#include<stdio.h>

void main(){
    float ctc[10]={8.9,12.5,9.2,10.5,6.4,8.2,4.7,2.5,21.8,13.5};
    float userData=2.5, *refer;
    refer=ctc;// refer=&ctc[0]

    for(int runtime=0;runtime<10;runtime++){
        if(*refer == userData){
            printf("%d is position where you can find %f",
            runtime,userData);
        }
        refer++;
    }
}