#include <stdio.h>
#include <stdlib.h>

void even_odd();
void positive_negative(int num);

int main() 
{
    int choice,num, a, b, c, sum, temp;

    while (1) 
    {
       
        printf("\n--- Logical Operations Menu ---\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Positive or Negative\n");
        printf("3. Find Greatest of Three Numbers\n");
        printf("4. Sum of Digits\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
            even_odd();
            break;
                
            case 2:
            printf("Enter a number: ");
                scanf("%d", &num);
                positive_negative(num);
               
             break;


            case 3:
                       printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);
                if (a >= b && a >= c)
                    printf("%d is the greatest.\n", a);
                else if (b >= a && b >= c)
                    printf("%d is the greatest.\n", b);
                else
                    printf("%d is the greatest.\n", c);
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);
                sum = 0;
                temp = abs(num); 
                while (temp > 0) 
                {
                    sum += temp % 10;
                    temp /= 10;
                }
                printf("Sum of digits: %d\n", sum);
                break;

            case 5:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
                break;
              
              

           
        }
    }

    return 0;
}

void even_odd()
{ 
          int num;
          printf("Enter an integer: ");
                scanf("%d", &num);
                if (num % 2 == 0)
                    printf("%d is Even.\n", num);
                else
                    printf("%d is Odd.\n", num);
               

}

         
void positive_negative( int num)
{
  
      if (num > 0)
         printf("%d
         
         is Positive.\n", num);
      else if (num < 0)
         printf("%d is Negative.\n", num);
      else
         printf("The number is Zero.\n");
}        

