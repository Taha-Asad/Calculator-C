#include <stdio.h>

void title()
{
    printf("Calculator \n");
    return;
}
int sum(int a, int b)
{
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return sum;
}
int subtract(int a, int b)
{
    int sub = a - b;
    printf("The substraction of %d and %d is %d\n", a, b, sub);
    return sub;
}
int Multiplication(int a, int b)
{
    int multiple = a * b;
    printf("The multiplication of %d and %d is %d\n", a, b, multiple);
    return multiple;
}
double Division(int a, int b)
{
    double divid = (double)a / b;
    printf("The division of %d and %d is %.2f\n", a, b, divid);
    return divid;
}
int userChoice()
{
    int choice;
    printf("\nChoose operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit Program\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}
void PerformOperation(int choice)
{
    int number1;
    printf("Enter Number: ");
    scanf("%d", &number1);
    int number2;
    printf("Enter Number: ");
    scanf("%d", &number2);
    switch (choice)
    {
    case 1:
        sum(number1, number2);
        break;
    case 2:
        subtract(number1, number2);
        break;
    case 3:
        Multiplication(number1, number2);
        break;
    case 4:
        Division(number1, number2);
        break;
    default:
        printf("Invalid choice!\n");

        break;
    }
    return;
}
int main(void)
{
    title();
    int choice;
    do
    {
        choice = userChoice();
        if (choice == 5)
        {
            printf("Exiting program...\n");
            break;
        }
        PerformOperation(choice);
    } while (choice != 5);

    return 0;
}

// gcc -Wall -Wextra -Werror -o hello basic.c
// watchexec is the name of the package which act as nodemon
// gcc means to compile before running the code unlike C# which has  interperator and compiler C has only compiler whcih creates .exe file before running
// watchexec -e c 'gcc basic.c -o basic.exe; if ($?) { .\basic.exe }'