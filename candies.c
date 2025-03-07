#include<stdio.h>
void main()

{
    int N=10;
    int k=5;
    int n;
    printf("Input:");
    scanf("%d",&n);
    if(n<=0 )
        {
            printf("Invalid Input");
            printf("No of candies available:%d",N);
        }
    else if(n<10 && n<=k)
        {
            printf("No of candies sold:%d\n",n);
            N = N-n;
            printf("No of candies available:%d",N);
        }
        else if(n>k && n<=N)
        {
            printf("No of candies sold:%d\n",n);
            N = N-n;
            printf("No of candies available:%d\n",N);
            printf("No of candies to be refilled:%d",n);
        }
}