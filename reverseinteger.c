#include <stdio.h>
#include<conio.h>
#include <string.h>
void main()
{
   char a[50];
   clrscr();
   printf("Enter a integer: ");
   scanf("%s",a);
   strrev(a);
   printf("\nReversed integer is: %s",a);
   getch();
}
