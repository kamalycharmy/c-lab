#include<stdio.h>
#include<stdlib.h>
/*call by value*/
int addbyvalue(int a,intb)
{
int res;
res=a+b;
return res;
}
/*call by reference*/
void swapbyreference(int*a,int*b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main()
{
int a,b,res;
int*ptr;
int*arr;
int n,i,sum;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the secound number:");
scanf("%d",&b);
/*pointer demonstration*/
ptr=&a;
printf("\npointer demonstrate:");
printf("\nvalue of a=%d",*ptr);
printf("\naddress of a=%p",(void*)ptr);
/*Call by Value*/
res=addByValue(a,b);
printf("\n\nCall by Value:");
printf("\nSum=%d",res);
/*Call by Reference*/
swapByReference(&a,&b);
printf("\n\nCall by Reference:");
printf("\nAfter swaping,first number=%d",a);
printf("\nAfter swapping,second number=%d",b);
/*Dynamic Memory Allocation*/
printf("\n\nDynamic Memory Allocation");
printf("\nEnter the number of elements:");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
if(arr==NULL){
printf("Memory allocation failed.");
return 0;
}
printf("enter%d element:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
sum=0;
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
printf("sum of dynamically allocated array=%d",sum);
free(arr);
return 0;
}
