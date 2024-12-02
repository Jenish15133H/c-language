#include <stdio.h>

main()
{
    // 1
    /*  float temp, Fahrenheit;
      printf("enter the value of temp in degrees Celsius:");

      scanf("%f", &temp);
      Fahrenheit = (temp * 9 / 5) + 32;

      printf("the value of temp in degrees Fahrenheit is %f", Fahrenheit);

      // 2printf("Program started...\n");

      float hra, da, ta, salery, gross_salery;

      printf("\n\n\nenter the value of salery,hra,da,ta, :");
      scanf("%f%f%f%f", &salery, &hra, &da, &ta);

      gross_salery = salery + salery * hra / 100 + salery * da / 100 + salery * ta / 100;

      printf("n\n\nyour gross salery is %f", gross_salery);*/

    // 3

    float e1, e2, e3, an;
    printf("enter the value of two engle of Triangle :");

    scanf("%f%f", &e1, &e2);
    an = e1 + e2;

    e3 = 180 - an;

    printf("the third angle of Triangle is %f", e3);
}