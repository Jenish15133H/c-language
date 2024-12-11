#include <stdio.h>
main()
{
    // skip three no

    // char i;
    // char no;

    // for (i = 'a'; i <= 'z'; i++)
    // {

    //     printf("%c\n", i);

    //     i = i + 3;
    // }

    // find the digit

    int i1, no1, j, last, count = 1;

    printf("enter the no :");
    scanf("%d", &no1);

    for (i1 = 0; i1 <= no1; i1++)

    {

        no1 = no1 / 10;
        if (no1 != 0)
        {
            count++;
        }
    }
    printf("\nthe total digit is = %d", count);

    printf("\nentr any no :");
    scanf("%d", &no1);

    last = no1 % 10;

    for (i1 = 1; i1 < count; i1++)
    {

        if (no1 > 0)
        {
            no1 = no1 / 10;
            // printf("hi %d\n", no1);
        }
    }

    printf("\nthe sum of first and last digit is %d", last + no1);
}
