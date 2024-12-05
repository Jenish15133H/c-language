#include <stdio.h>
main()
{

    int a, grade;
    grade = 0;
    printf("enter your score :");
    scanf("%d", &a);

    (a <= 100 && a >= 90) ? printf("your grade is A") : grade++;

    (a <= 89 && a >= 80) ? printf("your grade is B") : grade++;
    (a <= 79 && a >= 70) ? printf("your grade is C") : grade++;
    (a <= 69 && a >= 60) ? printf("your grade is D") : printf(".");

    // 2
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
        // if (grade <= 3)
        // {
        //     printf(",You are eligible for the next level.");
        // }
        // else
        // {
        //     printf("you are not eligible for the next level");
        // }
    }
}