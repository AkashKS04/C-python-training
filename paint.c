#include<stdio.h>
void main()
{
    int n1,n2;
    float s1,s2;
    float area;
    printf("No of interior walls:");
    scanf("%d",&n1);
    printf("\nNo of exterior walls:");
    scanf("%d",&n2);
    printf("\nSurface Area of each Interior Wall in units of square feet:");
    for (int i = 0; i < n1; i++)
    {
        
        scanf("%f",&area);  
        s1=s1+(area*18);   
        
    }
    printf("\nSurface Area of each Exterior Wall in units of square feet:");
    for (int i = 0; i < n2; i++)
    {
        
        scanf("%f",&area);  
        s1=s1+(area*12);   
        
    }
    
    printf("Total Cost of painting the walls is %.1f",s2+s1);
}