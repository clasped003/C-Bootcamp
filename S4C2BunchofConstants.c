/*2nd challenge of Section 4 of The Complete C Programming Bootcamp course*/ /*Bunch of Constants: Define the following numeric constants:
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
    /*Declare all variables listed as constants*/
    const int moonLanding = 1969;
    /*This needs to print as a double. Though it 
     * is initiated as an int, it will be converted during compilation. You
     * can also add a decimal point at the end if you want, with no following
     * digits.*/
    const double speedOfLight = 299792458.;
    /*Pi should also be initialized as a double.*/
    const double pi = 3.142;
    /*Define this as unsigned, and then type out like you did before, but
     * add U at the end to show it as unsigned.*/
    const unsigned int hexaDead = 0XDEADU;
    /*Define this as unsigned and add U at the end*/
    const unsigned int hexaSecret = 51966U;

    puts("Bunch of Constants! Printing constants.");
    puts("Listing per challenge requirements. . .");
    printf("%10d | Moon Landing\n", moonLanding);
    printf("%010d | Moon Landing\n", moonLanding);
    printf("%.0f | Speed of Light\n", speedOfLight);
    printf("%.3e | Speed of Light\n", speedOfLight);
    printf("%.2f | Pi\n", pi);
    printf("%+.1e | Pi\n", pi);
    /*You can add 0x BEFORE the percent sign to print the full hex# if
     * needed.*/
    printf("0x%X | HexaDead\n", hexaDead);
    /*Can do an unsigned int listed through printf with a u character after %.
     * This entry you need a 6 instead of a 5.*/
    printf("%6u | HexaDead\n", hexaDead);
    /*Only need %x for this one*/
    printf("%x | HexaSecret\n", hexaSecret);
    return 0;
}
