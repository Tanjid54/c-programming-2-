#include <stdio.h>
int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    if(number > 0)
        printf("The number is Positive.\n");
    else if(number < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");

    return 0;
}


The output of the program depends on the input provided by the user. Here's how it behaves for different inputs:

Example 1:

User Input: 5
Output:

Enter any number: The number is Positive.

Example 2:

User Input: -3
Output:

Enter any number: The number is Negative.

Example 3:

User Input: 0
Output:

Enter any number: The number is Zero.
