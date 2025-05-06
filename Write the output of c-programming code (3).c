#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 80)
        printf("Grade: A+\n");
    else if(marks >= 70)
        printf("Grade: A\n");
    else if(marks >= 60)
        printf("Grade: B\n");
    else if(marks >= 50)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");

    return 0;
}

The output of this C program depends on the user input at runtime. Here's how it works:

Example Outputs:

Case 1: User enters 85

Enter your marks: 85
Grade: A+

Case 2: User enters 73

Enter your marks: 73
Grade: A

Case 3: User enters 65

Enter your marks: 65
Grade: B

Case 4: User enters 52

Enter your marks: 52
Grade: C

Case 5: User enters 40

Enter your marks: 40
Grade: F
