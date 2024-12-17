#include <stdio.h>

main()
{

    // // lenght od array
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("enter value :");
        scanf("%d", &a[i]);
    }
    printf("lenght of array is %d", n);

    // // average of array

    int n1, i1, b = 0;

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n1);

    int a1[n1];

    for (i1 = 0; i1 < n1; i1++)
    {
        printf("\nenter value :");
        scanf("%d", &a1[i1]);
    }

    for (i1 = 0; i1 <= n1; i1++)
    {

        b = b + a1[i1];
    }
    b = b / n;
    printf("\nthe average is = %d", b);

    // sum of 2 array

    int n3, i3;

    printf("Enter the number of elements of a3 : ");
    scanf("%d", &n3);

    int a3[n3];

    for (i3 = 0; i3 < n3; i3++)
    {
        printf("enter value :");
        scanf("%d", &a3[i3]);
    }
    //

    int n4, i4;

    printf("Enter the number of elements in the array a4: ");
    scanf("%d", &n4);

    int a4[n4];

    for (i4 = 0; i4 < n4; i4++)
    {
        printf("enter value :");

        scanf("%d", &a4[i4]);
    }

    int a5[n4];
    for (i4 = 0; i4 < n4; i4++)
    {
        a5[i4] = a3[i4] + a4[i4];
    }
    printf("sum of two array is :");
    for (i4 = 0; i4 < n4; i4++)
    {
        printf("%d ", a5[i4]);
    }
}