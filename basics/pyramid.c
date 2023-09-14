// pyramid pattern

#include<stdio.h>

void main(){
    int desired=0, limit=1;
    printf("\nTell us height of the pyramid ");
    scanf("%d",&desired);
    for(int row=1;row<=desired;row++){
        for(int space=desired;space>row;space--){
            printf(" ");
        }
        for(int data=1;data<=limit;data++){
            // printf("%d",data);
            printf("#");
        }
        printf("\n");limit+=2;
    }
}