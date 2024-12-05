#include <stdio.h>
main()
{

    int a;
    char grade;
    printf("enter your score :");
    scanf("%d", &a);
   
    (a <= 100 && a >= 90) ? printf("your grade is A") :

    (a <= 89 && a >= 80)   ? printf("your grade is B")
    : (a <= 79 && a >= 70) ? printf("your grade is C")
    : (a <= 69 && a >= 60) ? printf("your grade is D")
                           : printf("you are passed");

    // 2
    switch ()
    {

    case :
        printf("Excellent work!");
        break;
    }
}