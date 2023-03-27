#include<stdio.h>
void main()
{
    int a=10,b=30;
    int *p,*q;
    int temp;
    p=&a;
    q=&b;
    printf("Before swapping a=%d and b= %d\n",a,b);
    temp=*p;//temp=10
    *p=*q;//a=30
    *q=temp;//b=10
    printf("After swapping a=%d and b=%d",*p,*q);


}