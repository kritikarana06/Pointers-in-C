#include<stdio.h>
void main()
{
    int a=20,b=10;
    int *p,*q;
    p=&a;
    q=&b;
    printf("\nThe address of a=%d",&a);
    printf("\nThe address of a=%u",p);
    printf("\nThe value of a=%u",*p);
    printf("\nAddress of b=%u",q);

}
    

