#include<string.h>
#include<stdio.h>
int main()
{
 char s1[20],s2[20];
 printf("Enter A string: ");
 scanf("%[^\n]s",s2);
 strcpy(s1,s2); //Content of string s2 is copied into string s1
 printf("Copied string:");
 printf("%s",s1);
 return 0;
}