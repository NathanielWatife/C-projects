#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculator");
    char letter;
    int num1;
    int num2;
    printf("What operation do you want to use:\n \tA) Addition\n \tB) Substract\n \tC) Multiplication\n \tD) Division\n");
    scanf("%c", &letter);

    printf("Enter a number: ");
    scanf("%i", &num1);

    printf("Enter the second number: ");
    scanf("%i", &num2);
    //
    if (letter == 'A' || letter == 'a')
        printf("Output = %i", num1 + num2);

    else if (letter == 'B' || letter == 'b')
        printf("Output = %i", num1 - num2);

    else if (letter == 'C' || letter == 'c')
        printf("Output = %i", num1 * num2);

    else if (letter == 'D' || letter =='d')
        printf("Output = %i", num1 / num2);
        
    else
        printf("You entered an invalid operator");
    return 0;
}    