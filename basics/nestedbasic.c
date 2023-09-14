// nested loop illustration

#include<stdio.h>

void main(){
    for(int table=1;table<=10;table++){
        printf("\nShowing math table %d",table);
        for(int number=1;number<=10;number++){
            printf("\n%d X %d = %d",number,table,(number*table));
        }
    }
}