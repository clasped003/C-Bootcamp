#include <stdio.h>
#include <stdlib.h>

/* Sphere Challange:
 *
 * Task: Calculate Surface and Volume of a sphere.
 *
 *  Steps:
 *
 *  XPrompt user to enter the radius.
 *  -Calculate the surface area
 *  -Calculate the enclosed volume
 *  -Print the radius and the results in decimal format(w/2 digit precision)
 *  -Print the radius & results in sci-notation(w/3 digit precision)
 *  -Check the results
 *  */

int main(void){
    int radius;
    
    puts("Sphere Calculator!");
    printf("Please enter the radius of the sphere: ");
    scanf("%d", &radius);
    printf("Your radius is: %d", radius);
    
    return 0;
}
