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
        printf (" Select an operation to perform the calculation: ");
        printf("\n 1 Addition"); 
        printf("\n 2 Subtraction");
        printf("\n 3 Multiplication");
        printf("\n 4 Division");
        printf("\n 5 Square");
        printf("\n 6 Square Root");
        printf("\n 7 Percent");
        printf("\n 8 Power");
        printf("\n 9 Exit");
        printf("\n Please, Make a choice ");
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
            int sum(int n1, int n2)
                {
                    int num3;
                    num3 = n1 + n2;
                     return (num3);
                    }
            res = sum(num1,num2);
            printf (" Addition of two numbers is: %.2f", res);  
            break;   
        case 2: 
            // Subtract two numbers  
            printf (" You chose: Subtraction");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &num1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &num2); 
            int sub(int n1, int n2)
                {
                    int num3;
                    num3 = n1 - n2;
                     return (num3);
                    }
            res = sub(num1,num2);  
            printf (" Subtraction of two numbers is: %.2f", res);  
            break;   
        case 3:  
            // Multiplication of the numbers  
            printf (" You chose: Multiplication");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &num1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &num2);
            int mul(int n1, int n2) 
                {
                    int num3;
                    num3 = n1 * n2;
                     return (num3);
                    }
            res = mul(num1,num2); 
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
            int div(int n1, int n2) 
                {
                    int num3;
                    num3 = n1 / n2;
                     return (num3);
                    }
            res = div(num1,num2); 
            printf (" Division of two numbers is: %.2f", res);  
            break;  
        case 5:  
            // Square of a number  
            printf (" You chose: Square");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &num1);  
            int sq(int n1)
                {
                    int num3;
                    num3 = n1* n1;
                     return (num3);
                    }
            res = sq(num1); 
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
                // Percentage of the number
            printf("You chose: Percentage");
            printf("Enter First Number: ");
            scanf (" %d", &num1);
            printf("Enter Second Number: ");
            scanf (" %d", &num2);
            int per(int n1, int n2) 
                {
                    float num3;
                    float temp;
                    temp=(float)n2/100.0;
                    num3=temp*n1;
                     return (num3);
                    }
            res=per(num1,num2);
            printf("%d percent of %d is : %.2f", num2,num1,res);
            break;
        case 8:
                //Power of the number
            printf (" You chose: Power");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &num1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &num2);  
            res=pow(num1,num2);
            printf (" %d Power %d is: %.2f",num1,num2, res);
            break;
        case 9:  
            printf (" You chose: Exit");  
            exit(0);   
            break; 
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n --------------------------------------------- \n ");  
    } 
    while (ope != 9);  
    return 0;        
}
