#include <stdio.h>
#include <math.h>

void calc();

int main()
{
    int choice;
    double first, second, result;
    do
    {
        calc();
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter the first number");
            scanf("%lf", &first);
            printf("Enter the second number");
            scanf("%lf", &second);
        }
        switch (choice)
        {
        case 1:
            result = first + second;
            printf("Result %.2lf",result);
            break;
        case 2:
            result = first - second;
            printf("Result %.2lf", result);
            break;
        case 3:
            result = first * second;
            printf("Result %.2lf", result);
            break;
        case 4:
            if (second != 0)
            {
                result = first / second;
                printf("Result %.2lf", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed \n");
            }
            break;
        case 5:
            printf("Exiting calculator.\n");
            break;

        default:
        printf("Invalid choice");
            break;
        }
    } while (choice != 5);

    return 0;
}

void calc()
{
    printf("\nWelcome to the calculator\n");
    printf("1.  ADDITION\n");
    printf("2.  SUBTRACT\n");
    printf("3.  MULTIPLY\n");
    printf("4.  DIVIDE\n");
    printf("5.  EXIT\n");
    printf("Enter the Number do you want to process:- ");
}