#include <stdio.h>

main()
{

    // print a to z using for loop

    char i2;

    for (i2 = 'a'; i2 <= 'z'; i2++)
    {

        printf("%c\n", i2);
    }
    // swap two numbers
    int var1 = 10, var2 = 20;

    var1 = var1 + var2; // var1 = 30

    var2 = var1 - var2; // var2=10
    var1 = var1 - var2; // var1=20

    printf("\nthe value of var1 and var2 is %d and %d", var1, var2);

    // print sum og odd no from 1 to n
    int i = 1, no, sum = 0;
    printf("\nEnter the no : ");
    scanf("%d", &no);

    do
    {
        if (i % 2 != 0)
        {

            sum = sum + i;
        }
        i++;
    } while (
        i <= no);

    printf("\nthe sum of odd no is %d", sum);

    // digit count

    int no2, count = 1;

    printf("\nenter the no :");
    scanf("%d", &no2);

    while (no2 / 10 != 0)
    {

        no2 = no2 / 10;
        count++;
    }
    printf("digit is %d", count);

    // find minimum value

    int varr1, varr2, varr3;
    printf("\nenter the three no : ");
    scanf("%d%d%d", &varr1, &varr2, &varr3);

    if (varr1 < varr2)
    {
        if (varr1 < varr3)
        {
            printf("\nminimum value is %d", varr1);
        }
        else
        {
            printf("\nminimum value is %d", varr3);
        }
    }
    else
    {
        if (varr2 < varr3)
        {
            printf("\n minimum value is %d", varr2);
        }
        else
        {
            printf("\nminimum value is %d", varr3);
        }
    }
}
