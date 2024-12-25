#include <stdio.h>

void swap(int a, int b)
{
    int h;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nthis is final no first=%d and sec =%d", a, b);
}

int main()
{

    // 3

    int r1, c1;

    printf("\nenter coll :");
    scanf("%d", &c1);

    printf("\nenter row:");
    scanf("%d", &r1);
    int a[c1][r1];
    int i, j;

    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            printf("enter el :");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    int b[i][j];

    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            printf("enter el :");
            scanf("%d", &b[i][j]);
        }
    }

    int c[i][j];

    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    // 2
    float d;
    float f;
    printf("enter temp int degree :");
    scanf("%f", &d);

    f = d * 9 / 5 + 32;

    printf("temp in fahrenheit is %f", f);

    // 1

    int first, sec;

    printf("\nenter the first no :");
    scanf("%d", &first);

    printf("\nenter the second no :");
    scanf("%d", &sec);

    printf("you entered first=%d and sec=%d", first, sec);

    swap(first, sec);

    // 5
    printf("\n");
    char al, al1;
    int k;
    for (al = 'A'; al <= 'E'; al++)
    {
        // for (k = al; k < 'E'; k++)
        // {
        //     printf(" ");
        // }
        for (al1 = al; al1 >= 'A'; al1--)
        {
            printf("%c", al1);
        }
        printf("\n");
    }

    // 4
    int per;
    printf("\nenter your per :");
    scanf("%d", &per);
    ;

    if (per >= 90)
    {
        printf("your grade is A");
    }
    else if (per >= 80)
    {
        printf("your grade is b");
    }
    else if (per >= 70)
    {
        printf("your grade is c");
    }
    else if (per >= 60)
    {
        printf("your grade is d");
    }
    else if (per >= 40)
    {
        printf("your grade is E");
    }
    else
    {
        printf("grade failed");
    }
}