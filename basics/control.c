// control statement with cash dispenser

#include<stdio.h>

void main(){
    char receipt[2][100]={"",""};
    int _500s=10, _100s=40, request=0, current=0;
    printf("\nLet us know amount wish to withdraw ");
    scanf("%d",&request);
    //check the requested amount can be dispensed by 500s
    if(request>=500){
        // get required 500s count
        current=request/500;// 7000/500 >> 14
        // check the count with available
        if(current<=_500s){
            request-=(current*500);
            sprintf(receipt[0],"500 X %d\n",current);
            _500s-=current;
        }
        else{
            request-=(_500s*500);
            sprintf(receipt[0],"500 X %d\n",_500s);
            _500s=0;
        }
    }
    //printf("%d\n",_100s);
    if(request>0&&request%100==0){
        //printf("100s will be provided");
        // get required 100s count
        current=request/100;// 2000/100 >> 20
        // check the count with available
        if(current<=_100s){
            request-=(current*100);
            sprintf(receipt[1],"100 X %d\n",current);
            _100s-=current;
        }
        else{
            request-=(_100s*100);
            sprintf(receipt[1],"100 X %d\n",_100s);
            _100s=0;
        }
        //printf("\n\n%d\n\n",_100s);
    }
    //printf("%d\n",_100s);
    if(request==0){
        printf("Amount dispensed");
        printf("\n%s%s",receipt[0],receipt[1]);
    }
    else{
        printf("Insufficient amount in machine");
    }
}