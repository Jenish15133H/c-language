#include <stdio.h>

main()
{

//area of circle
const float pie =3.14 ;
float r ;
float ans1 ;


printf("enter the value of r :");

scanf("%f",&r);
 
 ans1 = pie*r*r;

printf("the area of circle is %f:" , ans1);

//Write a Program to find the area of a rectangle.
float l;
float ans2 ;
printf("\n\n\nenter the value of lenght :");

scanf("%f" ,&l);

ans2 = l*l ;

printf("the area of rectangle is : %f" ,ans2 );

//Write a Program to find the area of a triangle.
float b , h ,ans3 ;
printf("\n\n\nenter the value of b :");

scanf("%f",&b);

printf("enter the value of h :");
scanf("%f", &h);

ans3 = b*h/2 ;

printf("the area of triangle is %f" , ans3);

//Write a Program to find Simple interest.

float p,r1 ,n , ans4;

printf("\n\n\nentr the value of p :");
scanf("%f" , &p);

printf("enter the value of r :");
scanf("%f",&r1);

printf("enter the value of n :");

scanf("%f", &n);

ans4 = p*r*n/100 ;

printf("the simple interest is %f" , ans4);

//Write a Program to find the Perimeter of the circle.

float r2 ;
float ans5 ;

printf("\n\n\nenter the value of r:");
scanf("%f",&r2);


ans5 = 2*pie*r2 ;

printf("the perimeter of circle is %f", ans5);



}