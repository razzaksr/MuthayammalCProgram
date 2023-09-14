#include<stdio.h>
void main()
{
    int count=0,experience=0,entry;
    for(entry=1;entry<=10;entry++)
    {
        printf("Tell us your experience of working:");
        scanf("%d",&experience);
        if(experience>=5 && experience<=7)
        {
            printf("\nSelected");
            count+=1;
        }
        else
        {
            printf("\nNot selected");
        }
    }
    printf("\nSelected experts %d",count);
}