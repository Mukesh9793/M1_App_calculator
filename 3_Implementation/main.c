#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
  
int main()  
{
  
    int ope, num1, num2;
  
    float res;
  
    char ch;
  
    do
      {
  
        printf (" Select an operation to perform: ");
  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Select an operation ");

      
    scanf ("%d", &ope);

      switch (ope)
  
    {
  
        case 1:  
            // Add two numbers
  
            printf (" You chose: Addition");
  
            printf ("\n Enter First Number: ");
  
            scanf (" %d", &num1);
  
            printf (" Enter Second Number: ");
  
            scanf (" %d", &num2);
  
            res = num1 + num2;
 
             printf (" Addition of two numbers is: %.2f", res);
  
            break;
          case 2: 
            // Subtract two numbers
  
            printf (" You chose: Subtraction");
  
            printf ("\n Enter First Number: ");
  
            scanf (" %d", &num1);
  
            printf (" Enter Second Number: ");
  
            scanf (" %d", &num2);
  
            res = num1 - num2;
  
            printf (" Subtraction of two numbers is: %.2f", res);
  
            break;
          case 3:  
            // Multiplication of the numbers
  
            printf (" You chose: Multiplication");
  
            printf ("\n Enter First Number: ");
  
            scanf (" %d", &num1);
  
            printf (" Enter Second Number: ");
  
            scanf (" %d", &num2);
  
            res = num1 * num2;
 
             printf (" Multiplication of two numbers is: %.2f", res);
  
            break;
          case 4:   
            // Division of the numbers
  
            printf (" You chose: Division");
  
            printf ("\n Enter First Number: ");
  
            scanf (" %d", &num1);
  
            printf (" Enter Second Number: ");
  
            scanf (" %d", &num2);
  
            if (num2 == 0)
  
                {
  
                    printf (" \n Divisor cannot be zero. Please enter another value ");
  
                    scanf ("%d", &num2);
        
                }
  
            res = num1 / num2;
 
             printf (" Division of two numbers is: %.2f", res);
  
            break;
            case 5:  
            // Square of a number
  
            printf (" You chose: Square");
  
            printf ("\n Enter First Number: ");
  
            scanf (" %d", &num1);
  
  
          res = num1 * num1;
 
             printf (" Square of %d number is: %.2f", num1, res);
  
            break;
            case 6:  
            // Square root of the number
  
            printf (" You chose: Square Root");
  
            printf ("\n Enter First Number: ");
  
            scanf (" %d", &num1);
  
             res = sqrt(num1);
    
          printf (" Square Root of %d numbers is: %.2f", num1, res);
  
            break;
            case 7:
  
            printf (" You chose: Exit");
  
            exit(0);
   
            break;
 
             default:
  
            printf(" Something is wrong!! ");
  
            break;
          }  
    
            printf (" \n \n --------------------------------------------- \n ");
  
    }
 
    while (ope != 7);
  
  
    return 0;
        
}
