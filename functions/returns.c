// global variable example

#include<stdio.h>

char myDomain[50]="";

void myWish();

void main(){
    printf("\nTell us desired domain to work in ");
    scanf("%s",myDomain);
    myWish();
    // puts(myDomain);
    printf("\n%s in main",myDomain);

}
void myWish(){
    printf("\nLet us know new domain to work with instead of %s",myDomain);
    scanf("%s",myDomain);
}