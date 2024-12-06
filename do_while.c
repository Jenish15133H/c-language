#include <stdio.h>

main()
{

    int i = 1;

    do
    {

        printf("%d\n", i);
        i++;

    } while (i <= 10);

    // 2

    int i2 = 10;

    do
    {
        printf("%d\n", i2);

        i2--;
    } while (i2 >= 1);

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

    // 4
    int z;

    printf("enter the no :");
    scanf("%d", &z);

    do
    {
        printf("\n%d", z);
        z--;
    } while (z >= 1);

    // leap year

    int y1, y2;

    printf("enter starting year:");
    scanf("%d", &y1);

    printf("enter ending year");
    scanf("%d", &y2);

    do
    {
        if (y1 % 4 == 0)
        {

            printf("\n%d", y1);
        }
        y1++;

    } while (y1 <= y2);
}