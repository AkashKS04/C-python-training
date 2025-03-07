#include<stdio.h>
void main()
{
    char name[20],ward[20];
    int days,Gbill,Sbill,Pbill;
    printf("Patients name: ");
    scanf("%s",name);
    printf("Ward type: ");
    scanf("%s",ward);
    printf("No of days admitted: ");
    scanf("%d",&days);
    if(ward[0]=='g'||ward[0]=='G')
    {
        printf("Patients name: %s\n",name);
        printf("Ward type: General\n");
        Gbill=days*1000;
        printf("Room charges: %d\n",Gbill);
    }
    else if(ward[0]=='s'||ward[0]=='S')
    {
        printf("Patients name: %s\n",name);
        printf("Ward type: Semi-private\n");
        Sbill=days*2000;
        printf("Room charges: %d\n",Sbill);
    }
    else if(ward[0]=='p'||ward[0]=='P')
    {
        printf("Patients name: %s\n",name);
        printf("Ward type: Private\n");
        Pbill=days*5000;
        printf("Room charges: %d\n",Pbill);
    }
    else
    {
        printf("Invalid ward type\n");
    }


}