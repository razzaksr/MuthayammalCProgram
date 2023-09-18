// re-arragne based on user defined index order

#include<stdio.h>
#include<string.h>

void jumble(char[]);

void main(){
    char myWord[50]="alphabet";
    printf("\n%s",myWord);
    jumble(myWord);
    printf("\n%s",myWord);
}

void jumble(char arr[]){
    int index[8]={1,3,0,7,4,6,2,5};
    char newWord[50]="";
    for(int position=0;position<8;position++){
        newWord[position]=arr[index[position]];
    }
    strcpy(arr,newWord);
}