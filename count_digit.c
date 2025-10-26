#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of  a : ");
    scanf("%d",&a);
    int count =0;
    while(a>0)
   {
    a=a/10;
    count=count +1;
   }
   printf("the number of digits in a number is :  %d",count);
   return 0;
}

