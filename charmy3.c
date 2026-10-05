#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("===== BRANCHING STATEMENTS =====\n");
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("\n-----MENU-----\n");
printf("1. Check positive, Negative or Zero\n");
printf("2. Check Even or Odd\n");
printf("3. Find Largest of Two Numbers\n");
printf("4. check divisibility by 5\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
printf("\n-----RESULT-----\n");
switch(choice)
{
    case 1:
       if(a>0)
            printf("%d is positive",a);
            else if(a<0)
            printf("%d is Negative",a);
            else
                printf("%d is Zero",a);
            break;
         case 2:
             if(a%2==0)
                  printf("%d is Even",a);
              else   
                  printf("%d is odd",a);
               break;    
                  case 3:
                  if(a>b)
               {   
                  res = a;
                  printf("%d is the Largest Number",res);
                  }
                  else if (b>a)
                  {
                  res = b;
                  printf("%d is the Largest Number", res);
                  }
                  else
                  {
                  printf("Both number are Equal");
                  }
                  break;
                case 4:
                       if(a%5==0)
                               printf("%d is not Divisible by 5", a);
                           else
                                printf("%d is Not Divisible by 5", a);    
                              break;
                                    
                       default:             
                                     printf("Invalid choice.");
                                           }
                                           return 0;
                                       }          
