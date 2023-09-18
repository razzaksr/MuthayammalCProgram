// spiral traversal

#include<stdio.h>
void spiralConversion(double[4][3],double[]);

void main(){
    // 6.9,7.2,7.65,8.9,8.03,7.25,6.8,6.2,7.1,8.1,8.21,7.9
    double cgpa[4][3]={
                        {6.9,7.2,7.65},
                        {8.1,8.21,8.9},
                        {7.1,7.9,8.03},
                        {6.2,6.8,7.25}
                        };
    double report[12];
    spiralConversion(cgpa,report);
    for(int index=0;index<12;index++){
        printf("%lf ",report[index]);
    }
}

void spiralConversion(double multi[4][3],double arr[]){
    int dept=0,topper=0,index=0;
    // 0,1,2,3
    //6.9,7.2,7.65
    while(topper<3){
        arr[index]=multi[dept][topper];
        index++;topper++;
    }
    //8.9,8.03,7.25
    topper--;dept++;
    while(dept<4){
        arr[index]=multi[dept][topper];
        dept++;index++;
    }
    //6.8,6.2,
    dept--;topper--;
    while(topper>=0){
        arr[index]=multi[dept][topper];
        index++;topper--;
    }
    // 7.1,8.1
    topper++;dept--;
    while(dept>=1){
        arr[index]=multi[dept][topper];
        dept--;index++;
    }
    // 8.21,7.9
    dept++;topper++;
    while(dept<=2){
        arr[index]=multi[dept][topper];
        dept++;index++;
    }
}