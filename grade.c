#include<stdio.h>
int main()
{
     int n;
     printf("enter mark : ");
     scanf("%d",&n);
     if(n>=85&&n<=100)
     {
          printf("Grade A");
     }
     if(n>=70&&n<=84)
     {
          printf("Grade B");
     }
     if(n>=55&&n<=69)
     {
          printf("Grade C");
     }
     if(n>=40&&n<=54)
     {
          printf("Grade D");
     }
     if(n<40)
     {
          printf("Grade F");
     }
     return 0;
}
