/*2nd challenge of Section 4 of The Complete C Programming Bootcamp course*/
/*Bunch of Constants: 
 *
 * Define the following numeric constants:
 *  - moonLanding: 1969
 *  - speedOfLight: 299792458
 *  - pi: 3.142
 *  - hexaDead: 0xDEAD
 *  - hexaSecret: 51966
 *
 * Print with following formats:
 *  -moonLanding:
 *      -integer, 10 chars width, pad w/ spaces
 *      -integer, 10 chars width, pad w/ zeroes
 *  -speedOfLight:
 *      -floating pt w/o digits after decimal pt
 *      -scientific notation w/ 3 digit precision
 *  -pi:
 *      -float pt w/ 2 digit precision
 *      -sci notation w/ 1 digit precision, sign forced
 *  -hexaDead:
 *      -unsigned hex integer, uppercase, leading 0x
 *      -unsigned int, 6 chars wide
 *  -hexaSecret:
 *      -unsigned hex int, lowercase, no leading 0x
 */
#include <stdio.h>

int main(void){
    int moonLanding = 1969;
    int speedOfLight = 299792458;
    float pi = 3.142;
    int hexaDead = 0XDEAD;
    int hexaSecret = 51966;

    puts("Bunch of Constants! Printing constants.");
    puts("Listing per challenge requirements. . .");
    printf("%10d | Moon Landing\n", moonLanding);
    printf("%010d | Moon Landing\n", moonLanding);
    printf("%.0f | Speed of Light\n", (float)speedOfLight);
    printf("%.3e | Speed of Light\n", (float)speedOfLight);
    printf("%.2f | Pi\n", pi);
    printf("%+.1e | Pi\n", pi);
    printf("%X | HexaDead\n", hexaDead);
    printf("%5d | HexaDead\n", hexaDead);
    printf("%x | HexaDead\n", hexaDead);
    return 0;
}
