#inlude<stdio.h>
void main()
{
  int a=10;
  int *p=&a;
  int **q=&p;
  int ***r=&q;
  printf("a=%d\n%d\n%d\n%d",a,*p,**q,***r);
}
