#include <stdio.h>

main()
{

    int i, n, ans = 0;

    printf("enter any nov :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        ans = ans + i;
    }
    printf("sum is %d\n", ans);

    // factorial no
    int i2, n2, n3, ans2=1;
    n3 = 1;

    printf("enter no2 :");
    scanf("%d", &n2);

    for (i2 = 1; i2 <= n2; i2++)
    {

        ans2 = ans2*i2;
    }

     printf("%d\n", ans2);
}