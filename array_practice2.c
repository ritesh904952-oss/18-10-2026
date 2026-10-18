#include <stdio.h>

int main()
{
    int m[4];
    int i;

    printf("Enter 4 numbers: ");

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &m[i]);
    }

    for (i = 0; i < 4; i++)
    {
        printf("The number is: %d\n", m[i]);
    }

    return 0;
}