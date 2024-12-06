#include <stdio.h>
main()
{

    int a;
    char grade;
    printf("enter your score :");
    scanf("%d", &a);

    grade = (a >= 90) ? 'A' : (a >= 80) ? 'B'
                          : (a >= 70)   ? 'C'
                          : (a >= 60)   ? 'D'
                                        : 'E';

    printf("your grade is %c\n", grade);

    switch (grade)
    {

    case 'A':
        printf(",Excellent work!");
        break;
    case 'B':
        printf(",Well done");
        break;
    case 'C':
        printf(",good job");
        break;

    case 'D':
        printf(",you could do better");
        break;

    case 'E':
        printf(",you are not passed");
        break;
    }

    // 3
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf(",You are eligible for the next level.");
    }
    else
    {
        printf("you are not eligible for the next level");
    }
}