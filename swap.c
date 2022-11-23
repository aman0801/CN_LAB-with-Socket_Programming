#include<stdio.h>
#include<stdlib.h>
void getdata( int *, int *);
void swap(int *,int *);
int main()
{
int a,b;
getdata(&a,&b);
swap(&a,&b);
printf("Now the 1st number is : %d\n 2nd number is : %d",a,b);
return 0;
}
void getdata( int *m, int *n)
{
printf("Enter the 1st number :");
scanf("%d",m);
printf("Enter the 2nd number :");
scanf("%d",n);
}
void swap(int *a,int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b= tmp;
}
