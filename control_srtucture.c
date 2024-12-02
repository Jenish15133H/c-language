#include <stdio.h>
main()
{
    int a, b;

    printf("Enter a value of the first number:");
    scanf("%d", &a);

    printf("\n\n\nEnter a value of the second number:");
    scanf("%d", &b);

    if (a < b)
    {
        printf("%d is minimum value ", a);
    }
    else
    {

        printf("%d is minimum value ", b);
    }

    // average of marks

    int m1, m3, m2, ave;

    printf("\n\nEnter maths marks: ");
    scanf("%d", &m1);

    printf("\n\nEnter english marks:");
    scanf("%d", &m2);

    printf("\n\nEnter science marks:");
    scanf("%d", &m3);

    printf("\n\nthe average marks is %d", ave = m1 + m2 + m3 / 3);
}
