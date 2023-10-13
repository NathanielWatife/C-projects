// first the header files
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // first we have 3 var and the first and second var will be added together and we get the output the third var.
    // working with float numbers
    float myNumber = 10.5;
    float mySecondNum = 5.5;
    float myTotalNum = myNumber / mySecondNum;
    printf("The Total of %.2f and %.2f is equal to %.2f ", myNumber, mySecondNum, myTotalNum);
    return 0;
}