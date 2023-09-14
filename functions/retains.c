// returning to caller examples

#include<stdio.h>

int takeHome(double);

void main(){
    double offer=0.0;int exactCredit=0;
    printf("\nTell us company offerring you ");
    scanf("%lf",&offer);
    exactCredit=takeHome(offer);
    printf("\n%d After TDS and IT",exactCredit);
}

int takeHome(double ctc){
    double inHand=0.0;
    inHand=ctc-((ctc*0.010)+(ctc*0.075));
    return (int)inHand;
}