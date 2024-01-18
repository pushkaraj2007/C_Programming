#include <stdio.h>

int main() 
                            {
float percentage;

printf("Enter your percentage: ");
scanf("%f", &percentage);

if (percentage >= 75&&percentage <= 100)
{printf("Grade: Distinction\n");} 
                        {
  if (percentage >= 60&& percentage<=74)  {printf("Grade:A\n");}
  else 
                    {
      if (percentage>=55&&percentage<=59) 
{printf("Grade: B\n");}
      else
            {
        if 
(percentage >=40 &&percentage <= 54) 
{printf("Grade: Pass\n");} 

else  
{if(percentage >=0&&percentage <=39)
{
  printf("fail\n");
}
        
else
{printf("this is your results\n");}
        } }
                    }
                        }   

return 0;
                            }
