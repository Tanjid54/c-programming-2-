#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    return 0;
}


The output of the program depends on the input provided by the user when prompted. Here's how the program behaves:

Sample Execution 1:

Enter a number: 4
4 is Even.

Sample Execution 2:

Enter a number: 7
7 is Odd.

Explanation:

The program checks whether the entered number is divisible by 2.

If num % 2 == 0, it's even; otherwise, it's odd.
