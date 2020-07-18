#include <stdio.h>

// Method prototype
void distributeChocolate(int, int);
void takeInput();

int main()
{
    takeInput();
    return 0;
}

void takeInput()
{
    int numberOfTestcase, numberOfChocolate, numberOfStudent;
    printf("Enter the number of testcase:");
    scanf("%d", &numberOfTestcase);

    for (int i = 0; i < numberOfTestcase; i++)
    {
        printf("Enter the number of chocolate and students:");
        scanf("%d %d", &numberOfChocolate, &numberOfStudent);
        distributeChocolate(numberOfChocolate, numberOfStudent);
    }
}

void distributeChocolate(int numberOfChocolate, int numberOfStudent)
{
    // The maximum continous distribution
    int distribution = (numberOfStudent * (numberOfStudent + 1)) / 2;

    // If maximum distribution is greater than available chocolate
    if (distribution > numberOfChocolate)
    {
        printf("%d\n", numberOfChocolate);
    }
    else
    {
        int value = numberOfChocolate - distribution;
        value = value % numberOfStudent;
        printf("%d\n", value);
    }
}

