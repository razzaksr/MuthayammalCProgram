// flipkart flash sale

#include<stdio.h>

void main(){
    int stock=100, required=0,invoice=0;float time=12.05;

    while(stock>0&&time<=12.45){
        printf("\nTell us no of iPhone's required: ");
        scanf("%d",&required);
        if(required<=stock){
            stock-=required;// iter
            printf("\nCongratualtions you have purchased %d iPhones",required);
            invoice++;
        }
        else{
            printf("\n%d stock not available",required);
        }
        time+=0.01;// iter
    }
    printf("\nNo of invoices %d of the flash sale",invoice);
}