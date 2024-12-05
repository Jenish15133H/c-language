#include <stdio.h>

main()
{

    // int i = 1;

    // do
    // {

    //     printf("%d\n", i);
    //     i++;

    // } while (i <= 10);

    // // 2

    // int i2 = 10;

    // do
    // {
    //     printf("%d\n", i2);

    //     i2--;
    // } while (i2 >= 1);

    // 3

    int w;

    printf("enter the no :");
    scanf("%d", &w);

    do
    {
        if (w % 2 != 0)
        {
            printf("%d\n", w);
        }
        w--;
    } while (w >= 1);
}