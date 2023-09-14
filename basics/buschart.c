// bus chart

#include<stdio.h>
#include<string.h>

void main(){
    int fare=0;char chart[200]="", current[10]="";
    for(int row=1;row<=3;row++){
        for(int seat=1;seat<=4;seat++){
            printf("\nPay for your travel: ");
            scanf("%d",&fare);
            if(fare>=450){
                printf("\nYou can travel in our coach %d seat and %d row",seat,row);
                sprintf(current,"$%d%d",row,seat);
                strcat(chart,current);
            }
            else{
                printf("\nInsufficient amount to travel in our coach");
                strcat(chart,"#");
            }
            if(seat==2){
                strcat(chart," ");
            }
        }
        strcat(chart,"\n");
    }
    printf("\n%s",chart);
}