// voter application 

// header section for printf(), scanf() and other I/O functions
#include<stdio.h>

// execution point
void main(){
    // local members initialization recommended
    char applicantName[10]="", applicantAddress[20]="", applicantEmail[10]="";
    int contactNumber=0, assemblyCode=0;
    printf("\nLet us know your basic details\nApplicant's Name, Address, Email, Contact and assembly belong to");
    // scanf("%s%s%s%d%d",
    // applicantName,applicantAddress,applicantEmail,
    // &contactNumber,&assemblyCode);
    // variableNAme,size,source
    
    // fgets(applicantName,sizeof(applicantName),stdin);
    // fgets(applicantAddress,sizeof(applicantAddress),stdin);
    // fgets(applicantEmail,sizeof(applicantEmail),stdin);

    gets(applicantName);
    gets(applicantAddress);
    gets(applicantEmail);
    
    scanf("%d%d",&contactNumber,&assemblyCode);
    printf("Your request for new voter ID with name %s contact of %d and email %s has submitted successfully for assembly %d", applicantName,contactNumber,applicantEmail,assemblyCode);
}
