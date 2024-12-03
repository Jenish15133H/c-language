#include <stdio.h>

main()
{

    // int a, b, c;

    // printf("Enter a value of the first number:");
    // scanf("%d", &a);

    // printf("Enter a value of the second number:");
    // scanf("%d", &b);

    // printf("enter the value of third number");
    // scanf("%d", &c);

    // if (a < b)
    // {

    //     if (a < c)
    //     {
    //         printf("%d is the smallest number", a);
    //     }
    // }
    // else if (b < a)
    // {

    //     if (b < c)
    //     {
    //         printf("%d is the smallest number", b);
    //     }
    // }
    // else if (c < a)
    // {

    //     if (c < b)
    //     {

    //         printf("%d is the smallest number", c);
    //     }
    // }

    // 2

    int w, x, y, z;

    printf("enter the value of w x y z");
    scanf("%d%d%d%d", &w, &x, &y, &z);

    if (w > x)
    {
        if (w > y)
        {
            if (w > z)
            {
                printf("%d is the maximum value", w);
            }
            else
            {
                printf("%d is the  maximum value", z);
            }
        }
        else
        {
            if (x > y)
            {
                if (x > z)
                {
                    printf("%d is the maximum value", x);
                }
                else
                {
                    printf("%d is the maximum value", z);
                }
            }
        }
    }
    else if (y > z)
    {
        printf("%d is the maximum value", y);
    }
    else
    {
        printf("%d is the maximum value", z);
    }
}
