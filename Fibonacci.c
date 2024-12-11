#include <stdio.h>

main()
{

    int i, no;

    printf("fibonacci no upto :");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)

    {

        printf("%d\n", i);

        i = i * i;
    }
}