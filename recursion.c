#include<stdio.h>
#include<conio.h>
int sumdigit(int);
void main()
{
/*To find the sum of the digits of a number using recursive function*/
int num;
clrscr();
printf("Enter a number whose sum of the digits is to be calculated: ");
scanf("%d",&num);
printf("\nThe sum of the digits of %d= %d",num,sumdigit(num));
getch();
}
int sumdigit(int n)
{
int sum;
if(n/10==0) 
return n;
else
sum=n%10+sumdigit(n/10);
return sum;
}
