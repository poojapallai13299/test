#include<stdio.h>
#include "header.h"
 
int main()
{
    int n,r;
    printf("Enter the number\n");
    scanf("%d",&n);
    r=sum(n);
    printf("Sum of digits is %d\n",r);
    return 0;
}