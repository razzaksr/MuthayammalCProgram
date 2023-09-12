// recruitment

#include<stdio.h>
#include<string.h>

void main(){
    char candidateName[50]="",skill[50]="";
    float cgpa=0.0F;

    printf("Candidate has to submit following details cgpa, name, skill");
    scanf("%f%s%s",&cgpa,candidateName,skill);

    if(strcmp(skill,"Analyst")==0||
    strcmp(skill,"Backend")==0||
    strcmp(skill,"C")==0){
        printf("%s with skill of %s and cgpa %.1f has recruited",
        candidateName,skill,cgpa);
    }
    else{
        printf("%s need to update skill",candidateName);
    }
}