
#include <stdio.h>

int main() {
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int number;
    printf("Please enter a number:\n");
    scanf("%d", &number);

    if(number < 200)
        printf("Number is less than 200!\n");
    else if(number == 200)
        printf("Number is 200!\n");
    else
        printf("Number is greater than 200!\n");

    printf("\n\n\t\t\tCoding is Fun!\n\n\n");

    return 0;
}


The output of the provided C program depends on the input value entered by the user when prompted. Here's how it works:

Static Output (before input):

Studytonight - Best place to learn


Please enter a number:

At this point, the program waits for the user to input a number. The rest of the output depends on what is entered:

If user enters 150:

Number is less than 200!


			Coding is Fun!

If user enters 200:

Number is 200!


			Coding is Fun!

If user enters 250:

Number is greater than 200!


			Coding is Fun!
