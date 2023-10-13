#include <stdio.h>
#include <stdlib.h>
/**
 * we are to get user to enter a number
 * then add the numbers together
 * and printout the output
*/
int main()
{
    int num1 = 0;
    printf("Enter a number: ");
    scanf("%i", &num1);
    // printf("%i\n", num1);
    // user enters second input
    int num2 = 0;
    printf("Enter another number: ");
    scanf("%i", &num2);
    printf("Total of first_number and second_number is: %i", num1 + num2);
    return 0;
}