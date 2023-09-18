// Creating an single dimension array to store kart item prices

#include<stdio.h>

void readAll(double[],int,int);

void main(){
    // creation
    double itemsPrice[25];int capacity=0, size=0, userWish=0;
    double currentPrice=0.0;

    capacity=sizeof(itemsPrice);

    printf("%d",capacity);

    printf("\n%lf",itemsPrice[0]);

    size=capacity/sizeof(itemsPrice[0]);
    printf("\nLet us know how many items to be added: ");
    scanf("%d",&userWish);

    // inserting into array
    if(userWish<=size){
        for(int index=0;index<userWish;index++){
            printf("\nAdd the price of the product into the kart ");
            scanf("%lf",&currentPrice);
            itemsPrice[index]=currentPrice;
        }
    }
    else{
        printf("\nInvalid kart capacity");
        return;
    }

    // read values from array
    //readAll(itemsPrice,size,0);
    readAll(itemsPrice,userWish,0);
}

void readAll(double arr[],int limit,int init){
    if(init<limit){
        printf("%.1lf\n",arr[init]);
        init++;
        readAll(arr,limit,init);
    }
}