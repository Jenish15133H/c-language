#include <stdio.h>

int main()
{

    int i, j, k;

    // 1
    for (i = 41; i <= 45; i++)

    {
        for (j = 41; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // 2
    // 3
    for (i = 5; i >= 1; i--)
    {

        for (k = i; k > 1; k--)
        {
            printf(" ");
        }

        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // 4

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // 5

    for (i = 5; i >= 1; i--)
    {

        for (k = i; k > 1; k--)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        for (k = 4; k >= i; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    // 5

    printf("\n\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (k = i; k <= 4; k++)
        {
            printf("  ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // p
    printf("\n\n");

    for (i = 1; i <= 5; i++)
    {

        if (i == 1 || i == 3)
        {
            printf("* * * * *");
        }
        else if (i == 2)
        {
            printf("*       *");
        }
        else
        {
            printf("*");
        }
        printf("\n");
    }

    // 2
    int count;
    for (i = 11; i <= 20; i++)
    {

        printf("%d", i);
        count++;
        if(count==1)
        {
            printf("");
        }
    }
    

}