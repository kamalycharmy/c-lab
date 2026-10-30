#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50],str3[100];
int res;
printf("Enter the first string:");
scanf("%s",str1);
printf("Enter the second string:");
scanf("%s",str2);
res =strlen(strl);
printf("\nLength of first string=%d",res);
strepy(str1);
printf("\ncopied string=%s",str3);
res=stremp(str1,str2);
if(res==0)
printf("\nBoth strings are equal");
else
printf("\nBoth strings are not equal");
strcat(str1,str2);
printf("\nConcatenated string=%s",str1);
return 0;
}
