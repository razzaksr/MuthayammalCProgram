// patterns

/*

$$$$$
$$$$$
$$$$$
$$$$$
$$$$$

*/

#include<stdio.h>

void main(){
    int userDefinfine=0;
    printf("\nLet us know your desired limit to generate pattern: ");
    scanf("%d",&userDefinfine);
    for(int row=1, alpha='A';row<=userDefinfine;row++){
        for(int data=1;data<=userDefinfine;data++,alpha++){
            printf("%c",alpha);
        }
        printf("\n");
    }
}