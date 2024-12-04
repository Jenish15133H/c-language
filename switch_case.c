#include <stdio.h>

main()
{

    int a;

    printf("enter 1 for english\nenter 2 for hindi\n enter 3 for gujrati\n enter your choice:");
    scanf("%d", &a);

    switch (a)
    {

    case 1:
        printf("enter 1 for topup\nenter 2 for special recharge");
        break;

    case 2:
        printf("topup recharge ke lie 1 dabaye");
    }
}