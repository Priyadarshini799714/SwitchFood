#include <stdio.h>
int main()
{    
     int number;
     printf("Enter a number(1-5): ");
     scanf("%d", &number);
     switch(number)
     {
         case 1:
           printf("Food item - Pizza\n");
           printf("Price - Rs. 239");
           break;
         case 2:
           printf("Food item - Burger\n");
           printf("Price - Rs. 129");
           break;
         case 3:
           printf("Food item - Pasta\n");
           printf("Price - Rs. 179");
           break;
         case 4:
           printf("Food item - French Fries\n");
           printf("Price - Rs. 99");
           break;
         case 5:
           printf("Food item - Sandwich\n");
           printf("Price - Rs. 149");
           break;
         default:
           printf("Invalid Input");
    }
    return 0;
}
