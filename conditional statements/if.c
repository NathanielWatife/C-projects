#include <stdio.h>
#include <stdlib.h>

int main()
{
    char passcode;
    // we asking a user to enter the password or a text
    printf("Please enter your passcode: ");
    // then we read what the user entered
    scanf("%c", &passcode);
    // conditional statement if is applied here
    // so we check if the user is authorised.
    if (passcode == 'D' || 'd')
        printf("You are authorised");
    // if not authorised the else statement with outputed.
    else
        printf("Unauthorised");
    return 0;
}