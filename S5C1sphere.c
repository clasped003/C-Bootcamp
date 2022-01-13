#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI_NUM 3.14

/* Sphere Challange:
 *
 * Task: Calculate Surface and Volume of a sphere.
 *
 *  Steps:
 *
 *  XPrompt user to enter the radius.
 *  XCalculate the surface area
 *  XCalculate the enclosed volume
 *  XPrint the radius and the results in decimal format(w/2 digit precision)
 *  XPrint the radius & results in sci-notation(w/3 digit precision)
 *  XCheck the results
 *  */

int main(){
    int radius;
    float pi = PI_NUM;
    float sArea;
    float volume;

    puts("Sphere Calculator!");
    printf("Please enter the radius of the sphere: ");
    scanf("%d", &radius);
    puts("Surface area: ");
    printf("\nYour given radius in decimal is: %.2f\n", (float)radius);
    printf("Your given radius in scientific notation is: %.3e\n", (float)radius);
    sArea = 4 * pi * pow(radius,2);
    printf("Your surface area in decimal is:%.2f\n", sArea);
    printf("Your surface area in SN is:%.3e\n", sArea);
    puts("Volume: ");
    volume = 4.0 / 3 * pi * pow(radius,3);
    printf("Your volume in decimal is: %.2f\n", volume);
    printf("Your volume in SN is: %.3e\n", volume);
    return 0;
}
