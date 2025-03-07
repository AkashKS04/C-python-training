#include<stdio.h>
void main()
{
    int w;
    printf("Enter the weight:");
    scanf("%d",&w);
    if(w<0)
    {
        printf("Invalid Input\n");
    }
    if(w==0)
    {
        printf("Time Estimated: 0 minutes\n");
    }  
    if (w>0 && w<=2000)
    {
        printf("Time Estimated: 25 minutes\n");
    }
    else if (w>2000 && w<=4000)
    {
        printf("Time Estimated: 35 minutes\n");
    }
    else if (w>4000 && w<=7000)
    {
        printf("Time Estimated: 45 minutes\n");

    }
    else if(w>7000)
    {
        printf("Overweight\n");
    }
    
}