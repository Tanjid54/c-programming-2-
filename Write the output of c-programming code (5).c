#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");

    return 0;
}

The output of the program depends on the user input at runtime. Here's how it works:

Example 1:

Input:

Enter your age: 20

Output:

You are eligible to vote.

Example 2:

Input:

Enter your age: 16

Output:

You are not eligible to vote.
