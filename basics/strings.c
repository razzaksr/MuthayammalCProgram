// String related functions:

#include<stdio.h>
#include<string.h>

void main(){
    char temporary[20]="";
    //char temporary[10]="";
    // char *mySkillsets[5]=
    // {"Java FSD","MERN developer","Python FSD","QA","Docker"};
    char mySkillsets[5][30]=
    {"Java FSD","MERN developer","Python FSD","QA","Docker"};
    for(int index=0;index<5;index++){
        
        if(strstr(mySkillsets[index],"FSD")!=NULL){
            printf("\nlet us know updated skill instead of %s",mySkillsets[index]);
            // scanf("%s",temporary);
            gets(temporary);
            strcpy(mySkillsets[index],temporary);
        }
        printf("\n%s",mySkillsets[index]);

    }

}