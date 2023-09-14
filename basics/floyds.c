// floyd patterns

/*

1
12
123
1234
12345

*/

#include<stdio.h>

void main(){
    int userCount=0;
    printf("\nTell us desired row count ");
    scanf("%d",&userCount);

    for(int row=1;row<=userCount;row++){

        for(int space=userCount;space>row;space--){
            printf(" ");
        }

        for(int data=1;data<=row;data++){
            printf("%d ",data);
        }
        printf("\n");
    }

    // left upper floyd
    // for(int row=1;row<=userCount;row++){
    //     for(int data=1;data<=row;data++){
    //         printf("%d",data);
    //     }
    //     printf("\n");
    // }
}