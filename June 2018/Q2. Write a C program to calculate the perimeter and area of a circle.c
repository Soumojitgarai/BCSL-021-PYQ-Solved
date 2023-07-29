//Write a C program to calculate the perimeter and area of a circle whose radius is 
//given in centimetres. 20 
//Hint : Perimeter = 2 x it x r 
//Area = nr2 where IC = 3.1415

#include<stdio.h>
#include<math.h>
void main () {
    int radius_nigga;
    float android_pie=3.1415; //pie = 22/7 = 3.1415..blahh blahh blahh
    float area,perimeter;

    printf("Enter radius: ");
    scanf("%d",&radius_nigga);
    
    float square_of_r=pow(radius_nigga,2);
    perimeter=2*android_pie*radius_nigga;
    area=android_pie*square_of_r;

    printf("Perimeter: %.2f \n",perimeter);
    printf("Area: %.2f",area);

    getch();
    return 0;
}