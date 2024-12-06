#include <stdio.h>
main()
{

    int a;
    printf("enter your score :");
    scanf("%d", &a);
    char grade ;

     grade = a>90 



     
    switch (grade)
    {

    case 0:
        printf(",Excellent work!");
        break;
    case 1:
        printf(",Well done");
        break;
    case 2:
        printf(",good job");
        break;

    case 3:
        printf(",you are not passed");
        break;

        // // 3
        if (grade <= 3)
        {
            printf(",You are eligible for the next level.");
        }
        else
        {
            printf("you are not eligible for the next level");
        }
    }
}